#ifndef KELLY_DECOMP_ENTITY_SHARED_H
#define KELLY_DECOMP_ENTITY_SHARED_H

#include "KS/SRC/stringx.h"
#include "KS/SRC/visrep_shared.h"

typedef short anim_id_t;

class entity;

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

class entity {
    char entity_data[0x78];
    unsigned int flags;
    char entity_data_after_flags[0xac];
    visual_rep *my_visrep;
    char entity_data_after_visrep[0x6c];
    unsigned int ext_flags;
    destroyable_info *destroy_info;
    char entity_trailing_data[0x60];

public:
    bool are_collisions_active() const {
        return flags & EFLAG_PHYSICS_COLLISIONS_ACTIVE;
    }

    time_value_t get_age() const;
    int get_max_polys() const;
    bool is_hero() const;
    bool was_preloaded() const {
        return ext_flags & 0x00080000;
    }
    void set_preloaded(bool enabled) {
        if (enabled)
            ext_flags |= 0x00080000;
        else
            ext_flags &= ~0x00080000;
    }
    virtual void preload();
    void set_flag(entity_flags flag, bool enabled) {
        if (enabled)
            flags |= flag;
        else
            flags &= ~flag;
    }
    void region_update_poss_collide();
    void remove_from_regions();
    void unforce_regions();
    void set_collisions_active(bool active, bool update_region = true)
        __asm__("set_collisions_active__6entitybT1");
    void set_door(bool door);
    void set_door_closed(bool closed);
};

#endif
