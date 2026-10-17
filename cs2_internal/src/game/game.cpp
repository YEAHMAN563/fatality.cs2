#include <filesystem>
#include <game/cfg.h>
#include <game/draw_manager.h>
#include <game/game.h>
#include <game/hook_manager.h>
#include <ren/renderer.h>
#include <resources/smallest_pixel.h>
#include <sdk/cvar.h>
#include <sdk/engine.h>
#include <sdk/inputsystem.h>
#include <sdk/interface.h>
#include <sdk/offsets.h>
#include <utils/debug_log.h>
#include <utils/mem.h>

uint32_t utils::runtime_basis = 2166136261u;

//std::unique_ptr<game_t> game;

namespace fs = std::filesystem;

namespace sdk
{
	game_t::game_t(uintptr_t _base, uint32_t tok) :
		base(_base)
	{
		game_dir = ENC2(util::get_game_dir());

		if (!fs::exists(DEC_INLINE(game_dir) + XOR("fatality")))
			fs::create_directories(DEC_INLINE(game_dir) + XOR("fatality"));
		if (!fs::exists(DEC_INLINE(game_dir) + XOR("fatality/configs")))
			fs::create_directories(DEC_INLINE(game_dir) + XOR("fatality/configs"));
		if (!fs::exists(DEC_INLINE(game_dir) + XOR("fatality/scripts")))
			fs::create_directories(DEC_INLINE(game_dir) + XOR("fatality/scripts"));
		if (!fs::exists(DEC_INLINE(game_dir) + XOR("fatality/scripts/remote")))
			fs::create_directories(DEC_INLINE(game_dir) + XOR("fatality/scripts/remote"));
		if (!fs::exists(DEC_INLINE(game_dir) + XOR("fatality/scripts/lib")))
			fs::create_directories(DEC_INLINE(game_dir) + XOR("fatality/scripts/lib"));
	}

	void game_t::load_fonts()
	{
		std::vector<unsigned char> v;

		DWORD n_fonts;
		mem_font_handles.push_back(AddFontMemResourceEx(smallest_pixel.data(), smallest_pixel.size(), nullptr, &n_fonts));
		smallest_pixel.clear();
		auto vec = std::vector<unsigned char>(smallest_pixel);
		smallest_pixel.swap(vec);
	}

	void game_t::remove_fonts() const
	{
		for (auto& handle : mem_font_handles)
			RemoveFontMemResourceEx(handle);
	}

	void game_t::init()
	{
		using namespace utils;
		auto init_log = [](const char *stage)
		{
			OutputDebugStringA("[cs2_internal] ");
			OutputDebugStringA(stage);
			OutputDebugStringA("\n");
#ifdef _DEBUG
			utils::debug::log(utils::debug::level::info, "INIT", "%s", stage);
#endif
		};

		init_log("initialization started");

		const auto pTier0Handle = get_module_base_handle(TIER0_DLL);
		debug::pointer("tier0.dll", pTier0Handle);
		if (pTier0Handle == nullptr)
		{
			init_log("failed: tier0.dll not found");
			return;
		}

		const auto pClientHandle = get_module_base_handle(CLIENT_DLL);
		debug::pointer("client.dll", pClientHandle);
		if (pClientHandle == nullptr)
		{
			init_log("failed: client.dll not found");
			return;
		}

		const auto pEngineRegisterList = sdk::get_register_list(ENGINE2_DLL);
		debug::pointer("engine2 CreateInterface list", pEngineRegisterList);
		if (pEngineRegisterList == nullptr)
		{
			init_log("failed: engine2 CreateInterface list");
			return;
		}

		const auto pClientRegister = sdk::get_register_list(CLIENT_DLL);
		debug::pointer("client CreateInterface list", pClientRegister);
		if (pClientRegister == nullptr)
		{
			init_log("failed: client CreateInterface list");
			return;
		}


		const auto pTier0RegisterList = sdk::get_register_list(TIER0_DLL);
		debug::pointer("tier0 CreateInterface list", pTier0RegisterList);
		if (pTier0RegisterList == nullptr)
		{
			init_log("failed: tier0 CreateInterface list");
			return;
		}

		const auto pInputSystemRegisterList = sdk::get_register_list(INPUTSYSTEM_DLL);
		debug::pointer("inputsystem CreateInterface list", pInputSystemRegisterList);
		if (pInputSystemRegisterList == nullptr)
		{
			init_log("failed: inputsystem CreateInterface list");
			return;
		}


		static auto enwndcall = [](HWND handle, LPARAM lParam) -> BOOL CALLBACK
			{
				const auto MainWindow = [handle]()
					{
						return GetWindow(handle, GW_OWNER) == nullptr &&
							IsWindowVisible(handle) && handle != GetConsoleWindow();
					};

				DWORD nPID = 0;
				GetWindowThreadProcessId(handle, &nPID);

				if (GetCurrentProcessId() != nPID || !MainWindow())
					return TRUE;

				*reinterpret_cast<HWND*>(lParam) = handle;
				return FALSE;
			};

		// load interfaces
		sdk::client = Capture<ISource2Client>(pClientRegister, SOURCE2_CLIENT);
		sdk::resource_service = Capture<sdk::cgame_resource_service>(pEngineRegisterList, GAME_RESOURCE_SERVICE_CLIENT);
		sdk::engine = Capture<sdk::cengine_client>(pEngineRegisterList, SOURCE2_ENGINE_TO_CLIENT);
		sdk::cvar = Capture<sdk::ccvar>(pTier0RegisterList, ENGINE_CVAR);
		debug::pointer("sdk::client", sdk::client);
		debug::pointer("sdk::resource_service", sdk::resource_service);
		debug::pointer("sdk::engine", sdk::engine);
		debug::pointer("sdk::cvar", sdk::cvar);
		debug::offset("client::pGlobalVariables", ::offsets::client::pGlobalVariables);
		debug::offset("client::pCSGOInputInstance", ::offsets::client::pCSGOInputInstance);
		// CS2-SDK build 14184 direct globals. These replace the older fragile
		// instruction patterns for GlobalVars and CSGOInput.
		sdk::global_vars = *reinterpret_cast<sdk::global_vars_t **>(
			reinterpret_cast<uintptr_t>(pClientHandle) + ::offsets::client::pGlobalVariables);
		sdk::input = *reinterpret_cast<sdk::ccsgo_input **>(
			reinterpret_cast<uintptr_t>(pClientHandle) + ::offsets::client::pCSGOInputInstance);
		debug::pointer("sdk::global_vars", sdk::global_vars);
		debug::pointer("sdk::input", sdk::input);
		init_log("swap-chain will be captured from CreateSwapChain");
		sdk::input_system = Capture<sdk::cinput_system>(pInputSystemRegisterList, INPUT_SYSTEM_VERSION);
		sdk::mem_alloc = *reinterpret_cast<sdk::cmem_alloc**>(get_export_address(pTier0Handle, XOR("g_pMemAlloc")));
		debug::pointer("sdk::input_system", sdk::input_system);
		debug::pointer("sdk::mem_alloc", sdk::mem_alloc);

		// The renderer only requires a valid swap chain. Gameplay interfaces are
		// optional while visuals/movement are being rebuilt.
		init_log("interfaces ready; swap-chain capture pending");

		init_log("searching for game window");
		while (sdk::hWindow == nullptr)
		{
			EnumWindows(enwndcall, reinterpret_cast<LPARAM>(&sdk::hWindow));
			::Sleep(200U);
		}
		init_log("game window found");

		if (sdk::input_system && sdk::hWindow != nullptr)
		{
			init_log("installing window procedure");
			sdk::pOldWndProc = reinterpret_cast<WNDPROC>(SetWindowLongPtr(sdk::hWindow, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(hooks::input_system::wnd_proc)));
			init_log(sdk::pOldWndProc ? "window procedure installed" : "window procedure installation failed");
		}

		init_log("loading fonts");
		load_fonts();
		init_log("fonts loaded");

		// load other
		init_log("initializing configuration");
		cfg.init();
		init_log("configuration initialized");

#ifdef _DEBUG
		// Disabled: the legacy ccvar::unlock layout is not validated against the
		// current SDK build and was the last confirmed crash point. The current
		// visuals/movement-disabled build does not require unlocking cvars.
		init_log("cvar unlock skipped");
#endif

		init_log("starting hook initialization");
		hook_manager.init();
		init_log("initialization complete");
	}

	void game_t::unload() const
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(200));

		std::this_thread::sleep_for(std::chrono::milliseconds(200));

		draw_mgr.destroy_objects();
		sdk::input_system->set_input(true);
		evo::ren::draw.destroy_objects();
		evo::ren::draw = {};

		FreeLibrary(reinterpret_cast<HMODULE>(base));
		FreeLibraryAndExitThread(reinterpret_cast<HMODULE>(base), 0);
	}
}
