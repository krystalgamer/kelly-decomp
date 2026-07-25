#ifndef KELLY_DECOMP_ENTITY_SHARED_H
#define KELLY_DECOMP_ENTITY_SHARED_H

#include "KS/SRC/bone_shared.h"
#include "KS/SRC/po_shared.h"
#include "KS/SRC/stringx.h"
#include "KS/SRC/visrep_shared.h"

#pragma interface

typedef short anim_id_t;

class camera;
class chunk_file;
class color32;
class entity;
class entity_id;
class pstring;
class vector3d;

class anim_id_manager {
public:
    anim_id_t anim_id(const char *label);
    anim_id_t anim_id(const stringx &label);
};

enum entity_extended_flags {
    EFLAG_EXT_IS_DOOR = 0x00000040
};

enum entity_flags {
    EFLAG_PHYSICS_COLLISIONS_ACTIVE = 0x00000002,
    EFLAG_GRAPHICS = 0x00000100,
    EFLAG_GRAPHICS_MOTION_BLUR = 0x00000400,
    EFLAG_GRAPHICS_MOTION_TRAIL = 0x00000800,
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

class entity : public bone {
    char entity_data[0x6c];
    unsigned int flags;
    char entity_data_after_flags[0xac];
    visual_rep *my_visrep;
    char entity_data_after_visrep[0x6c];
    unsigned int ext_flags;
    destroyable_info *destroy_info;
    char entity_data_before_render_color[0x38];

protected:
    entity_color32 render_color;

private:
    char entity_trailing_data[0x20];

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
    };

    time_value_t get_age() const;
    int get_max_polys() const;
    bool is_hero() const;
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
    inline void set_flag(entity_flags flag, bool enabled) {
        if (enabled)
            flags |= flag;
        else
            flags &= ~flag;
    }
    void region_update_poss_collide();
    void remove_from_regions();
    void unforce_regions();
    void set_door(bool door);
    void set_door_closed(bool closed);
};

#endif
