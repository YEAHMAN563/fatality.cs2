#pragma once

#include <cstddef>
#include <cstdint>

namespace sdk::offsets {

namespace functions {
inline constexpr std::ptrdiff_t con_msg = 0x74630;
inline constexpr std::ptrdiff_t con_color_msg = 0x74550;
inline constexpr std::ptrdiff_t load_text_file = 0x72ff10;

namespace mem_alloc {
inline constexpr std::ptrdiff_t str_dup_func = 0x109eb0;
}

namespace baseentity {
inline constexpr std::ptrdiff_t get_abs_origin = 0x219230;
}

namespace cgame_entity_system {
inline constexpr std::ptrdiff_t get_entity_by_index = 0x9f69c0;
}

namespace input {
inline constexpr std::ptrdiff_t get_view_angles = 0xb70c90;
inline constexpr std::ptrdiff_t set_view_angles = 0xb80af0;
}

namespace inputsystem {
inline constexpr std::ptrdiff_t vk_to_button_code = 0x3d50;
inline constexpr std::ptrdiff_t set_cursor_pos = 0x54e0;
}

namespace cgame_ui_funcs {
inline constexpr std::ptrdiff_t get_binding_for_button_code = 0x118030;
}

namespace utlbuffer {
inline constexpr std::ptrdiff_t ctor = 0x180550;
}

namespace panorama {
inline constexpr std::ptrdiff_t load_svg = 0x107810;
}
} // namespace functions

namespace cgame_resource_service {
inline constexpr std::ptrdiff_t game_entity_system = 0x58;
}

namespace cgame_entity_system {
inline constexpr std::ptrdiff_t last_entity_index = 0x1510;
}

namespace cinput_system {
inline constexpr std::ptrdiff_t relative_mouse_mode = 0x4f;
inline constexpr std::ptrdiff_t sdl_window = 0x2670;
}

namespace ccsgo_input {
inline constexpr std::ptrdiff_t current_command = 0x6034;
inline constexpr std::ptrdiff_t frame_command = 0x61e0;
inline constexpr std::ptrdiff_t input_msg_frame_slots = 0x6330;
}

} // namespace sdk::offsets

// Global addresses are resolved relative to a module base.
namespace offsets::client {
inline constexpr std::ptrdiff_t pCSGOInputInstance = 0x257B640;
inline constexpr std::ptrdiff_t pGlobalVariables = 0x2230090;
} // namespace offsets::client
