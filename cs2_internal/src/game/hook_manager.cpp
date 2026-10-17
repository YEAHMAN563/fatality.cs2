#include <game/game.h>
#include <game/hook_manager.h>
#include <d3d11.h>
#include <utils/debug_log.h>
#include <utils/mem.h>

static void hook_log(const char *message)
{
	utils::debug::log(utils::debug::level::info, "HOOK", "%s", message);
}

static bool install_present_from_dummy_swap_chain()
{
	if (hooks::steam::hkPresent.IsHooked() || sdk::hWindow == nullptr)
		return hooks::steam::hkPresent.IsHooked();

	DXGI_SWAP_CHAIN_DESC description{};
	description.BufferCount = 1;
	description.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	description.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
	description.OutputWindow = sdk::hWindow;
	description.SampleDesc.Count = 1;
	description.Windowed = TRUE;
	description.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

	IDXGISwapChain *dummy_chain = nullptr;
	ID3D11Device *dummy_device = nullptr;
	ID3D11DeviceContext *dummy_context = nullptr;
	const D3D_FEATURE_LEVEL levels[] = { D3D_FEATURE_LEVEL_11_0 };
	D3D_FEATURE_LEVEL selected_level{};

	const HRESULT result = D3D11CreateDeviceAndSwapChain(
		nullptr,
		D3D_DRIVER_TYPE_HARDWARE,
		nullptr,
		0,
		levels,
		1,
		D3D11_SDK_VERSION,
		&description,
		&dummy_chain,
		&dummy_device,
		&selected_level,
		&dummy_context);

	if (FAILED(result) || dummy_chain == nullptr)
	{
		utils::debug::log(utils::debug::level::error, "HOOK", "dummy DX11 swap chain creation failed: 0x%08lX", static_cast<unsigned long>(result));
		if (dummy_context) dummy_context->Release();
		if (dummy_device) dummy_device->Release();
		if (dummy_chain) dummy_chain->Release();
		return false;
	}

	const bool hooked = hooks::steam::hkPresent.Create(
		utils::GetVFunc(dummy_chain, 8U),
		reinterpret_cast<void*>(&hooks::steam::present));

	if (dummy_context) dummy_context->Release();
	if (dummy_device) dummy_device->Release();
	if (dummy_chain) dummy_chain->Release();

	utils::debug::log(hooked ? utils::debug::level::ok : utils::debug::level::error,
		"HOOK", hooked ? "late Present hook installed" : "late Present hook installation failed");
	return hooked;
}

hook_manager_t hook_manager;

void hook_manager_t::init()
{
	hook_log("initializing MinHook");
	if (MH_Initialize() != MH_OK)
	{
		hook_log("MinHook initialization failed");
		return;
	}
	hook_log("MinHook initialized");

	hook_log("searching CreateSwapChain");
	const auto create_swap_chain = utils::find_pattern(RENDERSYSTEM_DLL, "44 88 4C 24 20 55 53 57 41 54 41 55 41 56 41 57");
	if (create_swap_chain)
	{
		hook_log("CreateSwapChain found; installing hook");
		if (!hooks::steam::hkCreateSwapChain.Create(create_swap_chain, reinterpret_cast<void*>(&hooks::steam::create_swap_chain)))
			hook_log("CreateSwapChain hook failed");
		else
			hook_log("CreateSwapChain hook installed");
	}
	else
		hook_log("CreateSwapChain pattern not found");

	if (!hooks::steam::hkPresent.IsHooked())
		install_present_from_dummy_swap_chain();
	// Disabled until the visuals rewrite supplies a callback matching the
	// current CS2-SDK GetMatrixForView prototype.

	// The legacy input/client vtable indices are not validated against the
	// current SDK build. They are unrelated to the renderer and were the next
	// confirmed crash point, so leave them disabled while the renderer is rebuilt.
	hook_log("legacy input/client hooks skipped");
}
