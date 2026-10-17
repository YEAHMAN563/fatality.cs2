#pragma once

#include <cstdint>
#include <sdk/macros.h>

namespace sdk::proto
{
    template <typename T, class I = int>
    struct repeated_ptr_t
    {
        struct rep_t { int alloc_size; PAD(4) T* mem[]; };
        T& operator[](I index) { return *mem->mem[index]; }
        const T& operator[](I index) const { return *mem->mem[index]; }
        T& elem(I index) { return *mem->mem[index]; }
        const T& elem(I index) const { return *mem->mem[index]; }
        static I invalid_index() { return static_cast<I>(-1); }
        bool is_valid_index(I index) const { return index >= 0 && index < cur_size && mem && index < mem->alloc_size; }
        int cur_size;
        int total_size;
        rep_t* mem;
    };

    struct message_t { PAD(0x18) };
    struct cmsg_qangle;
    struct cmsg_vector;
    struct cin_button_state_pb;
    struct csgointerpolation_info_pb;
struct csubtick_move_step : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t button;
			bool pressed;
			float when;
		}; // struct csubtick_move_step : message_t

struct cbase_user_cmd_pb : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			PAD(8)
			repeated_ptr_t<csubtick_move_step> subtick_moves;
			std::string* move_crc;
			cin_button_state_pb *buttons_pb;
			cmsg_qangle *viewangles;
			int command_number;
			int tick_count;
			float forwardmove;
			float leftmove;
			float upmove;
			int impulse;
			int weaponselect;
			int random_seed;
			int mousedx;
			int mousedy;
			uint32_t pawn_entity_handle;
			uint32_t consumed_server_angle_changes;
			int cmd_flags;
		}; // struct cbase_user_cmd_pb : message_t

struct csgoinput_history_entry_pb : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_qangle *view_angles;
			cmsg_vector *shoot_position;
			cmsg_vector *target_head_pos_check;
			cmsg_vector *target_abs_pos_check;
			cmsg_qangle *target_abs_ang_check;
			csgointerpolation_info_pb *cl_interp;
			csgointerpolation_info_pb *sv_interp0;
			csgointerpolation_info_pb *sv_interp1;
			csgointerpolation_info_pb *player_interp;
			int render_tick_count;
			float render_tick_fraction;
			int player_tick_count;
			float player_tick_fraction;
			int frame_number;
			int target_ent_index;
		}; // struct csgoinput_history_entry_pb : message_t

struct csgouser_cmd_pb : message_t
		{
			enum class eweapon_decision : uint32_t
			{
				k_e_none = 0x0,
				k_e_primary_attack = 0x1,
				k_e_secondary_attack = 0x2,
				k_e_zoom = 0x3,
				k_e_reload = 0x4,
				k_e_grenade_throw = 0x5,
				k_e_grenade_hold = 0x6,
				k_e_grenade_hold_then_throw = 0x7,
			}; // enum class eweapon_decision : uint32_t

			enum class egrenade_strength : uint32_t
			{
				k_e_low = 0x0,
				k_e_mid = 0x1,
				k_e_high = 0x2,
			}; // enum class egrenade_strength : uint32_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			PAD(8)
			repeated_ptr_t<csgoinput_history_entry_pb> input_history;
			cbase_user_cmd_pb *base;
			csgouser_cmd_pb::eweapon_decision *weapon_decision;
			csgouser_cmd_pb::egrenade_strength *target_grenade_strength;
			int attack1_start_history_index;
			int attack2_start_history_index;
			int attack3_start_history_index;
			int weapon_decision_weapon;
		}; // struct csgouser_cmd_pb : message_t
}
