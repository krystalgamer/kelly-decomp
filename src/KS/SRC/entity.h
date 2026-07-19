// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00144B98)
// 0x00144B98 set_radius__6entityf
class entity {
    char padding[0x90];
    float radius;

public:
    void set_radius(float value);
};

void entity::set_radius(float value) {
    radius = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144BA0)
// 0x00144BA0 get_radius__C6entity
class entity {
    char padding[0x90];
    float radius;

public:
    float get_radius() const;
};

float entity::get_radius() const {
    return radius;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144C30)
// 0x00144C30 is_time_limited__C6entity
class entity {
public:
    bool is_time_limited() const;
};

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
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144C78)
// 0x00144C78 is_active__C6entity
class entity { char padding[0x78]; int flags; public: bool is_active() const; };
bool entity::is_active() const { return (flags >> 17) & 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144C88)
// 0x00144C88 get_forced_active__C6entity
enum force_active_t {
    FORCE_ACTIVE_NONE = 0
};

class entity {
public:
    force_active_t get_forced_active() const;
};

force_active_t entity::get_forced_active() const {
    return FORCE_ACTIVE_NONE;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144C90)
// 0x00144C90 are_collisions_active__C6entity
class entity { char padding[0x78]; int flags; public: bool are_collisions_active() const; };
bool entity::are_collisions_active() const { return (flags >> 1) & 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144CA0)
// 0x00144CA0 is_sticky__C6entity
class entity { char padding[0x78]; int flags; public: bool is_sticky() const; };
bool entity::is_sticky() const { return (flags >> 6) & 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144CE0)
// 0x00144CE0 is_stationary__C6entity
class entity { char padding[0x78]; int flags; public: bool is_stationary() const; };
bool entity::is_stationary() const { return !((flags >> 2) & 1); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144D28)
// 0x00144D28 is_walkable__C6entity
class entity { char padding[0x78]; int flags; public: bool is_walkable() const; };
bool entity::is_walkable() const { return (flags >> 3) & 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144D68)
// 0x00144D68 is_repulsion__C6entity
class entity { char padding[0x78]; int flags; public: bool is_repulsion() const; };
bool entity::is_repulsion() const { return (flags >> 12) & 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144DA8)
// 0x00144DA8 is_visible__C6entity
class entity { char padding[0x78]; int flags; public: bool is_visible() const; };
bool entity::is_visible() const { return (flags >> 9) & 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144DE0)
// 0x00144DE0 is_motion_blurred__C6entity
class entity { char padding[0x78]; int flags; public: bool is_motion_blurred() const; };
bool entity::is_motion_blurred() const { return (flags >> 10) & 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144DF0)
// 0x00144DF0 is_motion_trailed__C6entity
class entity { char padding[0x78]; int flags; public: bool is_motion_trailed() const; };
bool entity::is_motion_trailed() const { return (flags >> 11) & 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144E00)
// 0x00144E00 get_externally_controlled__C6entity
class entity { char padding[0x78]; int flags; public: bool get_externally_controlled() const; };
bool entity::get_externally_controlled() const { return (flags >> 20) & 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144E18)
// 0x00144E18 get_in_use__C6entity
class entity {
public:
    bool get_in_use() const;
};

bool entity::get_in_use() const {
    short flags;
    __asm__("lh %0, 0x7A(%1)" : "=r"(flags) : "r"(this));
    return flags & 1;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144E58)
// 0x00144E58 get_colgeom__C6entity
class collision_geometry;

class entity {
    char padding[0x148];
    collision_geometry *colgeom;

public:
    collision_geometry *get_colgeom() const;
};

collision_geometry *entity::get_colgeom() const {
    return colgeom;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144E60)
// 0x00144E60 get_damage_capsule__6entity
class collision_capsule;

class entity {
public:
    collision_capsule *get_damage_capsule();
};

collision_capsule *entity::get_damage_capsule() {
    return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144E68)
// 0x00144E68 get_updated_damage_capsule__6entity
class collision_capsule;

class entity {
public:
    collision_capsule *get_updated_damage_capsule();
};

collision_capsule *entity::get_updated_damage_capsule() {
    return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144E70)
// 0x00144E70 get_inter_capsule_radius_scale__6entity
class entity { public: float get_inter_capsule_radius_scale(); };
float entity::get_inter_capsule_radius_scale() { return 1.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144E80)
// 0x00144E80 get_water_dist__C6entity
class entity { public: float get_water_dist() const; };
float entity::get_water_dist() const { return 1000.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144E90)
// 0x00144E90 get_underwater_pct__C6entity
class entity {
public:
    float get_underwater_pct() const;
};

float entity::get_underwater_pct() const {
    return 0.0f;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144EA0)
// 0x00144EA0 get_water_normal__C6entity
class vector3d {
    float x;
    float y;
    float z;
};

extern const vector3d entity_zero_vector;
__asm__(".equ entity_zero_vector, 0x00513840");

class entity {
public:
    const vector3d& get_water_normal() const;
};

const vector3d& entity::get_water_normal() const {
    return entity_zero_vector;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144EB0)
// 0x00144EB0 get_underwater_time__C6entity
class entity {
public:
    float get_underwater_time() const;
};

float entity::get_underwater_time() const {
    return 0.0f;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144EE8)
// 0x00144EE8 get_effective_collision_mass__C6entityRC8vector3dT1
class vector3d;

class entity {
public:
    float get_effective_collision_mass(const vector3d& location, const vector3d& direction) const;
};

float entity::get_effective_collision_mass(const vector3d& location, const vector3d& direction) const {
    return 0.0f;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144EF8)
// 0x00144EF8 is_picked_up__6entity
class entity {
public:
    bool is_picked_up();
};

bool entity::is_picked_up() {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144F00)
// 0x00144F00 phys_render__6entityfb
class entity {
public:
    void phys_render(float time, bool shadow);
};

void entity::phys_render(float time, bool shadow) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144F58)
// 0x00144F58 get_visual_xz_radius_rel_center__C6entity
class entity {
    char padding[0x144];
    float visual_xz_radius;

public:
    float get_visual_xz_radius_rel_center() const;
};

float entity::get_visual_xz_radius_rel_center() const {
    return visual_xz_radius;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144F60)
// 0x00144F60 get_vrep__C6entity
class visual_rep;

class entity {
    char padding[0x128];
    visual_rep *my_visrep;

public:
    visual_rep *get_vrep() const;
};

visual_rep *entity::get_vrep() const {
    return my_visrep;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144F68)
// 0x00144F68 get_mesh__C6entity
class nglMesh;

class entity {
    char padding[0x134];
    nglMesh *my_mesh;

public:
    nglMesh *get_mesh() const;
};

nglMesh *entity::get_mesh() const {
    return my_mesh;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144F70)
// 0x00144F70 get_lores_mesh__C6entity
class nglMesh;

class entity {
    char padding[0x130];
    nglMesh *lores_mesh;

public:
    nglMesh *get_lores_mesh() const;
};

nglMesh *entity::get_lores_mesh() const {
    return lores_mesh;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144F78)
// 0x00144F78 get_shadow_mesh__C6entity
class nglMesh;

class entity {
    char padding[0x12C];
    nglMesh *shadow_mesh;

public:
    nglMesh *get_shadow_mesh() const;
};

nglMesh *entity::get_shadow_mesh() const {
    return shadow_mesh;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144F80)
// 0x00144F80 set_fade_away__6entityb
class entity {
public:
    void set_fade_away(bool fade);
};

void entity::set_fade_away(bool fade) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144F88)
// 0x00144F88 get_fade_away__C6entity
class entity {
public:
    bool get_fade_away() const;
};

bool entity::get_fade_away() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144F90)
// 0x00144F90 get_filename__C6entity
class stringx {};

extern const stringx entity_empty_string;
__asm__(".equ entity_empty_string, 0x0046DB30");

class entity {
public:
    const stringx& get_filename() const;
};

const stringx& entity::get_filename() const {
    return entity_empty_string;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144FA0)
// 0x00144FA0 get_dirname__C6entity
class stringx {};

extern const stringx entity_empty_string;
__asm__(".equ entity_empty_string, 0x0046DB30");

class entity {
public:
    const stringx& get_dirname() const;
};

const stringx& entity::get_dirname() const {
    return entity_empty_string;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144FB0)
// 0x00144FB0 has_dirname__C6entity
class entity {
public:
    bool has_dirname() const;
};

bool entity::has_dirname() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144FC0)
// 0x00144FC0 get_flavor__C6entity
enum entity_flavor_t {
    ENTITY_FLAVOR_PLACEHOLDER
};

class entity {
    char padding[0x7C];
    entity_flavor_t flavor;

public:
    entity_flavor_t get_flavor() const;
};

entity_flavor_t entity::get_flavor() const {
    return flavor;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144FC8)
// 0x00144FC8 is_an_entity__C6entity
class entity {
public:
    bool is_an_entity() const;
};

bool entity::is_an_entity() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144FD0)
// 0x00144FD0 is_a_beam__C6entity
class entity {
public:
    bool is_a_beam() const;
};

bool entity::is_a_beam() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144FD8)
// 0x00144FD8 is_a_camera__C6entity
class entity {
public:
    bool is_a_camera() const;
};

bool entity::is_a_camera() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144FE0)
// 0x00144FE0 is_a_station_camera__C6entity
class entity {
public:
    bool is_a_station_camera() const;
};

bool entity::is_a_station_camera() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144FE8)
// 0x00144FE8 is_a_game_camera__C6entity
class entity {
public:
    bool is_a_game_camera() const;
};

bool entity::is_a_game_camera() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144FF0)
// 0x00144FF0 is_a_marky_camera__C6entity
class entity {
public:
    bool is_a_marky_camera() const;
};

bool entity::is_a_marky_camera() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00144FF8)
// 0x00144FF8 is_a_mouselook_camera__C6entity
class entity {
public:
    bool is_a_mouselook_camera() const;
};

bool entity::is_a_mouselook_camera() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145000)
// 0x00145000 is_a_sniper_camera__C6entity
class entity {
public:
    bool is_a_sniper_camera() const;
};

bool entity::is_a_sniper_camera() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145008)
// 0x00145008 is_a_conglomerate__C6entity
class entity {
public:
    bool is_a_conglomerate() const;
};

bool entity::is_a_conglomerate() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145010)
// 0x00145010 is_a_turret__C6entity
class entity {
public:
    bool is_a_turret() const;
};

bool entity::is_a_turret() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145018)
// 0x00145018 is_a_ladder__C6entity
class entity {
public:
    bool is_a_ladder() const;
};

bool entity::is_a_ladder() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145020)
// 0x00145020 is_a_light_source__C6entity
class entity {
public:
    bool is_a_light_source() const;
};

bool entity::is_a_light_source() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145028)
// 0x00145028 is_a_limb_body__C6entity
class entity {
public:
    bool is_a_limb_body() const;
};

bool entity::is_a_limb_body() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145030)
// 0x00145030 is_a_marker__C6entity
class entity {
public:
    bool is_a_marker() const;
};

bool entity::is_a_marker() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145038)
// 0x00145038 is_a_rectangle_marker__C6entity
class entity {
public:
    bool is_a_rectangle_marker() const;
};

bool entity::is_a_rectangle_marker() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145040)
// 0x00145040 is_a_cube_marker__C6entity
class entity {
public:
    bool is_a_cube_marker() const;
};

bool entity::is_a_cube_marker() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145048)
// 0x00145048 is_a_crawl_marker__C6entity
class entity {
public:
    bool is_a_crawl_marker() const;
};

bool entity::is_a_crawl_marker() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145050)
// 0x00145050 is_a_particle_generator__C6entity
class entity {
public:
    bool is_a_particle_generator() const;
};

bool entity::is_a_particle_generator() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145058)
// 0x00145058 is_a_physical_entity__C6entity
class entity {
public:
    bool is_a_physical_entity() const;
};

bool entity::is_a_physical_entity() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145060)
// 0x00145060 is_a_crate__C6entity
class entity {
public:
    bool is_a_crate() const;
};

bool entity::is_a_crate() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145068)
// 0x00145068 is_an_item__C6entity
class entity {
public:
    bool is_an_item() const;
};

bool entity::is_an_item() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145070)
// 0x00145070 is_a_visual_item__C6entity
class entity {
public:
    bool is_a_visual_item() const;
};

bool entity::is_a_visual_item() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145078)
// 0x00145078 is_a_handheld_item__C6entity
class entity {
public:
    bool is_a_handheld_item() const;
};

bool entity::is_a_handheld_item() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145080)
// 0x00145080 is_a_gun__C6entity
class entity {
public:
    bool is_a_gun() const;
};

bool entity::is_a_gun() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145088)
// 0x00145088 is_a_thrown_item__C6entity
class entity {
public:
    bool is_a_thrown_item() const;
};

bool entity::is_a_thrown_item() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145090)
// 0x00145090 is_a_melee_item__C6entity
class entity {
public:
    bool is_a_melee_item() const;
};

bool entity::is_a_melee_item() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145098)
// 0x00145098 is_a_morphable_item__C6entity
class entity {
public:
    bool is_a_morphable_item() const;
};

bool entity::is_a_morphable_item() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001450A0)
// 0x001450A0 is_a_projectile__C6entity
class entity {
public:
    bool is_a_projectile() const;
};

bool entity::is_a_projectile() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001450A8)
// 0x001450A8 is_a_rigid_body__C6entity
class entity {
public:
    bool is_a_rigid_body() const;
};

bool entity::is_a_rigid_body() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001450B0)
// 0x001450B0 is_a_grenade__C6entity
class entity {
public:
    bool is_a_grenade() const;
};

bool entity::is_a_grenade() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001450B8)
// 0x001450B8 is_a_rocket__C6entity
class entity {
public:
    bool is_a_rocket() const;
};

bool entity::is_a_rocket() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001450C0)
// 0x001450C0 is_a_scanner__C6entity
class entity {
public:
    bool is_a_scanner() const;
};

bool entity::is_a_scanner() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001450C8)
// 0x001450C8 is_a_sky__C6entity
class entity {
public:
    bool is_a_sky() const;
};

bool entity::is_a_sky() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001450D0)
// 0x001450D0 frame_done__6entity
class entity {
public:
    void frame_done();
};

void entity::frame_done() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001450D8)
// 0x001450D8 add_position_increment__6entityR8vector3d
class vector3d;

class entity {
public:
    bool add_position_increment(vector3d &increment);
};

bool entity::add_position_increment(vector3d &increment) {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001450E0)
// 0x001450E0 terrain_position__C6entity
class vector3d {
    float x;
    float y;
    float z;
};

struct entity_position_holder {
    char padding[0x30];
    vector3d position;
};

class entity {
    char padding[0x50];
    entity_position_holder* absolute;
public:
    const vector3d& terrain_position() const;
};

const vector3d& entity::terrain_position() const {
    return absolute->position;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145118)
// 0x00145118 get_colgeom_root_po__C6entity
class po {
};

class entity {
    char padding[0x50];
    po *absolute_po;

    const po &get_abs_po() const {
        return *absolute_po;
    }

public:
    const po &get_colgeom_root_po() const;
};

const po &entity::get_colgeom_root_po() const {
    return get_abs_po();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145120)
// 0x00145120 get_colgeom_root__C6entity
class entity {
public:
    const entity *get_colgeom_root() const;
};

const entity *entity::get_colgeom_root() const {
    return this;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145130)
// 0x00145130 get_region__C6entity
class region_node;

class entity {
    char padding[0x15C];
    region_node *center_region;

public:
    region_node *get_region() const;
};

region_node *entity::get_region() const {
    return center_region;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145138)
// 0x00145138 camera_set_target__6entityRC8vector3d
class vector3d;

class entity {
public:
    void camera_set_target(const vector3d &position);
};

void entity::camera_set_target(const vector3d &position) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145140)
// 0x00145140 camera_set_roll__6entityf
class entity {
public:
    void camera_set_roll(float angle);
};

void entity::camera_set_roll(float angle) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145148)
// 0x00145148 camera_set_collide_with_world__6entityb
class entity {
public:
    void camera_set_collide_with_world(bool collide);
};

void entity::camera_set_collide_with_world(bool collide) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145150)
// 0x00145150 camera_slide_to__6entityRC8vector3dT1ff
class vector3d;

class entity {
public:
    bool camera_slide_to(
        const vector3d &position,
        const vector3d &target,
        float roll,
        float speed
    );
};

bool entity::camera_slide_to(
    const vector3d &position,
    const vector3d &target,
    float roll,
    float speed
) {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145158)
// 0x00145158 camera_slide_to_orbit__6entityRC8vector3dffff
class vector3d;

class entity {
public:
    bool camera_slide_to_orbit(
        const vector3d &center,
        float range,
        float theta,
        float psi,
        float speed
    );
};

bool entity::camera_slide_to_orbit(
    const vector3d &center,
    float range,
    float theta,
    float psi,
    float speed
) {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145160)
// 0x00145160 camera_orbit__6entityRC8vector3dfff
class vector3d;

class entity {
public:
    void camera_orbit(
        const vector3d &center,
        float range,
        float theta,
        float psi
    );
};

void entity::camera_orbit(
    const vector3d &center,
    float range,
    float theta,
    float psi
) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001451A8)
// 0x001451A8 get_frame_delta__C6entity
class po {};

struct movement_info {
    char padding[0x10];
    po frame_delta;
};

class entity {
    char padding[0x150];
    movement_info* mi;
public:
    const po& get_frame_delta() const;
};

const po& entity::get_frame_delta() const {
    return mi->frame_delta;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001451B8)
// 0x001451B8 get_programmed_cell_death__C6entity
class entity {
    char padding[0x190];
    float programmed_cell_death;

public:
    float get_programmed_cell_death() const;
};

float entity::get_programmed_cell_death() const {
    return programmed_cell_death;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001451C0)
// 0x001451C0 get_hit_points__C6entity
class entity { public: float get_hit_points() const; };
float entity::get_hit_points() const { return 1.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001451D0)
// 0x001451D0 get_full_hit_points__C6entity
class entity { public: float get_full_hit_points() const; };
float entity::get_full_hit_points() const { return 1.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145208)
// 0x00145208 has_destroy_info__C6entity
class destroyable_info;

class entity {
    char padding[0x19C];
    destroyable_info* destroy_info;
public:
    bool has_destroy_info() const;
};

bool entity::has_destroy_info() const {
    return destroy_info != 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145218)
// 0x00145218 get_destroy_info__C6entity
class destroyable_info;

class entity {
    char padding[0x19C];
    destroyable_info *destroy_info;

public:
    destroyable_info *get_destroy_info() const;
};

destroyable_info *entity::get_destroy_info() const {
    return destroy_info;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145168)
// 0x00145168 is_frame_delta_valid__C6entity
struct movement_info { bool frame_delta_valid; bool last_frame_delta_valid; };
class entity { char padding[0x150]; movement_info* mi; public: bool is_frame_delta_valid() const; };
bool entity::is_frame_delta_valid() const { return mi && mi->frame_delta_valid; }
#endif
