#pragma once

#include <game/game.h>

namespace sdk
{
	struct cinput_system
	{
		MEMBER_CUSTOM(relative_mouse_mode, cinput_system, bool);
		MEMBER_CUSTOM(sdl_window, cinput_system, void*);

		MFUNC(vk_to_button_code(int vk), int(*)(void *, int), inputsystem, inputsystem::vk_to_button_code)(vk);
		MFUNC(set_cursor_pos(int x, int y), void (*)(void *, int, int, void *), inputsystem, inputsystem::set_cursor_pos)(x, y, nullptr);

		void set_input(const bool enabled)
		{
			if (!get_relative_mouse_mode())
				return;

			using set_relative_mouse_mode_fn = void (*)(bool);
			using set_window_grab_fn = void (*)(void*, bool);
			const auto sdl = GetModuleHandleW(SDL3_DLL);
			if (!sdl)
				return;

			reinterpret_cast<set_relative_mouse_mode_fn>(GetProcAddress(sdl, "SDL_SetRelativeMouseMode"))(enabled);
			reinterpret_cast<set_window_grab_fn>(GetProcAddress(sdl, "SDL_SetWindowGrab"))(get_sdl_window(), enabled);
		}
	};
}
