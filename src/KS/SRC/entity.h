#ifndef ENTITY_H
#define ENTITY_H

#include "KS/SRC/animation_interface.h"
#include "KS/SRC/bone.h"
#include "KS/SRC/frame_info.h"
#include "KS/SRC/hard_attrib_interface.h"
#include "KS/SRC/path.h"
#include "KS/SRC/physical_interface.h"
#include "KS/SRC/po.h"
#include "KS/SRC/render_interface.h"
#include "KS/SRC/skeleton_interface.h"
#include "KS/SRC/soft_attrib_interface.h"
#include "KS/SRC/stringx.h"
#include "KS/SRC/time_interface.h"
#include "KS/SRC/algebra.h"
#include "KS/SRC/visrep.h"

#pragma interface

typedef short anim_id_t;

enum entity_flavor_t {
    ENTITY_CAMERA,
    ENTITY_ENTITY,
    ENTITY_MARKER,
    ENTITY_MIC,
    ENTITY_LIGHT_SOURCE,
    ENTITY_PARTICLE_GENERATOR,
    ENTITY_PHYSICAL,
    ENTITY_ITEM,
    ENTITY_LIGHT,
    ENTITY_MOBILE,
    ENTITY_CONGLOMERATE,
    ENTITY_TURRET,
    ENTITY_BEAM,
    ENTITY_SCANNER,
    ENTITY_MORPHABLE_ITEM,
    ENTITY_SKY,
    ENTITY_MANIP,
    ENTITY_SWITCH,
    ENTITY_BOX_TRIGGER,
    ENTITY_POLYTUBE,
    ENTITY_LENSFLARE,
    NUM_ENTITY_FLAVORS,
    IGNORE_FLAVOR
};

class camera;
class chunk_file;
class color32;
class collision_capsule;
class collision_geometry;
class entity;
class entity_anim;
class entity_anim_tree;
class entity_controller;
class item;
class material_set;
class nglMesh;
class nglTexture;
class nglVector;
class motion_blur_info;
class pstring;
class region;
class sector;
class terrain;
class vector3d;
class ai_interface;
class hard_attrib_interface;
class owner_interface;
class slave_interface;
struct container_info;

class entity_id {
    unsigned int value;

public:
    inline unsigned int get_numerical_val() const {
        return value;
    }
};

class anim_id_manager {
public:
    anim_id_t anim_id(const char *label);
    anim_id_t anim_id(const stringx &label);
};

enum entity_extended_flags {
    EFLAG_EXT_IS_DOOR = 0x00000040,
    EFLAG_EXT_TIME_LIMITED = 0x00010000
};

enum entity_flags {
    EFLAG_PHYSICS_COLLISIONS_ACTIVE = 0x00000002,
    EFLAG_PHYSICS_MOVING = 0x00000004,
    EFLAG_PHYSICS_WALKABLE = 0x00000008,
    EFLAG_PHYSICS_STICKY = 0x00000040,
    EFLAG_GRAPHICS = 0x00000100,
    EFLAG_GRAPHICS_VISIBLE = 0x00000200,
    EFLAG_GRAPHICS_MOTION_BLUR = 0x00000400,
    EFLAG_GRAPHICS_MOTION_TRAIL = 0x00000800,
    EFLAG_MISC_REPULSION = 0x00001000,
    EFLAG_MISC_IN_USE = 0x00010000,
    EFLAG_ACTIVE = 0x00020000,
    EFLAG_PHYSENT_EXTERNALLY_CONTROLLED = 0x00100000,
    EFLAG_MISC_RAW_NONSTATIC = 0x00800000,
    EFLAG_MISC_NONSTATIC = 0x08000000,
    EFLAG_REGION_FORCED = 0x10000000
};

class destroyable_info {
    short flags;
    float destroy_lifetime;
    stringx destroy_fx;
    stringx destroy_script;
    stringx destroyed_visrep;
    stringx preload_script;
    visual_rep *destroyed_mesh;
    int hit_points;

protected:
    virtual void copy_instance_data(destroyable_info *data);

    entity *owner;

public:
    virtual ~destroyable_info();
    virtual void preload();
    void reset();
    void apply_destruction_fx();
    inline bool has_hit_points() const {
        short value = flags;
        __asm__ volatile("" : "+r"(value));
        return value & 1;
    }
    inline int get_hit_points() const {
        return hit_points;
    }
};

class entity_color32 {
    unsigned char red;
    unsigned char green;
    unsigned char blue;
    unsigned char alpha;

public:
    inline unsigned char get_alpha() const {
        return alpha;
    }
};

struct region_tree_node {
    int color;
    region_tree_node *parent;
    region_tree_node *left;
    region_tree_node *right;
    region_node *value;
};

class region_node_pset_iterator {
    region_tree_node *node;

public:
    explicit region_node_pset_iterator(region_tree_node *value)
        : node(value)
    {
    }

    region_node *operator*() const {
        return node->value;
    }
};

class region_node_pset {
    region_tree_node *header;
    unsigned int node_count;

public:
    typedef region_node_pset_iterator iterator;

    inline bool empty() const {
        return node_count == 0;
    }
    inline iterator begin() const {
        return iterator(header->left);
    }
};

class entity : public bone {
public:
    struct movement_info;

private:
    stringx fileName;
    unsigned int flags;
    entity_flavor_t flavor;
    entity_id id;
    stringx parsedName;
    void *my_animation;
    rational_t radius;
    int MaterialMask;
    int TextureFrame;
    bool cull_entity;
    bool use_uv_scrolling;
    float scroll_u;
    float scroll_v;
    ai_interface *my_ai_interface;
    animation_interface *my_animation_interface;
    hard_attrib_interface *my_hard_attrib_interface;
    owner_interface *my_owner_interface;
    physical_interface *my_physical_interface;
    render_interface *my_render_interface;
    skeleton_interface *my_skeleton_interface;
    slave_interface *my_slave_interface;
    soft_attrib_interface *my_soft_attrib_interface;
    time_interface *my_time_interface;
    char entity_data_before_anim_trees[0x14];
    entity_anim_tree *anim_trees[10];
    entity_anim *current_anim;
    char entity_data_before_container_info[8];
    container_info *coninfo;
    char entity_data_after_container_info[8];
    visual_rep *my_visrep;
    nglMesh *shadow_mesh;
    nglMesh *lores_mesh;
    nglMesh *my_mesh;
    bool use_zbias;
    float zbias;
    bool force_hi_res;
    rational_t vis_xz_rad_rel_center;
    collision_geometry *colgeom;
    motion_blur_info *mbi;
    movement_info *movement_info_data;
    char entity_data_before_entity_sector[4];
    sector *my_sector;
    region_node *center_region;
    region_node_pset in_regions;
    char entity_data_before_last_po[4];
    po *last_po;
    char entity_data_before_last_item_used[0x0c];
    item *last_item_used;
    bool suspended;
    bool suspended_active_status;
    entity_controller *my_controller;
    unsigned int max_lights;
    time_value_t programmed_cell_death;
    short bone_idx;
    char entity_data_after_bone_idx[2];
    unsigned int ext_flags;
    destroyable_info *destroy_info;
    char entity_data_before_frame_time_info[0x2c];
    frame_info frame_time_info;

protected:
    entity_color32 render_color;

private:
    vector3d render_scale;
    char entity_data_before_which_hero[8];
    int which_hero;
    char entity_trailing_data[0x0c];

public:
    virtual bool get_ifc_num(const pstring &attribute, rational_t &value);
    virtual bool set_ifc_num(const pstring &attribute, rational_t value);
    virtual bool get_ifc_vec(const pstring &attribute, vector3d &value);
    virtual bool set_ifc_vec(
        const pstring &attribute,
        const vector3d &value
    );
    virtual bool get_ifc_str(const pstring &attribute, stringx &value);
    virtual bool set_ifc_str(
        const pstring &attribute,
        const stringx &value
    );
    void set_alternative_materials(material_set *materials);
    void set_alternative_materials(const stringx &name);
    virtual void frame_advance(time_value_t time);
    virtual void render(
        camera *camera_link,
        rational_t detail,
        render_flavor_t flavor,
        rational_t translucency
    );
    virtual void rendershadow(
        camera *camera_link,
        rational_t detail,
        render_flavor_t flavor,
        rational_t translucency,
        rational_t scale
    );
    virtual ~entity();
    virtual void initialize();
    virtual void read_enx(chunk_file &file);
    virtual bool handle_enx_chunk(chunk_file &file, stringx &label);
    virtual bool parse_instance(const stringx &flavor, chunk_file &file);
    virtual entity *make_instance(
        const entity_id &id,
        unsigned int flags
    ) const;
    virtual void set_ext_flag_recursive(unsigned int flag, bool enabled);
    virtual void set_created_entity_default_active_status();
    virtual void optimize();
    virtual signal_list *construct_signal_list();
    static unsigned short get_signal_id(const char *name);
    virtual const char *get_signal_name(unsigned short index) const;
    virtual void set_radius(rational_t radius);
    virtual rational_t get_radius() const;
    virtual bool is_time_limited() const;
    virtual void set_time_limited(bool enabled);
    virtual bool is_active() const;
    virtual void set_active(bool active);

    enum force_active_t {
        FORCE_ACTIVE_NONE = 0,
        FORCE_ACTIVE_FALSE = -1,
        FORCE_ACTIVE_TRUE = 1
    };

    virtual force_active_t get_forced_active() const;
    virtual bool are_collisions_active() const;
    virtual void set_collisions_active(
        bool active,
        bool update_region = true
    ) __asm__("set_collisions_active__6entitybT1");
    virtual bool is_sticky() const;
    virtual void set_sticky(bool sticky);
    virtual bool is_stationary() const;
    virtual void set_stationary(bool stationary);
    virtual bool is_walkable() const;
    virtual void set_walkable(bool walkable);
    virtual bool is_repulsion() const;
    virtual void set_repulsion(bool repulsion);
    virtual bool is_visible() const;
    virtual void set_visible(bool visible);
    virtual bool is_still_visible() const;
    virtual bool is_motion_blurred() const;
    virtual void activate_motion_blur(
        int minimum_alpha,
        int maximum_alpha,
        int image_count,
        float spread
    );
    virtual void deactivate_motion_blur();
    virtual bool is_motion_trailed() const;
    virtual void activate_motion_trail(
        int trail_length,
        color32 trail_color,
        int minimum_alpha,
        int maximum_alpha,
        const vector3d &tip
    );
    virtual void deactivate_motion_trail();
    virtual bool get_externally_controlled() const;
    virtual bool get_in_use() const;
    virtual void set_in_use(bool in_use);
    virtual collision_geometry *get_colgeom() const;
    virtual void update_colgeom(po *root = 0);
    virtual void invalidate_colgeom();
    virtual collision_geometry *get_updated_colgeom(
        po *root = 0,
        rational_t radius_scale = 1.0f);
    virtual collision_capsule *get_damage_capsule();
    virtual collision_capsule *get_updated_damage_capsule();
    virtual rational_t get_inter_capsule_radius_scale();
    virtual void get_velocity(vector3d *velocity) const;
    virtual void get_angular_velocity(vector3d *velocity) const;
    virtual rational_t get_water_dist() const;
    virtual rational_t get_underwater_pct() const;
    virtual const vector3d &get_water_normal() const;
    virtual time_value_t get_underwater_time() const;
    virtual vector3d get_last_position() const;
    virtual void get_effective_collision_velocity(
        vector3d *velocity,
        const vector3d &position) const;
    virtual rational_t get_effective_collision_mass(
        const vector3d &position,
        const vector3d &direction) const;
    virtual void get_closest_point_along_dir(
        vector3d *result,
        const vector3d &direction) const;
    virtual bool is_picked_up();
    virtual void phys_render(
        time_value_t time = 0.0f,
        bool translucent = false);
    virtual time_value_t get_visrep_ending_time() const;
    virtual vector3d get_visual_center() const;
    virtual rational_t get_visual_radius() const;
    virtual rational_t get_visual_xz_radius_rel_center() const;
    virtual visual_rep *get_vrep() const;
    virtual nglMesh *get_mesh() const;
    virtual void set_mesh(nglMesh *mesh);
    virtual nglMesh *get_lores_mesh() const;
    virtual void set_lores_mesh(nglMesh *mesh);
    void set_zbias(int value);
    virtual nglMesh *get_shadow_mesh() const;
    virtual void set_fade_away(bool enabled);
    virtual bool get_fade_away() const;
    virtual const stringx &get_filename() const;
    virtual const stringx &get_dirname() const;
    virtual bool has_dirname() const;
    virtual void set_min_detail(int detail);
    entity_flavor_t get_flavor() const;
    inline bool is_ext_flagged(unsigned int flag) const {
        return ext_flags & flag;
    }
    virtual bool is_an_entity() const;
    virtual bool is_a_beam() const;
    virtual bool is_a_camera() const;
    virtual bool is_a_station_camera() const;
    virtual bool is_a_game_camera() const;
    virtual bool is_a_marky_camera() const;
    virtual bool is_a_mouselook_camera() const;
    virtual bool is_a_sniper_camera() const;
    virtual bool is_a_conglomerate() const;
    virtual bool is_a_turret() const;
    virtual bool is_a_ladder() const;
    virtual bool is_a_light_source() const;
    virtual bool is_a_limb_body() const;
    virtual bool is_a_marker() const;
    virtual bool is_a_rectangle_marker() const;
    virtual bool is_a_cube_marker() const;
    virtual bool is_a_crawl_marker() const;
    virtual bool is_a_particle_generator() const;
    virtual bool is_a_physical_entity() const;
    virtual bool is_a_crate() const;
    virtual bool is_an_item() const;
    virtual bool is_a_visual_item() const;
    virtual bool is_a_handheld_item() const;
    virtual bool is_a_gun() const;
    virtual bool is_a_thrown_item() const;
    virtual bool is_a_melee_item() const;
    virtual bool is_a_morphable_item() const;
    virtual bool is_a_projectile() const;
    virtual bool is_a_rigid_body() const;
    virtual bool is_a_grenade() const;
    virtual bool is_a_rocket() const;
    virtual bool is_a_scanner() const;
    virtual bool is_a_sky() const;
    virtual void advance_age(time_value_t time);
    virtual void frame_done();
    virtual bool add_position_increment(vector3d &increment);
    virtual const vector3d &terrain_position() const;
    virtual rational_t terrain_radius() const;
    virtual const po &get_colgeom_root_po() const;
    virtual const entity *get_colgeom_root() const;
    virtual void add_me_to_region(region *target);
    virtual void remove_me_from_region(region *target);
    virtual void compute_sector(
        terrain &terrain_data,
        bool high_resolution = false);
    virtual region_node *get_region() const;
    virtual void camera_set_target(const vector3d &position);
    virtual void camera_set_roll(rational_t angle);
    virtual void camera_set_collide_with_world(bool collide);
    virtual bool camera_slide_to(
        const vector3d &position,
        const vector3d &target,
        rational_t roll,
        rational_t speed);
    virtual bool camera_slide_to_orbit(
        const vector3d &center,
        rational_t range,
        rational_t theta,
        rational_t psi,
        rational_t speed);
    virtual void camera_orbit(
        const vector3d &center,
        rational_t range,
        rational_t theta,
        rational_t psi);
    virtual const po &get_frame_delta() const;
    virtual bool is_frame_delta_valid() const;
    virtual bool is_last_frame_delta_valid() const;
    void invalidate_frame_delta();
    virtual time_value_t get_programmed_cell_death() const;
    virtual rational_t get_hit_points() const;
    virtual rational_t get_full_hit_points() const;
    virtual bool has_destroy_info() const;
    virtual destroyable_info *get_destroy_info() const;
    virtual void set_render_scale(const vector3d &scale);
    virtual vector3d get_detonate_position() const;

    struct movement_info {
        bool frame_delta_valid;
        bool last_frame_delta_valid;
        po frame_delta;
        time_value_t frame_time;

        static bool meminit;
        static bool *allocated;
        static void *membuffer;
        static int current_allocation;
        static void *mem_init_func;
        static void *mem_free_func;
        static void check_mem_init();
        static void mem_cleanup();
        static void *operator new(unsigned int size);
        static void *operator new(
            unsigned int size,
            unsigned int alignment,
            const char *description,
            int line);
    };

    time_value_t get_age() const;
    int get_hero_id();
    inline short get_bone_idx() const { return bone_idx; }
    int get_max_polys() const;
    void delete_visrep();
    bool has_mesh();
    int num_mesh_bones();
    void set_max_lights(unsigned int maximum);
    void set_mesh_distance(
        nglVector &center,
        float radius,
        float force_distance = -1.0f);
    void set_mesh_texture(nglTexture *texture);
    bool is_hero() const;
    inline const po &get_abs_po() const {
        return **(po * const *)((const char *)this + 0x50);
    }
    inline const vector3d &get_abs_position() const {
        return get_abs_po().get_position();
    }
    inline movement_info *get_movement_info() const {
        return *(movement_info * const *)((const char *)this + 0x150);
    }
    inline bool was_preloaded() const {
        return ext_flags & 0x00080000;
    }
    inline void set_preloaded(bool enabled) {
        if (enabled)
            ext_flags |= 0x00080000;
        else
            ext_flags &= ~0x00080000;
    }
    virtual render_flavor_t render_passes_needed() const;
    virtual void preload();
    void acquire(unsigned int flags);
    inline void set_render_color(color32 color);
    inline void set_flag(entity_flags flag, bool enabled) {
        if (enabled)
            flags |= flag;
        else
            flags &= ~flag;
    }
    void region_update_poss_collide();
    void remove_from_regions();
    void remove_from_terrain();
    void unforce_regions();
    void force_current_region();
    void _set_region_forced_status();
    void ifl_lock(int frame_index);
    void ifl_pause();
    virtual void ifl_play();
    void compute_visual_xz_radius_rel_center();
    int get_random_ifl_frame_boost() const;
    void set_age(time_value_t age);
    void unload_anim(const stringx &filename) const;
    void make_animateable(bool enabled = true);
    entity_anim_tree *play_anim(
        const stringx &filename,
        time_value_t start_time,
        unsigned short anim_flags = 0,
        short loop = -1);
    entity_anim_tree *play_anim(
        int slot,
        const stringx &filename,
        time_value_t start_time,
        unsigned short anim_flags = 0,
        short loop = -1);
    entity_anim_tree *get_anim_tree(int slot) const;
    void clear_anim(entity_anim_tree *animation);
    void kill_anim(int slot);
    virtual bool attach_anim(entity_anim *animation);
    virtual void detach_anim();
    virtual void apply_destruction_fx();
    virtual bool is_destroyable() const;
    virtual void create_destroy_info();
    virtual void apply_damage(
        int damage,
        const vector3d &position,
        const vector3d &normal,
        int damage_type = 0,
        entity *attacker = 0,
        int damage_flags = 0);
    void disgorge_items(entity *target = 0);
    virtual void use_item(item *value);
    virtual void copy_visrep(entity *other);
    virtual bool allow_targeting() const;
    virtual bool test_combat_target(
        const vector3d &start,
        const vector3d &end,
        vector3d *impact_position,
        vector3d *impact_normal,
        rational_t radius = 1.0f,
        bool rear_cull = true) const;
    virtual void unsuspend();
    virtual void suspend();
    void set_controller(entity_controller *controller);
    virtual bool is_alive() const;
    virtual bool is_dying() const;
    virtual bool possibly_aging() const;
    virtual bool possibly_active() const;
    void region_update_poss_active();
    void release();
    item *find_like_item(item *target) const;
    static void exec_preload_function(const stringx &script);
    void set_door(bool door);
    void set_door_closed(bool closed);
    inline bool has_ai_ifc() const {
        return my_ai_interface != 0;
    }
    void destroy_ai_ifc();
    void destroy_animation_ifc();
    void destroy_hard_attrib_ifc();
    void destroy_owner_ifc();
    void destroy_physical_ifc();
    void destroy_render_ifc();
    void destroy_skeleton_ifc();
    void destroy_slave_ifc();
    void destroy_soft_attrib_ifc();
    time_interface *create_time_ifc();
    void destroy_time_ifc();
    inline entity_interface *ai_ifc() const {
        return (entity_interface *)my_ai_interface;
    }
    inline bool has_physical_ifc() const {
        return my_physical_interface != 0;
    }
    inline physical_interface *physical_ifc() const {
        return my_physical_interface;
    }
    inline bool has_soft_attrib_ifc() const {
        return my_soft_attrib_interface != 0;
    }
    inline soft_attrib_interface *soft_attrib_ifc() const {
        return my_soft_attrib_interface;
    }
    inline bool has_hard_attrib_ifc() const {
        return my_hard_attrib_interface != 0;
    }
    inline hard_attrib_interface *hard_attrib_ifc() const {
        return my_hard_attrib_interface;
    }
    inline bool has_time_ifc() const {
        return my_time_interface != 0;
    }
    inline time_interface *time_ifc() const {
        return my_time_interface;
    }
    inline void set_needs_compute_sector(bool enabled) {
        if (enabled)
            ext_flags |= 0x20000000;
        else
            ext_flags &= ~0x20000000;
    }
    region_node *get_primary_region() const
        __asm__("get_primary_region__C6entity");
    region_node *update_region(bool parent_computed = false);
    const po &get_last_po();
    void set_last_po(const po &value);
};

#endif
