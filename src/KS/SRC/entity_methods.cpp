// Entity method definitions extracted by generated one-function shims.

#include "KS/SRC/entity.h"


// 0x00144B98 set_radius__6entityf
void entity::set_radius(float value) {
    radius = value;
}

// 0x00144BA0 get_radius__C6entity
float entity::get_radius() const {
    return radius;
}

// 0x00144C30 is_time_limited__C6entity
bool entity::is_time_limited() const {
    unsigned int masked;
    __asm__(
        "lw %0, 0x198(%1)\n\t"
        "lui $3, 0x1\n\t"
        "and %0, %0, $3"
        : "=&r"(masked)
        : "r"(this)
        : "$3"
    );
    return masked != 0;
}

// 0x00144C78 is_active__C6entity
bool entity::is_active() const { return flags & EFLAG_ACTIVE; }

// 0x00144C88 get_forced_active__C6entity
entity::force_active_t entity::get_forced_active() const {
    return FORCE_ACTIVE_NONE;
}

// 0x00144C90 are_collisions_active__C6entity
bool entity::are_collisions_active() const { return flags & EFLAG_PHYSICS_COLLISIONS_ACTIVE; }

// 0x00144CA0 is_sticky__C6entity
bool entity::is_sticky() const { return flags & EFLAG_PHYSICS_STICKY; }

// 0x00144CE0 is_stationary__C6entity
bool entity::is_stationary() const { return !(flags & EFLAG_PHYSICS_MOVING); }

// 0x00144D28 is_walkable__C6entity
bool entity::is_walkable() const { return flags & EFLAG_PHYSICS_WALKABLE; }

// 0x00144D68 is_repulsion__C6entity
bool entity::is_repulsion() const { return flags & EFLAG_MISC_REPULSION; }

// 0x00144DA8 is_visible__C6entity
bool entity::is_visible() const { return flags & EFLAG_GRAPHICS_VISIBLE; }

// 0x00144DE0 is_motion_blurred__C6entity
bool entity::is_motion_blurred() const { return flags & EFLAG_GRAPHICS_MOTION_BLUR; }

// 0x00144DF0 is_motion_trailed__C6entity
bool entity::is_motion_trailed() const { return flags & EFLAG_GRAPHICS_MOTION_TRAIL; }

// 0x00144E00 get_externally_controlled__C6entity
bool entity::get_externally_controlled() const { return flags & EFLAG_PHYSENT_EXTERNALLY_CONTROLLED; }

// 0x00144E18 get_in_use__C6entity
bool entity::get_in_use() const {
    short flags;
    __asm__("lh %0, 0x7A(%1)" : "=r"(flags) : "r"(this));
    return flags & 1;
}

// 0x00144E58 get_colgeom__C6entity
collision_geometry *entity::get_colgeom() const {
    return colgeom;
}

// 0x00144E60 get_damage_capsule__6entity
collision_capsule *entity::get_damage_capsule() {
    return 0;
}

// 0x00144E68 get_updated_damage_capsule__6entity
collision_capsule *entity::get_updated_damage_capsule() {
    return 0;
}

// 0x00144E70 get_inter_capsule_radius_scale__6entity
float entity::get_inter_capsule_radius_scale() { return 1.0f; }

// 0x00144E80 get_water_dist__C6entity
float entity::get_water_dist() const { return 1000.0f; }

// 0x00144E90 get_underwater_pct__C6entity
float entity::get_underwater_pct() const {
    return 0.0f;
}

// 0x00144EA0 get_water_normal__C6entity
extern const vector3d entity_zero_vector;
__asm__(".equ entity_zero_vector, 0x00513840");

const vector3d& entity::get_water_normal() const {
    return entity_zero_vector;
}

// 0x00144EB0 get_underwater_time__C6entity
float entity::get_underwater_time() const {
    return 0.0f;
}

// 0x00144EE8 get_effective_collision_mass__C6entityRC8vector3dT1
float entity::get_effective_collision_mass(const vector3d& location, const vector3d& direction) const {
    return 0.0f;
}

// 0x00144EF8 is_picked_up__6entity
bool entity::is_picked_up() {
    return false;
}

// 0x00144F00 phys_render__6entityfb
void entity::phys_render(float time, bool shadow) {
}

// 0x00144F58 get_visual_xz_radius_rel_center__C6entity
float entity::get_visual_xz_radius_rel_center() const {
    return vis_xz_rad_rel_center;
}

// 0x00144F60 get_vrep__C6entity
visual_rep *entity::get_vrep() const {
    return my_visrep;
}

// 0x00144F68 get_mesh__C6entity
nglMesh *entity::get_mesh() const {
    return my_mesh;
}

// 0x00144F70 get_lores_mesh__C6entity
nglMesh *entity::get_lores_mesh() const {
    return lores_mesh;
}

// 0x00144F78 get_shadow_mesh__C6entity
nglMesh *entity::get_shadow_mesh() const {
    return shadow_mesh;
}

// 0x00144F80 set_fade_away__6entityb
void entity::set_fade_away(bool fade) {
}

// 0x00144F88 get_fade_away__C6entity
bool entity::get_fade_away() const {
    return false;
}

// 0x00144F90 get_filename__C6entity
extern const stringx entity_empty_string;
__asm__(".equ entity_empty_string, 0x0046DB30");

const stringx& entity::get_filename() const {
    return entity_empty_string;
}

// 0x00144FA0 get_dirname__C6entity
extern const stringx entity_empty_string;
__asm__(".equ entity_empty_string, 0x0046DB30");

const stringx& entity::get_dirname() const {
    return entity_empty_string;
}

// 0x00144FB0 has_dirname__C6entity
bool entity::has_dirname() const {
    return false;
}

// 0x00144FC0 get_flavor__C6entity
entity_flavor_t entity::get_flavor() const {
    return flavor;
}

// 0x00144FC8 is_an_entity__C6entity
bool entity::is_an_entity() const {
    return true;
}

// 0x00144FD0 is_a_beam__C6entity
bool entity::is_a_beam() const {
    return false;
}

// 0x00144FD8 is_a_camera__C6entity
bool entity::is_a_camera() const {
    return false;
}

// 0x00144FE0 is_a_station_camera__C6entity
bool entity::is_a_station_camera() const {
    return false;
}

// 0x00144FE8 is_a_game_camera__C6entity
bool entity::is_a_game_camera() const {
    return false;
}

// 0x00144FF0 is_a_marky_camera__C6entity
bool entity::is_a_marky_camera() const {
    return false;
}

// 0x00144FF8 is_a_mouselook_camera__C6entity
bool entity::is_a_mouselook_camera() const {
    return false;
}

// 0x00145000 is_a_sniper_camera__C6entity
bool entity::is_a_sniper_camera() const {
    return false;
}

// 0x00145008 is_a_conglomerate__C6entity
bool entity::is_a_conglomerate() const {
    return false;
}

// 0x00145010 is_a_turret__C6entity
bool entity::is_a_turret() const {
    return false;
}

// 0x00145018 is_a_ladder__C6entity
bool entity::is_a_ladder() const {
    return false;
}

// 0x00145020 is_a_light_source__C6entity
bool entity::is_a_light_source() const {
    return false;
}

// 0x00145028 is_a_limb_body__C6entity
bool entity::is_a_limb_body() const {
    return false;
}

// 0x00145030 is_a_marker__C6entity
bool entity::is_a_marker() const {
    return false;
}

// 0x00145038 is_a_rectangle_marker__C6entity
bool entity::is_a_rectangle_marker() const {
    return false;
}

// 0x00145040 is_a_cube_marker__C6entity
bool entity::is_a_cube_marker() const {
    return false;
}

// 0x00145048 is_a_crawl_marker__C6entity
bool entity::is_a_crawl_marker() const {
    return false;
}

// 0x00145050 is_a_particle_generator__C6entity
bool entity::is_a_particle_generator() const {
    return false;
}

// 0x00145058 is_a_physical_entity__C6entity
bool entity::is_a_physical_entity() const {
    return false;
}

// 0x00145060 is_a_crate__C6entity
bool entity::is_a_crate() const {
    return false;
}

// 0x00145068 is_an_item__C6entity
bool entity::is_an_item() const {
    return false;
}

// 0x00145070 is_a_visual_item__C6entity
bool entity::is_a_visual_item() const {
    return false;
}

// 0x00145078 is_a_handheld_item__C6entity
bool entity::is_a_handheld_item() const {
    return false;
}

// 0x00145080 is_a_gun__C6entity
bool entity::is_a_gun() const {
    return false;
}

// 0x00145088 is_a_thrown_item__C6entity
bool entity::is_a_thrown_item() const {
    return false;
}

// 0x00145090 is_a_melee_item__C6entity
bool entity::is_a_melee_item() const {
    return false;
}

// 0x00145098 is_a_morphable_item__C6entity
bool entity::is_a_morphable_item() const {
    return false;
}

// 0x001450A0 is_a_projectile__C6entity
bool entity::is_a_projectile() const {
    return false;
}

// 0x001450A8 is_a_rigid_body__C6entity
bool entity::is_a_rigid_body() const {
    return false;
}

// 0x001450B0 is_a_grenade__C6entity
bool entity::is_a_grenade() const {
    return false;
}

// 0x001450B8 is_a_rocket__C6entity
bool entity::is_a_rocket() const {
    return false;
}

// 0x001450C0 is_a_scanner__C6entity
bool entity::is_a_scanner() const {
    return false;
}

// 0x001450C8 is_a_sky__C6entity
bool entity::is_a_sky() const {
    return false;
}

// 0x001450D0 frame_done__6entity
void entity::frame_done() {
}

// 0x001450D8 add_position_increment__6entityR8vector3d
bool entity::add_position_increment(vector3d &increment) {
    return false;
}

// 0x001450E0 terrain_position__C6entity
const vector3d& entity::terrain_position() const {
    return get_abs_position();
}

// 0x00145118 get_colgeom_root_po__C6entity
const po &entity::get_colgeom_root_po() const {
    return get_abs_po();
}

// 0x00145120 get_colgeom_root__C6entity
const entity *entity::get_colgeom_root() const {
    return this;
}

// 0x00145130 get_region__C6entity
region_node *entity::get_region() const {
    return center_region;
}

// 0x00145138 camera_set_target__6entityRC8vector3d
void entity::camera_set_target(const vector3d &position) {
}

// 0x00145140 camera_set_roll__6entityf
void entity::camera_set_roll(float angle) {
}

// 0x00145148 camera_set_collide_with_world__6entityb
void entity::camera_set_collide_with_world(bool collide) {
}

// 0x00145150 camera_slide_to__6entityRC8vector3dT1ff
bool entity::camera_slide_to(
    const vector3d &position,
    const vector3d &target,
    float roll,
    float speed
) {
    return false;
}

// 0x00145158 camera_slide_to_orbit__6entityRC8vector3dffff
bool entity::camera_slide_to_orbit(
    const vector3d &center,
    float range,
    float theta,
    float psi,
    float speed
) {
    return false;
}

// 0x00145160 camera_orbit__6entityRC8vector3dfff
void entity::camera_orbit(
    const vector3d &center,
    float range,
    float theta,
    float psi
) {
}

// 0x001451A8 get_frame_delta__C6entity
const po& entity::get_frame_delta() const {
    return get_movement_info()->frame_delta;
}

// 0x001451B8 get_programmed_cell_death__C6entity
float entity::get_programmed_cell_death() const {
    return programmed_cell_death;
}

// 0x001451C0 get_hit_points__C6entity
float entity::get_hit_points() const { return 1.0f; }

// 0x001451D0 get_full_hit_points__C6entity
float entity::get_full_hit_points() const { return 1.0f; }

// 0x00145208 has_destroy_info__C6entity
bool entity::has_destroy_info() const {
    return destroy_info != 0;
}

// 0x00145218 get_destroy_info__C6entity
destroyable_info *entity::get_destroy_info() const {
    return destroy_info;
}

// 0x00145168 is_frame_delta_valid__C6entity
bool entity::is_frame_delta_valid() const { return movement_info_data && movement_info_data->frame_delta_valid; }

// 0x00145188 is_last_frame_delta_valid__C6entity
bool entity::is_last_frame_delta_valid() const { return movement_info_data && movement_info_data->last_frame_delta_valid; }

// 0x00145258 set_render_scale__6entityRC8vector3d
void entity::set_render_scale(const vector3d &value) { render_scale = value; }

// 0x00144AC0 set_ext_flag_recursive__6entityUib
void entity::set_ext_flag_recursive(unsigned int flag, bool enabled) { if (enabled) ext_flags |= flag; else ext_flags &= ~flag; }

// 0x00144EC0 get_effective_collision_velocity__C6entityP8vector3dRC8vector3d
extern const vector3d global_ZEROVEC;
__asm__(".equ global_ZEROVEC, 0x00513840");
void entity::get_effective_collision_velocity(vector3d *target, const vector3d &location) const { *target = global_ZEROVEC; }

// 0x00144DB8 is_still_visible__C6entity
bool entity::is_still_visible() const { return is_visible(); }

// 0x001450F0 terrain_radius__C6entity
float entity::terrain_radius() const { return get_visual_radius(); }

// 0x00145228 get_detonate_position__C6entity
vector3d entity::get_detonate_position() const { return get_abs_position(); }

// 0x00144CB0 set_sticky__6entityb
void entity::set_sticky(bool value) { if (value) flags |= 0x40; else flags &= ~0x40; }

// 0x00144CF8 set_stationary__6entityb
void entity::set_stationary(bool value) { if (!value) flags |= 0x04; else flags &= ~0x04; }

// 0x00144D38 set_walkable__6entityb
void entity::set_walkable(bool value) { if (value) flags |= 0x08; else flags &= ~0x08; }

// 0x00144D78 set_repulsion__6entityb
void entity::set_repulsion(bool value) { if (value) flags |= 0x1000; else flags &= ~0x1000; }

// 0x00144F28 get_visrep_ending_time__C6entity
float entity::get_visrep_ending_time() const { return my_visrep->get_ending_time(); }

// 0x00144C48 set_time_limited__6entityb
void entity::set_time_limited(bool enabled) {
    if (enabled) {
        ext_flags |= 0x10000;
    } else {
        ext_flags &= ~0x10000;
    }
}

// 0x00144E28 set_in_use__6entityb
void entity::set_in_use(bool enabled) {
    if (enabled) {
        flags |= 0x10000;
    } else {
        flags &= ~0x10000;
    }
}

// 0x00145280 __tf16destroyable_info
extern "C" void __rtti_user(void *info, const char *name); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512008"); asm(".equ type_name, 0x004CEA58");
extern "C" void *GetTypeInfo() __asm__("__tf16destroyable_info");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
