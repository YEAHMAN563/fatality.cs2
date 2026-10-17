#ifndef SDK_SCHEMA_CLIENT_H
#define SDK_SCHEMA_CLIENT_H

#include <cstdint>

namespace sdk {
namespace schema {
namespace client {

enum class base_combat_character__water_wake_mode_t : uint32_t
			{
				water_wake_none = 0x0,
				water_wake_idle = 0x1,
				water_wake_walking = 0x2,
				water_wake_running = 0x3,
				water_wake_water_overhead = 0x4,
			}; // enum class base_combat_character__water_wake_mode_t : uint32_t

			class centity_component;
			class centity_identity;
			class centity_instance;
			class cscript_component;
			class cbody_component;
			class cgame_scene_node;
			class cbody_component_point;
			class cbody_component_skeleton_instance;
			class cskeleton_instance;
			class chitbox_component;
			class clight_component;
			class crender_component;
			class cbuoyancy_helper;
			struct view_angle_server_change_t;
			class cplayer_autoaim_services;
			struct audioparams_t;
			class cplayer_camera_services;
			struct fogplayerparams_t;
			struct fogparams_t;
			class cplayer_flashlight_services;
			class cplayer_item_services;
			class cplayer_movement_services;
			class cplayer_movement_services_humanoid;
			class cplayer_observer_services;
			class cplayer_use_services;
			class cplayer_water_services;
			class cplayer_weapon_services;
			class cbody_component_base_anim_graph;
			class cbase_anim_graph_controller;
			struct entity_render_attribute_t;
			struct active_model_config_t;
			class cbody_component_base_model_entity;
			class cgame_scene_node_handle;
			class cnetworked_sequence_operation;
			class cmodel_state;
			class interval_timer;
			class countdown_timer;
			class engine_countdown_timer;
			class ctimeline;
			class canim_graph_networked_variables;
			class base_entity;
			class ccollision_property;
			class clogical_entity;
			class base_flex__emphasized_phoneme;
			class color_correction;
			class env_wind_clientside;
			class env_wind_shared;
			class entity_flame;
			class cprojected_texture_base;
			class base_fire;
			class fire_smoke;
			class rope_keyframe__cphysics_delegate;
			class rope_keyframe;
			struct scene_entity__queued_events_t;
			class tint_controller;
			class cskybox_reference;
			class sky_camera;
			struct sky3dparams_t;
			struct vphysics_collision_attribute_t;
			class ceffect_data;
			class env_detail_controller;
			struct env_wind_shared__wind_ave_event_t;
			struct env_wind_shared__wind_variation_event_t;
			class info_ladder_dismount;
			struct shard_model_desc_t;
			class game_rules_proxy;
			class cglow_property;
			struct physics_ragdoll_pose_t;
			class sound_opvar_set_point_base;
			class sound_opvar_set_point_entity;
			class sound_opvar_set_aabbentity;
			class sound_opvar_set_obbentity;
			class sound_opvar_set_path_corner_entity;
			class sound_opvar_set_obbwind_entity;
			class team_round_timer;
			class cattribute_list;
			class cattribute_manager;
			class cecon_item_attribute;
			struct cattribute_manager_cached_attribute_float_t;
			class attribute_container;
			class econ_item_view;
			struct econ_entity__attached_model_data_t;
			struct entity_spotted_state_t;
			class csgame_rules_proxy;
			class csgame_rules;
			class ccsgame_mode_rules;
			class retake_game_rules;
			class ccsgame_mode_rules_noop;
			class ccsgame_mode_script;
			class ccsgame_mode_rules_scripted;
			class ccsgame_mode_rules_deathmatch;
			struct csper_round_stats_t;
			struct csmatch_stats_t;
			class csgo_team_preview_character_position;
			class csgo_team_select_character_position;
			class csgo_team_select_terrorist_position;
			class csgo_team_select_counter_terrorist_position;
			class csgo_team_intro_character_position;
			class csgo_team_intro_terrorist_position;
			class csgo_team_intro_counter_terrorist_position;
			class ccsgo_wingman_intro_character_position;
			class ccsgo_wingman_intro_terrorist_position;
			class ccsgo_wingman_intro_counter_terrorist_position;
			class csminimap_boundary;
			class player_ping;
			class ccsplayer_ping_services;
			class csplayer_resource;
			class cplayer_view_model_services;
			class ccsplayer_base_camera_services;
			struct weapon_purchase_count_t;
			struct weapon_purchase_tracker_t;
			class ccsplayer_action_tracking_services;
			class ccsplayer_bullet_services;
			struct sellback_purchase_entry_t;
			class ccsplayer_buy_services;
			class ccsplayer_camera_services;
			class ccsplayer_hostage_services;
			class ccsplayer_item_services;
			class ccsplayer_movement_services;
			class ccsplayer_use_services;
			class ccsplayer_view_model_services;
			class ccsplayer_water_services;
			class ccsplayer_weapon_services;
			class ccsobserver_observer_services;
			class ccsobserver_camera_services;
			class ccsobserver_movement_services;
			class ccsobserver_use_services;
			class ccsobserver_view_model_services;
			class ccsplayer_controller_action_tracking_services;
			class cdamage_record;
			class ccsplayer_controller_damage_services;
			class ccsplayer_controller_in_game_money_services;
			struct server_authoritative_weapon_slot_t;
			class ccsplayer_controller_inventory_services;
			class global_light;
			class csgo_map_preview_camera_path_node;
			class csgo_map_preview_camera_path;
			class ccsplayer_glow_services;
			class vote_controller;
			class map_veto_pick_controller;
			class csgo_team_preview_camera;
			class csgo_team_select_camera;
			class csgo_terrorist_team_intro_camera;
			class csgo_terrorist_wingman_intro_camera;
			class csgo_counter_terrorist_team_intro_camera;
			class csgo_counter_terrorist_wingman_intro_camera;
			class csgo_end_of_match_camera;
			class csgo_end_of_match_character_position;
			class csgo_end_of_match_lineup_endpoint;
			class csgo_end_of_match_lineup_start;
			class csgo_end_of_match_lineup_end;
			class csm_fov_override;
			class point_entity;
			class env_combined_light_probe_volume;
			class env_cubemap;
			class env_cubemap_box;
			class env_cubemap_fog;
			class gradient_fog;
			class env_light_probe_volume;
			class player_visibility;
			class tonemap_controller2;
			class env_volumetric_fog_controller;
			class env_volumetric_fog_volume;
			class fog_controller;
			class cinfo_target;
			class cinfo_particle_target;
			class info_visibility_box;
			class cinfo_world_layer;
			class point_camera;
			class point_camera_vfov;
			class cpoint_template;
			class sound_area_entity_base;
			class sound_area_entity_sphere;
			class sound_area_entity_oriented_box;
			class team;
			class cbase_player_controller;
			class cbase_player_vdata;
			class cbase_player_weapon_vdata;
			class base_model_entity;
			class cserver_only_model_entity;
			class model_point_entity;
			class clogic_relay;
			class particle_system;
			class path_particle_rope;
			class path_particle_rope_alias_path_particle_rope_clientside;
			class dynamic_light;
			class env_screen_overlay;
			class func_track_train;
			class light_glow;
			class ragdoll_manager;
			class spotlight_end;
			class point_value_remapper;
			class point_world_text;
			class handle_test;
			class env_wind;
			class base_toggle;
			class base_button;
			class precipitation_blocker;
			class entity_dissolve;
			class env_projected_texture;
			class env_decal;
			class func_brush;
			class func_electrified_volume;
			class func_rotating;
			class breakable;
			class phys_box;
			class scene_entity;
			class sun;
			class base_trigger;
			class trigger_volume;
			class trigger_multiple;
			class trigger_lerp_object;
			class beam;
			class func_ladder;
			class cprecipitation_vdata;
			class sprite;
			class sprite_oriented;
			class base_client_uientity;
			class point_client_uidialog;
			class point_client_uihud;
			class point_client_uiworld_panel;
			class cpoint_off_screen_indicator_ui;
			class point_client_uiworld_text_panel;
			class cinfo_offscreen_panorama_texture;
			class cbomb_target;
			class chostage_rescue_zone_shim;
			class chostage_rescue_zone;
			class trigger_buoyancy;
			class cfunc_water;
			class cwater_splasher;
			class info_instructor_hint_hostage_rescue_zone;
			class ccsplayer_controller;
			class footstep_control;
			class ccsweapon_base_vdata;
			class player_spray_decal;
			class func_conveyor;
			class cgrenade_tracer;
			class inferno;
			class fire_cracker_blast;
			class barn_light;
			class rect_light;
			class omni_light;
			class csteam;
			class map_preview_particle_system;
			class cinfo_dynamic_shadow_hint;
			class cinfo_dynamic_shadow_hint_box;
			class env_sky;
			class tonemap_controller2_alias_env_tonemap_controller2;
			class light_entity;
			class light_spot_entity;
			class light_ortho_entity;
			class light_directional_entity;
			class light_environment_entity;
			class post_processing_volume;
			class env_particle_glow;
			class texture_based_animatable;
			class world;
			class cbase_anim_graph;
			class cbase_prop;
			class breakable_prop;
			class dynamic_prop;
			class dynamic_prop_alias_dynamic_prop;
			class dynamic_prop_alias_prop_dynamic_override;
			class dynamic_prop_alias_cable_dynamic;
			class color_correction_volume;
			class func_monitor;
			class func_move_linear;
			class phys_magnet;
			class point_commentary_node;
			class water_bullet;
			class base_door;
			class base_flex;
			class client_ragdoll;
			class precipitation;
			class fire_sprite;
			class fire_from_above_sprite;
			class fish;
			class physics_prop;
			class base_prop_door;
			class phys_prop_clientside;
			class ragdoll_prop;
			class local_temp_entity;
			class shatter_glass_shard_physics;
			class econ_entity;
			class econ_wearable;
			class base_grenade;
			class physics_prop_multiplayer;
			class viewmodel_weapon;
			class base_view_model;
			class viewmodel_attachment_model;
			class predicted_view_model;
			class world_model_stattrak;
			class world_model_nametag;
			class base_csgrenade_projectile;
			class sensor_grenade_projectile;
			class cbreach_charge_projectile;
			class cbump_mine_projectile;
			class ctrip_wire_fire_projectile;
			class csgo_preview_model;
			class csgo_preview_model_alias_csgo_item_previewmodel;
			class bullet_hit_model;
			class pick_up_model_slerper;
			class world_model_gloves;
			class hostage_carriable_prop;
			class multimeter;
			class planted_c4;
			class item;
			class hegrenade_projectile;
			class flashbang_projectile;
			class chicken;
			class base_player_weapon;
			class ragdoll_prop_attached;
			class base_combat_character;
			class base_player_pawn;
			class csgoview_model;
			class csweapon_base;
			class csweapon_base_gun;
			class c4;
			class deagle;
			class weapon_elite;
			class weapon_nova;
			class weapon_sawedoff;
			class weapon_taser;
			class weapon_xm1014;
			class knife;
			class melee;
			class weapon_shield;
			class molotov_projectile;
			class decoy_projectile;
			class smoke_grenade_projectile;
			class base_csgrenade;
			class weapon_base_item;
			class item_dogtags;
			class item_healthshot;
			class fists;
			class sensor_grenade;
			class cbreach_charge;
			class cbump_mine;
			class ctablet;
			class ctrip_wire_fire;
			class cweapon_zone_repulsor;
			class csplayer_pawn_base;
			class csobserver_pawn;
			class csplayer_pawn;
			class hostage;
			class net_test_base_combat_character;
			class ak47;
			class weapon_aug;
			class weapon_awp;
			class weapon_bizon;
			class weapon_famas;
			class weapon_five_seven;
			class weapon_g3_sg1;
			class weapon_galil_ar;
			class weapon_glock;
			class weapon_hkp2000;
			class weapon_uspsilencer;
			class weapon_m4_a1;
			class weapon_m4_a1_silencer;
			class weapon_mac10;
			class weapon_mag7;
			class weapon_mp5_sd;
			class weapon_mp7;
			class weapon_mp9;
			class weapon_negev;
			class weapon_p250;
			class weapon_cz75a;
			class weapon_p90;
			class weapon_scar20;
			class weapon_sg556;
			class weapon_ssg08;
			class weapon_tec9;
			class weapon_ump45;
			class weapon_m249;
			class weapon_revolver;
			class molotov_grenade;
			class incendiary_grenade;
			class decoy_grenade;
			class flashbang;
			class hegrenade;
			class smoke_grenade;
			class csgo_preview_player;
			class csgo_preview_player_alias_csgo_player_previewmodel;
			class csgo_team_preview_model;

class centity_instance
			{
			public:
				MEMBER(isz_private_vscripts, client::centity_instance, cutl_symbol_large);
				MEMBER(entity_ptr, client::centity_instance, centity_identity*);
				MEMBER(cscript_component_ptr, client::centity_instance, cscript_component*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			};

class base_entity : public centity_instance
			{
			public:
				MEMBER(cbody_component_ptr, client::base_entity, cbody_component*);
				MEMBER(network_transmit_component, client::base_entity, cnetwork_transmit_component);
				MEMBER(last_think_tick, client::base_entity, game_tick_t);
				MEMBER(game_scene_node_ptr, client::base_entity, cgame_scene_node*);
				MEMBER(render_component_ptr, client::base_entity, crender_component*);
				MEMBER(collision_ptr, client::base_entity, ccollision_property*);
				MEMBER(max_health, client::base_entity, int);
				MEMBER(health, client::base_entity, int);
				MEMBER(life_state, client::base_entity, uint8_t);
				MEMBER(takes_damage, client::base_entity, bool);
				MEMBER(take_damage_flags, client::base_entity, take_damage_flags_t);
				MEMBER(ub_interpolation_frame, client::base_entity, uint8_t);
				MEMBER(h_scene_object_controller, client::base_entity, chandle<base_entity>);
				MEMBER(no_interpolation_tick, client::base_entity, int);
				MEMBER(visibility_no_interpolation_tick, client::base_entity, int);
				MEMBER(proxy_random_value, client::base_entity, float);
				MEMBER(eflags, client::base_entity, int);
				MEMBER(water_type, client::base_entity, uint8_t);
				MEMBER(interpolate_even_with_no_model, client::base_entity, bool);
				MEMBER(prediction_eligible, client::base_entity, bool);
				MEMBER(apply_layer_match_idto_model, client::base_entity, bool);
				MEMBER(tok_layer_match_id, client::base_entity, cutl_string_token);
				MEMBER(subclass_id, client::base_entity, cutl_string_token);
				MEMBER(simulation_tick, client::base_entity, int);
				MEMBER(current_think_context, client::base_entity, int);
				MEMBER(a_think_functions, client::base_entity, cutl_vector<thinkfunc_t>);
				MEMBER(anim_time, client::base_entity, float);
				MEMBER(simulation_time, client::base_entity, float);
				MEMBER(scene_object_override_flags, client::base_entity, uint8_t);
				MEMBER(has_successfully_interpolated, client::base_entity, bool);
				MEMBER(has_added_vars_to_interpolation, client::base_entity, bool);
				MEMBER(render_even_when_not_successfully_interpolated, client::base_entity, bool);
				MEMBER_ARR(interpolation_latch_dirty_flags_arr, client::base_entity, 2, int);
				MEMBER_ARR(list_entry_arr, client::base_entity, 11, uint16_t);
				MEMBER(create_time, client::base_entity, game_time_t);
				MEMBER(speed, client::base_entity, float);
				MEMBER(ent_client_flags, client::base_entity, uint16_t);
				MEMBER(client_side_ragdoll, client::base_entity, bool);
				MEMBER(team_num, client::base_entity, uint8_t);
				MEMBER(spawnflags, client::base_entity, uint32_t);
				MEMBER(next_think_tick, client::base_entity, game_tick_t);
				MEMBER(flags, client::base_entity, uint32_t);
				MEMBER(vec_abs_velocity, client::base_entity, vector);
				MEMBER(vec_velocity, client::base_entity, cnetwork_velocity_vector);
				MEMBER(vec_base_velocity, client::base_entity, vector);
				MEMBER(h_effect_entity, client::base_entity, chandle<base_entity>);
				MEMBER(h_owner_entity, client::base_entity, chandle<base_entity>);
				MEMBER(move_collide, client::base_entity, move_collide_t);
				MEMBER(move_type, client::base_entity, move_type_t);
				MEMBER(water_level, client::base_entity, float);
				MEMBER(effects, client::base_entity, uint32_t);
				MEMBER(h_ground_entity, client::base_entity, chandle<base_entity>);
				MEMBER(friction, client::base_entity, float);
				MEMBER(elasticity, client::base_entity, float);
				MEMBER(gravity_scale, client::base_entity, float);
				MEMBER(time_scale, client::base_entity, float);
				MEMBER(simulated_every_tick, client::base_entity, bool);
				MEMBER(animated_every_tick, client::base_entity, bool);
				MEMBER(nav_ignore_until_time, client::base_entity, game_time_t);
				MEMBER(h_think, client::base_entity, uint16_t);
				MEMBER(bbox_vis_flags, client::base_entity, uint8_t);
				MEMBER(predictable, client::base_entity, bool);
				MEMBER(render_with_view_models, client::base_entity, bool);
				MEMBER(split_user_player_prediction_slot, client::base_entity, csplit_screen_slot);
				MEMBER(first_predictable_command, client::base_entity, int);
				MEMBER(last_predictable_command, client::base_entity, int);
				MEMBER(h_old_move_parent, client::base_entity, chandle<base_entity>);
				MEMBER(particles, client::base_entity, cparticle_property);
				MEMBER(vec_predicted_script_floats, client::base_entity, cutl_vector<float>);
				MEMBER(vec_predicted_script_float_ids, client::base_entity, cutl_vector<int>);
				MEMBER(next_script_var_record_id, client::base_entity, int);
				MEMBER(vec_ang_velocity, client::base_entity, qangle);
				MEMBER(data_change_event_ref, client::base_entity, int);
				MEMBER(dependencies, client::base_entity, cutl_vector<centity_handle>);
				MEMBER(creation_tick, client::base_entity, int);
				MEMBER(anim_time_changed, client::base_entity, bool);
				MEMBER(simulation_time_changed, client::base_entity, bool);
				MEMBER(s_unique_hammer_id, client::base_entity, cutl_string);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			};

class econ_item_view : public iecon_item_interface
			{
			public:
				MEMBER(inventory_image_rgba_requested, client::econ_item_view, bool);
				MEMBER(inventory_image_tried_cache, client::econ_item_view, bool);
				MEMBER(inventory_image_rgba_width, client::econ_item_view, int);
				MEMBER(inventory_image_rgba_height, client::econ_item_view, int);
				MEMBER_ARR(current_load_cached_file_name_arr, client::econ_item_view, 260, char);
				MEMBER(restore_custom_material_after_precache, client::econ_item_view, bool);
				MEMBER(item_definition_index, client::econ_item_view, uint16_t);
				MEMBER(entity_quality, client::econ_item_view, int);
				MEMBER(entity_level, client::econ_item_view, uint32_t);
				MEMBER(item_id, client::econ_item_view, uint64_t);
				MEMBER(item_idhigh, client::econ_item_view, uint32_t);
				MEMBER(item_idlow, client::econ_item_view, uint32_t);
				MEMBER(account_id, client::econ_item_view, uint32_t);
				MEMBER(inventory_position, client::econ_item_view, uint32_t);
				MEMBER(initialized, client::econ_item_view, bool);
				MEMBER(is_store_item, client::econ_item_view, bool);
				MEMBER(is_trade_item, client::econ_item_view, bool);
				MEMBER(entity_quantity, client::econ_item_view, int);
				MEMBER(rarity_override, client::econ_item_view, int);
				MEMBER(quality_override, client::econ_item_view, int);
				MEMBER(un_client_flags, client::econ_item_view, uint8_t);
				MEMBER(un_override_style, client::econ_item_view, uint8_t);
				MEMBER(attribute_list, client::econ_item_view, cattribute_list);
				MEMBER(networked_dynamic_attributes, client::econ_item_view, cattribute_list);
				MEMBER_ARR(custom_name_arr, client::econ_item_view, 161, char);
				MEMBER_ARR(custom_name_override_arr, client::econ_item_view, 161, char);
				MEMBER(initialized_tags, client::econ_item_view, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			};

class cbase_player_controller : public base_entity
			{
			public:
				MEMBER(final_predicted_tick, client::cbase_player_controller, int);
				MEMBER(command_context, client::cbase_player_controller, command_context);
				MEMBER(in_buttons_which_are_toggles, client::cbase_player_controller, uint64_t);
				MEMBER(tick_base, client::cbase_player_controller, uint32_t);
				MEMBER(h_pawn, client::cbase_player_controller, chandle<base_player_pawn>);
				MEMBER(h_predicted_pawn, client::cbase_player_controller, chandle<base_player_pawn>);
				MEMBER(split_screen_slot, client::cbase_player_controller, csplit_screen_slot);
				MEMBER(h_split_owner, client::cbase_player_controller, chandle<cbase_player_controller>);
				MEMBER(h_split_screen_players, client::cbase_player_controller, cutl_vector<chandle<cbase_player_controller>>);
				MEMBER(is_hltv, client::cbase_player_controller, bool);
				MEMBER(connected, client::cbase_player_controller, player_connected_state);
				MEMBER_ARR(isz_player_name_arr, client::cbase_player_controller, 128, char);
				MEMBER(steam_id, client::cbase_player_controller, uint64_t);
				MEMBER(is_local_player_controller, client::cbase_player_controller, bool);
				MEMBER(desired_fov, client::cbase_player_controller, uint32_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			};

class base_model_entity : public base_entity
			{
			public:
				MEMBER(crender_component_ptr, client::base_model_entity, crender_component*);
				MEMBER(chitbox_component, client::base_model_entity, chitbox_component);
				MEMBER(init_model_effects, client::base_model_entity, bool);
				MEMBER(is_static_prop, client::base_model_entity, bool);
				MEMBER(last_add_decal, client::base_model_entity, int);
				MEMBER(decals_added, client::base_model_entity, int);
				MEMBER(old_health, client::base_model_entity, int);
				MEMBER(render_mode, client::base_model_entity, render_mode_t);
				MEMBER(render_fx, client::base_model_entity, render_fx_t);
				MEMBER(allow_fade_in_view, client::base_model_entity, bool);
				MEMBER(clr_render, client::base_model_entity, color);
				MEMBER(vec_render_attributes, client::base_model_entity, utl_vector_embedded_network_var<entity_render_attribute_t>);
				MEMBER(render_to_cubemaps, client::base_model_entity, bool);
				MEMBER(collision, client::base_model_entity, ccollision_property);
				MEMBER(glow, client::base_model_entity, cglow_property);
				MEMBER(glow_backface_mult, client::base_model_entity, float);
				MEMBER(fade_min_dist, client::base_model_entity, float);
				MEMBER(fade_max_dist, client::base_model_entity, float);
				MEMBER(fade_scale, client::base_model_entity, float);
				MEMBER(shadow_strength, client::base_model_entity, float);
				MEMBER(object_culling, client::base_model_entity, uint8_t);
				MEMBER(add_decal, client::base_model_entity, int);
				MEMBER(v_decal_position, client::base_model_entity, vector);
				MEMBER(v_decal_forward_axis, client::base_model_entity, vector);
				MEMBER(decal_heal_blood_rate, client::base_model_entity, float);
				MEMBER(decal_heal_height_rate, client::base_model_entity, float);
				MEMBER(config_entities_to_propagate_material_decals_to, client::base_model_entity, network_utl_vector_base<chandle<base_model_entity>>);
				MEMBER(vec_view_offset, client::base_model_entity, cnetwork_view_offset_vector);
				MEMBER(client_alpha_property_ptr, client::base_model_entity, cclient_alpha_property*);
				MEMBER(client_override_tint, client::base_model_entity, color);
				MEMBER(use_client_override_tint, client::base_model_entity, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			};

class ccsplayer_controller : public cbase_player_controller
			{
			public:
				MEMBER(in_game_money_services_ptr, client::ccsplayer_controller, ccsplayer_controller_in_game_money_services*);
				MEMBER(inventory_services_ptr, client::ccsplayer_controller, ccsplayer_controller_inventory_services*);
				MEMBER(action_tracking_services_ptr, client::ccsplayer_controller, ccsplayer_controller_action_tracking_services*);
				MEMBER(damage_services_ptr, client::ccsplayer_controller, ccsplayer_controller_damage_services*);
				MEMBER(ping, client::ccsplayer_controller, uint32_t);
				MEMBER(has_communication_abuse_mute, client::ccsplayer_controller, bool);
				MEMBER(crosshair_codes, client::ccsplayer_controller, cutl_symbol_large);
				MEMBER(pending_team_num, client::ccsplayer_controller, uint8_t);
				MEMBER(force_team_time, client::ccsplayer_controller, game_time_t);
				MEMBER(comp_teammate_color, client::ccsplayer_controller, int);
				MEMBER(ever_played_on_team, client::ccsplayer_controller, bool);
				MEMBER(previous_force_join_team_time, client::ccsplayer_controller, game_time_t);
				MEMBER(clan, client::ccsplayer_controller, cutl_symbol_large);
				MEMBER(s_sanitized_player_name, client::ccsplayer_controller, cutl_string);
				MEMBER(coaching_team, client::ccsplayer_controller, int);
				MEMBER(player_dominated, client::ccsplayer_controller, uint64_t);
				MEMBER(player_dominating_me, client::ccsplayer_controller, uint64_t);
				MEMBER(competitive_ranking, client::ccsplayer_controller, int);
				MEMBER(competitive_wins, client::ccsplayer_controller, int);
				MEMBER(competitive_rank_type, client::ccsplayer_controller, char);
				MEMBER(competitive_ranking_predicted_win, client::ccsplayer_controller, int);
				MEMBER(competitive_ranking_predicted_loss, client::ccsplayer_controller, int);
				MEMBER(competitive_ranking_predicted_tie, client::ccsplayer_controller, int);
				MEMBER(end_match_next_map_vote, client::ccsplayer_controller, int);
				MEMBER(un_active_quest_id, client::ccsplayer_controller, uint16_t);
				MEMBER(quest_progress_reason, client::ccsplayer_controller, quest_progress__reason);
				MEMBER(un_player_tv_control_flags, client::ccsplayer_controller, uint32_t);
				MEMBER(draft_index, client::ccsplayer_controller, int);
				MEMBER(ms_queued_mode_disconnection_timestamp, client::ccsplayer_controller, uint32_t);
				MEMBER(ui_abandon_recorded_reason, client::ccsplayer_controller, uint32_t);
				MEMBER(cannot_be_kicked, client::ccsplayer_controller, bool);
				MEMBER(ever_fully_connected, client::ccsplayer_controller, bool);
				MEMBER(abandon_allows_surrender, client::ccsplayer_controller, bool);
				MEMBER(abandon_offers_instant_surrender, client::ccsplayer_controller, bool);
				MEMBER(disconnection1_min_warning_printed, client::ccsplayer_controller, bool);
				MEMBER(score_reported, client::ccsplayer_controller, bool);
				MEMBER(disconnection_tick, client::ccsplayer_controller, int);
				MEMBER(controlling_bot, client::ccsplayer_controller, bool);
				MEMBER(has_controlled_bot_this_round, client::ccsplayer_controller, bool);
				MEMBER(has_been_controlled_by_player_this_round, client::ccsplayer_controller, bool);
				MEMBER(bots_controlled_this_round, client::ccsplayer_controller, int);
				MEMBER(can_control_observed_bot, client::ccsplayer_controller, bool);
				MEMBER(h_player_pawn, client::ccsplayer_controller, chandle<csplayer_pawn>);
				MEMBER(h_observer_pawn, client::ccsplayer_controller, chandle<csobserver_pawn>);
				MEMBER(pawn_is_alive, client::ccsplayer_controller, bool);
				MEMBER(pawn_health, client::ccsplayer_controller, uint32_t);
				MEMBER(pawn_armor, client::ccsplayer_controller, int);
				MEMBER(pawn_has_defuser, client::ccsplayer_controller, bool);
				MEMBER(pawn_has_helmet, client::ccsplayer_controller, bool);
				MEMBER(pawn_character_def_index, client::ccsplayer_controller, uint16_t);
				MEMBER(pawn_lifetime_start, client::ccsplayer_controller, int);
				MEMBER(pawn_lifetime_end, client::ccsplayer_controller, int);
				MEMBER(pawn_bot_difficulty, client::ccsplayer_controller, int);
				MEMBER(h_original_controller_of_current_pawn, client::ccsplayer_controller, chandle<ccsplayer_controller>);
				MEMBER(score, client::ccsplayer_controller, int);
				MEMBER(vec_kills, client::ccsplayer_controller, network_utl_vector_base<ekill_types_t>);
				MEMBER(mvps, client::ccsplayer_controller, int);
				MEMBER(is_player_name_dirty, client::ccsplayer_controller, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			};

class cbase_anim_graph : public base_model_entity
			{
			public:
				MEMBER(initially_populate_interp_history, client::cbase_anim_graph, bool);
				MEMBER(should_animate_during_gameplay_pause, client::cbase_anim_graph, bool);
				MEMBER(suppress_anim_event_sounds, client::cbase_anim_graph, bool);
				MEMBER(anim_graph_update_enabled, client::cbase_anim_graph, bool);
				MEMBER(max_slope_distance, client::cbase_anim_graph, float);
				MEMBER(v_last_slope_check_pos, client::cbase_anim_graph, vector);
				MEMBER(vec_force, client::cbase_anim_graph, vector);
				MEMBER(force_bone, client::cbase_anim_graph, int);
				MEMBER(clientside_ragdoll_ptr, client::cbase_anim_graph, cbase_anim_graph*);
				MEMBER(built_ragdoll, client::cbase_anim_graph, bool);
				MEMBER(ragdoll_pose_ptr, client::cbase_anim_graph, physics_ragdoll_pose_t*);
				MEMBER(client_ragdoll, client::cbase_anim_graph, bool);
				MEMBER(has_animated_material_attributes, client::cbase_anim_graph, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			};

class base_flex : public cbase_anim_graph
			{
			public:
				MEMBER(flex_weight, client::base_flex, network_utl_vector_base<float>);
				MEMBER(v_look_target_position, client::base_flex, vector);
				MEMBER(blinktoggle, client::base_flex, bool);
				MEMBER(last_flex_update_frame_count, client::base_flex, int);
				MEMBER(cached_view_target, client::base_flex, vector);
				MEMBER(next_scene_event_id, client::base_flex, uint32_t);
				MEMBER(blink, client::base_flex, int);
				MEMBER(blinktime, client::base_flex, float);
				MEMBER(prevblinktoggle, client::base_flex, bool);
				MEMBER(jaw_open, client::base_flex, int);
				MEMBER(jaw_open_amount, client::base_flex, float);
				MEMBER(blink_amount, client::base_flex, float);
				MEMBER(mouth_attachment, client::base_flex, attachment_handle_t);
				MEMBER(eye_attachment, client::base_flex, attachment_handle_t);
				MEMBER(reset_flex_weights_on_model_change, client::base_flex, bool);
				MEMBER(eye_occlusion_renderer_bone, client::base_flex, int);
				MEMBER(m_eye_occlusion_renderer_camera_to_bone_transform, client::base_flex, matrix3x4_t);
				MEMBER(v_eye_occlusion_renderer_half_extent, client::base_flex, vector);
				MEMBER_ARR(phoneme_classes_arr, client::base_flex, 3, base_flex__emphasized_phoneme);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			};

class base_combat_character : public base_flex
			{
			public:
				MEMBER(h_my_wearables, client::base_combat_character, network_utl_vector_base<chandle<econ_wearable>>);
				MEMBER(blood_color, client::base_combat_character, int);
				MEMBER(left_foot_attachment, client::base_combat_character, attachment_handle_t);
				MEMBER(right_foot_attachment, client::base_combat_character, attachment_handle_t);
				MEMBER(water_wake_mode, client::base_combat_character, base_combat_character__water_wake_mode_t);
				MEMBER(water_world_z, client::base_combat_character, float);
				MEMBER(water_next_trace_time, client::base_combat_character, float);
				MEMBER(field_of_view, client::base_combat_character, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			};

class base_player_pawn : public base_combat_character
			{
			public:
				MEMBER(weapon_services_ptr, client::base_player_pawn, cplayer_weapon_services*);
				MEMBER(item_services_ptr, client::base_player_pawn, cplayer_item_services*);
				MEMBER(autoaim_services_ptr, client::base_player_pawn, cplayer_autoaim_services*);
				MEMBER(observer_services_ptr, client::base_player_pawn, cplayer_observer_services*);
				MEMBER(water_services_ptr, client::base_player_pawn, cplayer_water_services*);
				MEMBER(use_services_ptr, client::base_player_pawn, cplayer_use_services*);
				MEMBER(flashlight_services_ptr, client::base_player_pawn, cplayer_flashlight_services*);
				MEMBER(camera_services_ptr, client::base_player_pawn, cplayer_camera_services*);
				MEMBER(movement_services_ptr, client::base_player_pawn, cplayer_movement_services*);
				MEMBER(server_view_angle_changes, client::base_player_pawn, utl_vector_embedded_network_var<view_angle_server_change_t>);
				MEMBER(highest_consumed_server_view_angle_change_index, client::base_player_pawn, uint32_t);
				MEMBER(v_angle, client::base_player_pawn, qangle);
				MEMBER(v_angle_previous, client::base_player_pawn, qangle);
				MEMBER(hide_hud, client::base_player_pawn, uint32_t);
				MEMBER(skybox3d, client::base_player_pawn, sky3dparams_t);
				MEMBER(death_time, client::base_player_pawn, game_time_t);
				MEMBER(vec_prediction_error, client::base_player_pawn, vector);
				MEMBER(prediction_error_time, client::base_player_pawn, game_time_t);
				MEMBER(vec_last_camera_setup_local_origin, client::base_player_pawn, vector);
				MEMBER(last_camera_setup_time, client::base_player_pawn, game_time_t);
				MEMBER(fovsensitivity_adjust, client::base_player_pawn, float);
				MEMBER(mouse_sensitivity, client::base_player_pawn, float);
				MEMBER(v_old_origin, client::base_player_pawn, vector);
				MEMBER(old_simulation_time, client::base_player_pawn, float);
				MEMBER(last_executed_command_number, client::base_player_pawn, int);
				MEMBER(last_executed_command_tick, client::base_player_pawn, int);
				MEMBER(h_controller, client::base_player_pawn, chandle<cbase_player_controller>);
				MEMBER(is_swapping_to_predictable_controller, client::base_player_pawn, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			};

class csplayer_pawn_base : public base_player_pawn
			{
			public:
				MEMBER(ping_services_ptr, client::csplayer_pawn_base, ccsplayer_ping_services*);
				MEMBER(view_model_services_ptr, client::csplayer_pawn_base, cplayer_view_model_services*);
				MEMBER_ARR(rendering_clip_plane_arr, client::csplayer_pawn_base, 4, float);
				MEMBER(last_clip_plane_setup_frame, client::csplayer_pawn_base, int);
				MEMBER(vec_last_clip_camera_pos, client::csplayer_pawn_base, vector);
				MEMBER(vec_last_clip_camera_forward, client::csplayer_pawn_base, vector);
				MEMBER(clip_hit_static_world, client::csplayer_pawn_base, bool);
				MEMBER(cached_plane_is_valid, client::csplayer_pawn_base, bool);
				MEMBER(clipping_weapon_ptr, client::csplayer_pawn_base, csweapon_base*);
				MEMBER(previous_player_state, client::csplayer_pawn_base, csplayer_state);
				MEMBER(last_collision_ceiling, client::csplayer_pawn_base, float);
				MEMBER(last_collision_ceiling_change_time, client::csplayer_pawn_base, float);
				MEMBER(grenade_parameter_stash_time, client::csplayer_pawn_base, game_time_t);
				MEMBER(grenade_parameters_stashed, client::csplayer_pawn_base, bool);
				MEMBER(ang_stashed_shoot_angles, client::csplayer_pawn_base, qangle);
				MEMBER(vec_stashed_grenade_throw_position, client::csplayer_pawn_base, vector);
				MEMBER(vec_stashed_velocity, client::csplayer_pawn_base, vector);
				MEMBER_ARR(ang_shoot_angle_history_arr, client::csplayer_pawn_base, 2, qangle);
				MEMBER_ARR(vec_throw_position_history_arr, client::csplayer_pawn_base, 2, vector);
				MEMBER_ARR(vec_velocity_history_arr, client::csplayer_pawn_base, 2, vector);
				MEMBER(third_person_heading, client::csplayer_pawn_base, qangle);
				MEMBER(slope_drop_offset, client::csplayer_pawn_base, float);
				MEMBER(slope_drop_height, client::csplayer_pawn_base, float);
				MEMBER(v_head_constraint_offset, client::csplayer_pawn_base, vector);
				MEMBER(is_scoped, client::csplayer_pawn_base, bool);
				MEMBER(is_walking, client::csplayer_pawn_base, bool);
				MEMBER(resume_zoom, client::csplayer_pawn_base, bool);
				MEMBER(player_state, client::csplayer_pawn_base, csplayer_state);
				MEMBER(is_defusing, client::csplayer_pawn_base, bool);
				MEMBER(is_grabbing_hostage, client::csplayer_pawn_base, bool);
				MEMBER(blocking_use_action_in_progress, client::csplayer_pawn_base, csplayer_blocking_use_action_t);
				MEMBER(is_rescuing, client::csplayer_pawn_base, bool);
				MEMBER(immune_to_gun_game_damage_time, client::csplayer_pawn_base, game_time_t);
				MEMBER(immune_to_gun_game_damage_time_last, client::csplayer_pawn_base, game_time_t);
				MEMBER(gun_game_immunity, client::csplayer_pawn_base, bool);
				MEMBER(has_moved_since_spawn, client::csplayer_pawn_base, bool);
				MEMBER(molotov_use_time, client::csplayer_pawn_base, float);
				MEMBER(molotov_damage_time, client::csplayer_pawn_base, float);
				MEMBER(which_bomb_zone, client::csplayer_pawn_base, int);
				MEMBER(in_no_defuse_area, client::csplayer_pawn_base, bool);
				MEMBER(throw_grenade_counter, client::csplayer_pawn_base, int);
				MEMBER(wait_for_no_attack, client::csplayer_pawn_base, bool);
				MEMBER(guardian_too_far_dist_frac, client::csplayer_pawn_base, float);
				MEMBER(detected_by_enemy_sensor_time, client::csplayer_pawn_base, game_time_t);
				MEMBER(next_guardian_too_far_warning, client::csplayer_pawn_base, float);
				MEMBER(suppress_guardian_too_far_warning_audio, client::csplayer_pawn_base, bool);
				MEMBER(killed_by_taser, client::csplayer_pawn_base, bool);
				MEMBER(move_state, client::csplayer_pawn_base, int);
				MEMBER(can_move_during_freeze_period, client::csplayer_pawn_base, bool);
				MEMBER(lower_body_yaw_target, client::csplayer_pawn_base, float);
				MEMBER(strafing, client::csplayer_pawn_base, bool);
				MEMBER(last_spawn_time_index, client::csplayer_pawn_base, game_time_t);
				MEMBER(emit_sound_time, client::csplayer_pawn_base, game_time_t);
				MEMBER(addon_bits, client::csplayer_pawn_base, int);
				MEMBER(primary_addon, client::csplayer_pawn_base, int);
				MEMBER(secondary_addon, client::csplayer_pawn_base, int);
				MEMBER(progress_bar_duration, client::csplayer_pawn_base, int);
				MEMBER(progress_bar_start_time, client::csplayer_pawn_base, float);
				MEMBER(direction, client::csplayer_pawn_base, int);
				MEMBER(shots_fired, client::csplayer_pawn_base, int);
				MEMBER(night_vision_on, client::csplayer_pawn_base, bool);
				MEMBER(has_night_vision, client::csplayer_pawn_base, bool);
				MEMBER(velocity_modifier, client::csplayer_pawn_base, float);
				MEMBER(hit_heading, client::csplayer_pawn_base, float);
				MEMBER(hit_body_part, client::csplayer_pawn_base, int);
				MEMBER(start_account, client::csplayer_pawn_base, int);
				MEMBER(vec_intro_start_eye_position, client::csplayer_pawn_base, vector);
				MEMBER(vec_intro_start_player_forward, client::csplayer_pawn_base, vector);
				MEMBER(client_death_time, client::csplayer_pawn_base, game_time_t);
				MEMBER(night_vision_alpha, client::csplayer_pawn_base, float);
				MEMBER(screen_tear_frame_captured, client::csplayer_pawn_base, bool);
				MEMBER(flash_bang_time, client::csplayer_pawn_base, float);
				MEMBER(flash_screenshot_alpha, client::csplayer_pawn_base, float);
				MEMBER(flash_overlay_alpha, client::csplayer_pawn_base, float);
				MEMBER(flash_build_up, client::csplayer_pawn_base, bool);
				MEMBER(flash_dsp_has_been_cleared, client::csplayer_pawn_base, bool);
				MEMBER(flash_screenshot_has_been_grabbed, client::csplayer_pawn_base, bool);
				MEMBER(flash_max_alpha, client::csplayer_pawn_base, float);
				MEMBER(flash_duration, client::csplayer_pawn_base, float);
				MEMBER(last_standing_pos, client::csplayer_pawn_base, vector);
				MEMBER(vec_last_muzzle_flash_pos, client::csplayer_pawn_base, vector);
				MEMBER(ang_last_muzzle_flash_angle, client::csplayer_pawn_base, qangle);
				MEMBER(h_muzzle_flash_shape, client::csplayer_pawn_base, chandle<base_entity>);
				MEMBER(health_bar_render_mask_index, client::csplayer_pawn_base, int);
				MEMBER(health_fade_value, client::csplayer_pawn_base, float);
				MEMBER(health_fade_alpha, client::csplayer_pawn_base, float);
				MEMBER(my_collision_group, client::csplayer_pawn_base, int);
				MEMBER(ignore_ladder_jump_time, client::csplayer_pawn_base, float);
				MEMBER(ladder_surpression_timer, client::csplayer_pawn_base, countdown_timer);
				MEMBER(last_ladder_normal, client::csplayer_pawn_base, vector);
				MEMBER(last_ladder_pos, client::csplayer_pawn_base, vector);
				MEMBER(death_ccweight, client::csplayer_pawn_base, float);
				MEMBER(old_is_scoped, client::csplayer_pawn_base, bool);
				MEMBER(prev_round_end_time, client::csplayer_pawn_base, float);
				MEMBER(prev_match_end_time, client::csplayer_pawn_base, float);
				MEMBER(un_current_equipment_value, client::csplayer_pawn_base, uint16_t);
				MEMBER(un_round_start_equipment_value, client::csplayer_pawn_base, uint16_t);
				MEMBER(un_freezetime_end_equipment_value, client::csplayer_pawn_base, uint16_t);
				MEMBER(vec_third_person_view_position_override, client::csplayer_pawn_base, vector);
				MEMBER(heavy_assault_suit_cooldown_remaining, client::csplayer_pawn_base, int);
				MEMBER(armor_value, client::csplayer_pawn_base, int);
				MEMBER(ang_eye_angles, client::csplayer_pawn_base, qangle);
				MEMBER(next_think_push_away, client::csplayer_pawn_base, float);
				MEMBER(should_autobuy_dmweapons, client::csplayer_pawn_base, bool);
				MEMBER(should_autobuy_now, client::csplayer_pawn_base, bool);
				MEMBER(hud_mini_score_hidden, client::csplayer_pawn_base, bool);
				MEMBER(hud_radar_hidden, client::csplayer_pawn_base, bool);
				MEMBER(last_killer_index, client::csplayer_pawn_base, centity_index);
				MEMBER(last_concurrent_killed, client::csplayer_pawn_base, int);
				MEMBER(death_cam_music, client::csplayer_pawn_base, int);
				MEMBER(ident_index, client::csplayer_pawn_base, centity_index);
				MEMBER(delay_target_idtimer, client::csplayer_pawn_base, countdown_timer);
				MEMBER(targeted_weapon_ent_index, client::csplayer_pawn_base, centity_index);
				MEMBER(old_ident_index, client::csplayer_pawn_base, centity_index);
				MEMBER(hold_target_idtimer, client::csplayer_pawn_base, countdown_timer);
				MEMBER(current_music_start_time, client::csplayer_pawn_base, float);
				MEMBER(music_round_start_time, client::csplayer_pawn_base, float);
				MEMBER(defer_start_music_on_warmup, client::csplayer_pawn_base, bool);
				MEMBER(cycle_latch, client::csplayer_pawn_base, int);
				MEMBER(server_intended_cycle, client::csplayer_pawn_base, float);
				MEMBER_ARR(vec_player_patch_econ_indices_arr, client::csplayer_pawn_base, 5, uint32_t);
				MEMBER(hide_target_id, client::csplayer_pawn_base, bool);
				MEMBER(next_taser_shake_time, client::csplayer_pawn_base, float);
				MEMBER(first_taser_shake_time, client::csplayer_pawn_base, float);
				MEMBER(last_smoke_overlay_alpha, client::csplayer_pawn_base, float);
				MEMBER(v_last_smoke_overlay_color, client::csplayer_pawn_base, vector);
				MEMBER(player_smoked_fx, client::csplayer_pawn_base, particle_index_t);
				MEMBER(next_mag_drop_time, client::csplayer_pawn_base, float);
				MEMBER(last_mag_drop_attachment_index, client::csplayer_pawn_base, int);
				MEMBER(vec_bullet_hit_models, client::csplayer_pawn_base, cutl_vector<bullet_hit_model*>);
				MEMBER(vec_pickup_model_slerpers, client::csplayer_pawn_base, cutl_vector<pick_up_model_slerper*>);
				MEMBER(vec_last_alive_local_velocity, client::csplayer_pawn_base, vector);
				MEMBER(entity_spotted_state, client::csplayer_pawn_base, entity_spotted_state_t);
				MEMBER(survival_team_number, client::csplayer_pawn_base, int);
				MEMBER(guardian_should_spray_custom_xmark, client::csplayer_pawn_base, bool);
				MEMBER(has_death_info, client::csplayer_pawn_base, bool);
				MEMBER(death_info_time, client::csplayer_pawn_base, float);
				MEMBER(vec_death_info_origin, client::csplayer_pawn_base, vector);
				MEMBER(killed_by_headshot, client::csplayer_pawn_base, bool);
				MEMBER(h_original_controller, client::csplayer_pawn_base, chandle<ccsplayer_controller>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			};

class csplayer_pawn : public csplayer_pawn_base
			{
			public:
				MEMBER(bullet_services_ptr, client::csplayer_pawn, ccsplayer_bullet_services*);
				MEMBER(hostage_services_ptr, client::csplayer_pawn, ccsplayer_hostage_services*);
				MEMBER(buy_services_ptr, client::csplayer_pawn, ccsplayer_buy_services*);
				MEMBER(glow_services_ptr, client::csplayer_pawn, ccsplayer_glow_services*);
				MEMBER(action_tracking_services_ptr, client::csplayer_pawn, ccsplayer_action_tracking_services*);
				MEMBER(health_shot_boost_expiration_time, client::csplayer_pawn, game_time_t);
				MEMBER(last_fired_weapon_time, client::csplayer_pawn, game_time_t);
				MEMBER(has_female_voice, client::csplayer_pawn, bool);
				MEMBER(landseconds, client::csplayer_pawn, float);
				MEMBER(old_fall_velocity, client::csplayer_pawn, float);
				MEMBER_ARR(last_place_name_arr, client::csplayer_pawn, 18, char);
				MEMBER(prev_defuser, client::csplayer_pawn, bool);
				MEMBER(prev_helmet, client::csplayer_pawn, bool);
				MEMBER(prev_armor_val, client::csplayer_pawn, int);
				MEMBER(prev_grenade_ammo_count, client::csplayer_pawn, int);
				MEMBER(un_previous_weapon_hash, client::csplayer_pawn, uint32_t);
				MEMBER(un_weapon_hash, client::csplayer_pawn, uint32_t);
				MEMBER(in_buy_zone, client::csplayer_pawn, bool);
				MEMBER(previously_in_buy_zone, client::csplayer_pawn, bool);
				MEMBER(aim_punch_angle, client::csplayer_pawn, qangle);
				MEMBER(aim_punch_angle_vel, client::csplayer_pawn, qangle);
				MEMBER(aim_punch_tick_base, client::csplayer_pawn, int);
				MEMBER(aim_punch_tick_fraction, client::csplayer_pawn, float);
				MEMBER(aim_punch_cache, client::csplayer_pawn, cutl_vector<qangle>);
				MEMBER(in_landing, client::csplayer_pawn, bool);
				MEMBER(landing_time, client::csplayer_pawn, float);
				MEMBER(in_hostage_rescue_zone, client::csplayer_pawn, bool);
				MEMBER(in_bomb_zone, client::csplayer_pawn, bool);
				MEMBER(is_buy_menu_open, client::csplayer_pawn, bool);
				MEMBER(time_of_last_injury, client::csplayer_pawn, game_time_t);
				MEMBER(next_spray_decal_time, client::csplayer_pawn, game_time_t);
				MEMBER(retakes_offering, client::csplayer_pawn, int);
				MEMBER(retakes_offering_card, client::csplayer_pawn, int);
				MEMBER(retakes_has_defuse_kit, client::csplayer_pawn, bool);
				MEMBER(retakes_mvplast_round, client::csplayer_pawn, bool);
				MEMBER(retakes_mvpboost_item, client::csplayer_pawn, int);
				MEMBER(retakes_mvpboost_extra_utility, client::csplayer_pawn, loadout_slot_t);
				MEMBER(need_to_re_apply_gloves, client::csplayer_pawn, bool);
				MEMBER(econ_gloves, client::csplayer_pawn, econ_item_view);
				MEMBER(must_sync_ragdoll_state, client::csplayer_pawn, bool);
				MEMBER(ragdoll_damage_bone, client::csplayer_pawn, int);
				MEMBER(v_ragdoll_damage_force, client::csplayer_pawn, vector);
				MEMBER(v_ragdoll_damage_position, client::csplayer_pawn, vector);
				MEMBER_ARR(ragdoll_damage_weapon_name_arr, client::csplayer_pawn, 64, char);
				MEMBER(ragdoll_damage_headshot, client::csplayer_pawn, bool);
				MEMBER(v_ragdoll_server_origin, client::csplayer_pawn, vector);
				MEMBER(last_head_bone_transform_is_valid, client::csplayer_pawn, bool);
				MEMBER(last_land_time, client::csplayer_pawn, game_time_t);
				MEMBER(on_ground_last_tick, client::csplayer_pawn, bool);
				MEMBER(q_death_eye_angles, client::csplayer_pawn, qangle);
				MEMBER(skip_one_head_constraint_update, client::csplayer_pawn, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			};

} // namespace client
} // namespace schema
} // namespace sdk

#endif // SDK_SCHEMA_CLIENT_H
