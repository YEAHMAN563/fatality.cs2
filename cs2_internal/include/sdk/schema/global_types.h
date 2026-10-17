#ifndef SDK_SCHEMA_GLOBAL_TYPES_H
#define SDK_SCHEMA_GLOBAL_TYPES_H

#include <cstdint>

namespace sdk
{
	namespace schema
	{

		// TODO: replace these with actual classes
		using csplit_screen_slot = int;
		using world_group_id_t = int;
		using cutl_symbol_large = char*;
		using cbuffer_string = int;
		using key_values3 = int;
		using cglobal_symbol = int;
		using cutl_binary_block = int;
		using ctransform = int;
		using ccolor_gradient = int;
		using _canim_variant = int;
		using canim_variant = int;
		using centity_handle = int;
		using centity_index = int;
		using cpanorama_image_name = int;
		using cresource_name = int;
		using cparticle_named_value_ref = int;
		using cpiecewise_curve = int;
		using ckv3_member_name_with_storage = int;
		using cpulse_value_full_type = int;
		using key_values = int;
		using cutl_symbol = char*;
		using cutl_string_token_with_storage = int;
		using cresource_string = int;
		using cplayer_slot = int;
		using _csound_event_name = int;
		using cutl_vector_simdpadded_vector = int;
		using hscript = int;
		using float32 = float;
		using cnetworked_quantized_float = float;
		using int32 = int;
		using uint16 = uint16_t;
		using int16 = short;
		
		template <typename T> class cvariant_base {};
		template <typename T> class cweak_handle {};
		template <typename T> class cresource_name_typed {};
		template <typename T> class ccompressor {};
		template <typename T> class cutl_vector_fixed_growable {};
		template <typename T> class csmart_ptr {};
		template <typename T> class canim_value {};
		template <typename T> 
		class network_utl_vector_base 
		{
		public:
			uint32_t size;
		private:
			uint32_t pad;
		public:
			T* data;
		};
		struct cutl_string_token 
		{
			uint32_t hash;
			char* dbg_name;
		};
		template <typename T> class utl_vector_embedded_network_var {};
		template <typename T> class centity_output_template {};
		template <typename T> class canim_script_param {};
		template <typename T> class cutl_lean_vector {};
		template <typename T> class cresource_pointer {};
		template <typename T> 
		class cnetwork_utl_vector_base 
		{
		public:
			uint32_t size;
		private:
			uint32_t pad;
		public:
			T* data;
		};
		template <typename T> class cutl_vector_embedded_network_var {};
		template <typename T> class cstrong_handle_copyable {};
		template <typename T> class cresource_array {};
		template <int T> class cbit_vec {};
		constexpr auto invalid_ehandle_index = 0xffffffff;
		constexpr auto ent_entry_mask = 0x7fff;
		constexpr auto num_serial_num_shift_bits = 15;
		template <typename T>
		class chandle
		{
		public:
			uint32_t index;

			T *get();
			template <typename C>
			C *get_as();

			bool valid() const { return index != invalid_ehandle_index; }
			uint32_t get_entry_index() const { return valid() ? index & ent_entry_mask : ent_entry_mask; }
			uint32_t get_serial_number() const { return index >> num_serial_num_shift_bits; }
		};
		template <typename T, typename I> class cutl_pair {};
		template <typename T, typename I> class cutl_hashtable {};
		template <typename T, typename I> class cutl_map {};
		template <typename T> class cstrong_handle {};
		namespace server { class cbase_entity; class cshatter_glass_shard_physics; class cfunc_shatterglass; class cpoint_commentary_node; class cbase_anim_graph; class cscripted_sequence; };
		using namespace server;
		namespace client { class base_entity; };
		using namespace client;

		enum class three_state_t : uint32_t;
		enum class fieldtype_t : uint32_t;
		enum class fuse_variable_access_t : uint32_t;
		enum class fuse_variable_type_t : uint32_t;
		enum class render_slot_type_t : uint32_t;
		enum class input_layout_variation_t : uint32_t;
		enum class render_multisample_type_t : uint32_t;
		enum class render_buffer_flags_t : uint32_t;
		enum class render_primitive_type_t : uint32_t;
		enum class spawn_debug_restriction_override_state_t : uint32_t;
		enum class spawn_debug_override_state_t : uint32_t;
		enum class entity_iotarget_type_t : uint32_t;
		enum class entity_dormancy_type_t : uint32_t;
		enum class horiz_justification_e : uint32_t;
		enum class bloom_blend_mode_t : uint32_t;
		enum class view_fade_mode_t : uint32_t;
		enum class layout_position_type_e : uint32_t;
		enum class vert_justification_e : uint32_t;
		enum class mood_type_t : uint32_t;
		enum class jump_correction_method : uint32_t;
		enum class binary_node_child_option : uint32_t;
		enum class model_config_attachment_type_t : uint32_t;
		enum class bone_mask_blend_space : uint32_t;
		enum class ik_target_type : uint32_t;
		enum class anim_vector_source : uint32_t;
		enum class choice_method : uint32_t;
		enum class foot_fall_tag_foot_t : uint32_t;
		enum class animation_snapshot_type_t : uint32_t;
		enum class aim_matrix_blend_mode : uint32_t;
		enum class facing_mode : uint32_t;
		enum class velocity_metric_mode : uint32_t;
		enum class vphys_xjoint_t__flags_t : uint32_t;
		enum class anim_vrhand_motion_range_t : uint32_t;
		enum class field_network_option : uint32_t;
		enum class particle_attachment_t : uint32_t;
		enum class selector_tag_behavior_t : uint32_t;
		enum class anim_param_button_t : uint32_t;
		enum class seq_pose_setting_t : uint32_t;
		enum class anim_script_type : uint32_t;
		enum class ik_end_effector_type : uint32_t;
		enum class stance_override_mode : uint32_t;
		enum class jiggle_bone_sim_space : uint32_t;
		enum class animation_processing_type_t : uint32_t;
		enum class damping_speed_function : uint32_t;
		enum class foot_pinning_timing_source : uint32_t;
		enum class foot_lock_sub_visualization : uint32_t;
		enum class footstep_landed_foot_sound_type_t : uint32_t;
		enum class ikchannel_mode : uint32_t;
		enum class anim_vr_finger_splay_t : uint32_t;
		enum class anim_vr_bone_transform_source_t : uint32_t;
		enum class reset_cycle_option : uint32_t;
		enum class morph_bundle_type_t : uint32_t;
		enum class model_skeleton_data_t__bone_flags_t : uint32_t;
		enum class state_action_behavior : uint32_t;
		enum class blend_key_type : uint32_t;
		enum class vphys_xconstraint_params_t__enum_flags0_t : uint32_t;
		enum class choice_blend_method : uint32_t;
		enum class choice_change_method : uint32_t;
		enum class blend2_dmode : uint32_t;
		enum class anim_vrhand_t : uint32_t;
		enum class iksolver_type : uint32_t;
		enum class ragdoll_pose_control : uint32_t;
		enum class anim_value_source : uint32_t;
		enum class pose_type_t : uint32_t;
		enum class model_bone_flex_component_t : uint32_t;
		enum class mesh_draw_primitive_flags_t : uint32_t;
		enum class morph_flex_controller_remap_type_t : uint32_t;
		enum class anim_param_network_setting : uint32_t;
		enum class perm_model_info_t__flag_enum : uint32_t;
		enum class iktarget_source : uint32_t;
		enum class anim_param_type_t : uint32_t;
		enum class vphys_xbody_part_t__vphys_xflag_enum_t : uint32_t;
		enum class anim_node_network_mode : uint32_t;
		enum class flex_op_code_t : uint32_t;
		enum class step_phase : uint32_t;
		enum class edemo_bone_selection_mode : uint32_t;
		enum class anim_pose_control : uint32_t;
		enum class matterial_attribute_tag_type_t : uint32_t;
		enum class vphys_xaggregate_data_t__vphys_xflag_enum_t : uint32_t;
		enum class iktarget_coordinate_system : uint32_t;
		enum class anim_vrfinger_t : uint32_t;
		enum class solve_ikchain_anim_node_debug_setting : uint32_t;
		enum class binary_node_timing : uint32_t;
		enum class canimation_graph_visualizer_primitive_type : uint32_t;
		enum class bone_transform_space_t : uint32_t;
		enum class seq_cmd_t : uint32_t;
		enum class joint_axis_t : uint32_t;
		enum class joint_motion_t : uint32_t;
		enum class sos_group_type_t : uint32_t;
		enum class vmix_subgraph_switch_interpolation_type_t : uint32_t;
		enum class action_type_t : uint32_t;
		enum class vmix_filter_slope_t : uint32_t;
		enum class vmix_channel_operation_t : uint32_t;
		enum class vmix_panner_type_t : uint32_t;
		enum class soundlevel_t : uint32_t;
		enum class vmix_processor_type_t : uint32_t;
		enum class sos_action_sort_type_t : uint32_t;
		enum class sos_edit_item_type_t : uint32_t;
		enum class sos_action_stop_type_t : uint32_t;
		enum class vmix_filter_type_t : uint32_t;
		enum class vmix_lfoshape_t : uint32_t;
		enum class disable_shadows_t : uint32_t;
		enum class object_type_flags_t : uint32_t;
		enum class pulse_instruction_code_t : uint32_t;
		enum class pulse_value_type_t : uint32_t;
		enum class pulse_method_call_mode_t : uint32_t;
		enum class texture_repetition_mode_t : uint32_t;
		enum class particle_orientation_set_mode_t : uint32_t;
		enum class particle_light_type_choice_list_t : uint32_t;
		enum class particle_light_fog_lighting_mode_t : uint32_t;
		enum class particle_omni2_light_type_choice_list_t : uint32_t;
		enum class sprite_card_shader_type_t : uint32_t;
		enum class particle_impulse_type_t : uint32_t;
		enum class closest_point_test_type_t : uint32_t;
		enum class particle_endcap_mode_t : uint32_t;
		enum class particle_sorting_choice_list_t : uint32_t;
		enum class particle_collision_mode_t : uint32_t;
		enum class particle_orientation_choice_list_t : uint32_t;
		enum class particle_hitbox_data_selection_t : uint32_t;
		enum class particle_transform_type_t : uint32_t;
		enum class sprite_card_texture_channel_t : uint32_t;
		enum class particle_alpha_reference_type_t : uint32_t;
		enum class sprite_card_texture_type_t : uint32_t;
		enum class bbox_volume_type_t : uint32_t;
		enum class particle_detail_level_t : uint32_t;
		enum class particle_sequence_crop_override_t : uint32_t;
		enum class particle_falloff_function_t : uint32_t;
		enum class particle_light_unit_choice_list_t : uint32_t;
		enum class particle_vec_type_t : uint32_t;
		enum class pfnoise_modifier_t : uint32_t;
		enum class particle_float_random_mode_t : uint32_t;
		enum class particle_depth_feathering_mode_t : uint32_t;
		enum class material_proxy_type_t : uint32_t;
		enum class particle_lightnint_branch_behavior_t : uint32_t;
		enum class particle_output_blend_mode_t : uint32_t;
		enum class particle_float_input_mode_t : uint32_t;
		enum class particle_selection_t : uint32_t;
		enum class particle_texture_layer_blend_type_t : uint32_t;
		enum class particle_trace_set_t : uint32_t;
		enum class particle_float_map_type_t : uint32_t;
		enum class particle_light_behavior_choice_list_t : uint32_t;
		enum class particle_topology_t : uint32_t;
		enum class animation_type_t : uint32_t;
		enum class hitbox_lerp_type_t : uint32_t;
		enum class particle_rotation_lock_type_t : uint32_t;
		enum class vector_expression_type_t : uint32_t;
		enum class particle_fog_type_t : uint32_t;
		enum class vector_float_expression_type_t : uint32_t;
		enum class particle_pin_distance_t : uint32_t;
		enum class particle_control_point_axis_t : uint32_t;
		enum class particle_hitbox_bias_type_t : uint32_t;
		enum class particle_direction_noise_type_t : uint32_t;
		enum class pfnoise_type_t : uint32_t;
		enum class particle_lighting_quality_t : uint32_t;
		enum class particle_model_type_t : uint32_t;
		enum class particle_parent_set_mode_t : uint32_t;
		enum class standard_lighting_attenuation_style_t : uint32_t;
		enum class blur_filter_type_t : uint32_t;
		enum class sprite_card_per_particle_scale_t : uint32_t;
		enum class scalar_expression_type_t : uint32_t;
		enum class detail_combo_t : uint32_t;
		enum class particle_color_blend_type_t : uint32_t;
		enum class particle_color_blend_mode_t : uint32_t;
		enum class pfnoise_turbulence_t : uint32_t;
		enum class particle_post_process_priority_group_t : uint32_t;
		enum class particle_float_type_t : uint32_t;
		enum class inheritable_bool_type_t : uint32_t;
		enum class pet_ground_type_t : uint32_t;
		enum class particle_vrhand_choice_list_t : uint32_t;
		enum class pfunc_visualization_type_t : uint32_t;
		enum class particle_trace_miss_behavior_t : uint32_t;
		enum class particle_float_bias_type_t : uint32_t;
		enum class missing_parent_inherit_behavior_t : uint32_t;
		enum class detail2_combo_t : uint32_t;
		enum class particle_set_method_t : uint32_t;
		enum class estyle_node_type : uint32_t;
		enum class elayout_node_type : uint32_t;
		enum class move_type_t : uint32_t;
		enum class eoverride_block_los_t : uint32_t;
		enum class func_door_spawn_pos_t : uint32_t;
		enum class observer_mode_t : uint32_t;
		enum class medal_rank_t : uint32_t;
		enum class can_play_sequence_t : uint32_t;
		enum class disposition_t : uint32_t;
		enum class value_remapper_haptics_type_t : uint32_t;
		enum class take_damage_flags_t : uint32_t;
		enum class weapon_sound_t : uint32_t;
		enum class ekill_types_t : uint32_t;
		enum class value_remapper_input_type_t : uint32_t;
		enum class grenade_type_t : uint32_t;
		enum class shadow_type_t : uint32_t;
		enum class modify_damage_return_t : uint32_t;
		enum class quest_progress__reason : uint32_t;
		enum class brush_solidities_e : uint32_t;
		enum class train_code : uint32_t;
		enum class shake_command_t : uint32_t;
		enum class point_world_text_justify_horizontal_t : uint32_t;
		enum class point_template_owner_spawn_group_type_t : uint32_t;
		enum class value_remapper_output_type_t : uint32_t;
		enum class ichoreo_services__choreo_state_t : uint32_t;
		enum class move_collide_t : uint32_t;
		enum class attributeprovidertypes_t : uint32_t;
		enum class point_world_text_justify_vertical_t : uint32_t;
		enum class damage_types_t : uint32_t;
		enum class solid_type_t : uint32_t;
		enum class navproperties_t : uint32_t;
		enum class simple_constraint_sound_profile__simple_constraints_sound_profile_keypoints_t : uint32_t;
		enum class player_connected_state : uint32_t;
		enum class chat_ignore_type_t : uint32_t;
		enum class door_state_t : uint32_t;
		enum class latch_dirty_permission_t : uint32_t;
		enum class rumble_effect_t : uint32_t;
		enum class vote_create_failed_t : uint32_t;
		enum class render_fx_t : uint32_t;
		enum class move_mounting_amount_t : uint32_t;
		enum class crr_response__response_enum_t : uint32_t;
		enum class nav_dir_type : uint32_t;
		enum class value_remapper_ratchet_type_t : uint32_t;
		enum class track_orientation_type_t : uint32_t;
		enum class shatter_glass_stress_type : uint32_t;
		enum class point_template_client_only_entity_behavior_t : uint32_t;
		enum class entity_subclass_scope_t : uint32_t;
		enum class beam_type_t : uint32_t;
		enum class door_check_e : uint32_t;
		enum class hierarchy_type_t : uint32_t;
		enum class ammo_flags_t : uint32_t;
		enum class debug_overlay_bits_t : uint32_t;
		enum class point_world_text_reorient_mode_t : uint32_t;
		enum class chicken_activity : uint32_t;
		enum class hit_group_t : uint32_t;
		enum class input_bit_mask_t : uint32_t;
		enum class entity_disolve_type_t : uint32_t;
		enum class ammo_position_t : uint32_t;
		enum class world_text_panel_vertical_align_t : uint32_t;
		enum class water_level_t : uint32_t;
		enum class scripted_conflict_response_t : uint32_t;
		enum class csplayer_state : uint32_t;
		enum class gear_slot_t : uint32_t;
		enum class scripted_move_type_t : uint32_t;
		enum class scripted_on_death_t : uint32_t;
		enum class shatter_damage_cause : uint32_t;
		enum class command_exec_mode_t : uint32_t;
		enum class csweapon_state_t : uint32_t;
		enum class csplayer_blocking_use_action_t : uint32_t;
		enum class weapon_attack_type_t : uint32_t;
		enum class beam_clip_style_t : uint32_t;
		enum class ein_button_state : uint32_t;
		enum class hull_t : uint32_t;
		enum class value_remapper_momentum_type_t : uint32_t;
		enum class move_linear_authored_pos_t : uint32_t;
		enum class nav_attribute_enum : uint32_t;
		enum class loadout_slot_t : uint32_t;
		enum class toggle_state : uint32_t;
		enum class performance_mode_t : uint32_t;
		enum class forced_crouch_state_t : uint32_t;
		enum class render_mode_t : uint32_t;
		enum class shard_solid_t : uint32_t;
		enum class prop_door_rotating_spawn_pos_t : uint32_t;
		enum class ent_finder_method_t : uint32_t;
		enum class csweapon_type : uint32_t;
		enum class train_velocity_type_t : uint32_t;
		enum class touch_t : uint32_t;
		enum class command_entity_spec_type_t : uint32_t;
		enum class ichoreo_services__script_state_t : uint32_t;
		enum class fix_angle_set_t : uint32_t;
		enum class game_anim_event_index_t : uint32_t;
		enum class base_explosion_types_t : uint32_t;
		enum class csweapon_silencer_type : uint32_t;
		enum class filter_t : uint32_t;
		enum class class_t : uint32_t;
		enum class sound_flags_t : uint32_t;
		enum class anim_loop_mode_t : uint32_t;
		enum class scripted_move_to_t : uint32_t;
		enum class materials : uint32_t;
		enum class on_frame : uint32_t;
		enum class csweapon_mode : uint32_t;
		enum class surrounding_bounds_type_t : uint32_t;
		enum class shatter_panel_mode : uint32_t;
		enum class item_flag_types_t : uint32_t;
		enum class player_anim_event_t : uint32_t;
		enum class begin_death_life_state_transition_t : uint32_t;
		enum class csweapon_category : uint32_t;
		enum class train_orientation_type_t : uint32_t;
		enum class sound_event_start_type_t : uint32_t;
		enum class world_text_panel_horizontal_align_t : uint32_t;
		enum class world_text_panel_orientation_t : uint32_t;
		enum class observer_interp_state_t : uint32_t;
		enum class explosions : uint32_t;
		enum class stance_type_t : uint32_t;
		enum class c4_light_effect_t : uint32_t;
		enum class subclass_vdata_change_type_t : uint32_t;
		enum class timeline_compression_t : uint32_t;
		enum class lesson_panel_layout_file_types_t : uint32_t;
		enum class egrenade_throw_state : uint32_t;
		enum class scene_on_player_death_t : uint32_t;
		enum class prop_door_rotating_open_direction_e : uint32_t;
		enum class comp_mat_property_mutator_condition_type_t : uint32_t;
		enum class composite_material_match_filter_type_t : uint32_t;
		enum class composite_material_var_system_var_t : uint32_t;
		enum class comp_mat_property_mutator_type_t : uint32_t;
		enum class composite_material_input_container_source_type_t : uint32_t;
		enum class composite_material_input_texture_type_t : uint32_t;
		enum class composite_material_input_loose_variable_type_t : uint32_t;

		enum class move_type_t : uint32_t;
		enum class take_damage_flags_t : uint32_t;
		enum class ekill_types_t : uint32_t;
		enum class quest_progress__reason : uint32_t;
		enum class move_collide_t : uint32_t;
		enum class player_connected_state : uint32_t;
		enum class render_fx_t : uint32_t;
		enum class csplayer_state : uint32_t;
		enum class csplayer_blocking_use_action_t : uint32_t;
		enum class loadout_slot_t : uint32_t;
		enum class render_mode_t : uint32_t;
		enum class materials : uint32_t;
		class cutl_string_token;
		class attachment_handle_t;
		class cparticle_property;
		class cnetwork_velocity_vector;
		class cin_button_state;
		class particle_index_t;
		class extent;
		class thinkfunc_t;
		class game_tick_t;
		class cbase_player_controller;
		class cnetwork_transmit_component;
		class cskeleton_instance;
		class cclient_alpha_property;
		class fire_smoke;
		class command_context;

		class iecon_item_interface {};
		struct game_time_t { MEMBER(value, game_time_t, float); };
		class cnetwork_view_offset_vector
		{
		public:
			MEMBER(vec_x, cnetwork_view_offset_vector, float);
			MEMBER(vec_y, cnetwork_view_offset_vector, float);
			MEMBER(vec_z, cnetwork_view_offset_vector, float);
		};

enum class life_state_t : uint32_t
		{
			life_alive = 0x0,
			life_dying = 0x1,
			life_dead = 0x2,
			life_respawnable = 0x3,
			life_respawning = 0x4,
		};
	}
}

#endif // SDK_SCHEMA_GLOBAL_TYPES_H
