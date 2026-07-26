#ifndef KELLY_DECOMP_ENTITY_LIGHT_SHARED_H
#define KELLY_DECOMP_ENTITY_LIGHT_SHARED_H

#include "KS/SRC/stringx.h"
#include "KS/SRC/vector3d_shared.h"

class entity_id {
    stringx value;
};

class light_color {
public:
    float red;
    float green;
    float blue;
    float alpha;

    inline light_color(
        float red_value,
        float green_value,
        float blue_value,
        float alpha_value = 1.0f)
      : red(red_value),
        green(green_value),
        blue(blue_value),
        alpha(alpha_value)
    {
    }
};

class light_sphere {
public:
    vector3d center;
    float radius;

    inline light_sphere()
      : center(0.0f, 0.0f, 0.0f),
        radius(0.0f)
    {
    }
};

class light_reference {
protected:
    unsigned int reference_count;

public:
    inline light_reference() : reference_count(0) {}
};

class light_record_list {
    void *start;
    void *finish;
    void *end_of_storage;

public:
    inline light_record_list()
      : start(0), finish(0), end_of_storage(0)
    {
    }
};

class light_manager : public light_reference {
    light_record_list lights;
    light_color last_ambient;
    light_color goal_ambient;
    light_color my_ambient;
    unsigned int max_lights;
    unsigned int current_max_lights;
    light_sphere bound;
    bool allow_omni;
    bool dynamic_only;

public:
    explicit inline light_manager(bool is_terrain = false)
      : light_reference(),
        lights(),
        last_ambient(1.0f, 1.0f, 1.0f, 1.0f),
        goal_ambient(1.0f, 1.0f, 1.0f, 1.0f),
        my_ambient(1.0f, 1.0f, 1.0f, 1.0f),
        max_lights(1),
        bound(),
        allow_omni(is_terrain),
        dynamic_only(is_terrain)
    {
    }
};

class entity {
    char entity_state[128];
    entity_id id;
    char entity_state_after_id[92];
    light_manager *my_light_mgr;

public:
    void create_light_set();
};

void *operator new(
    unsigned int size,
    unsigned int alignment,
    const char *file,
    int line);

__asm__(".equ __nw__FUiUiPCci, 0x002AC578");

#endif
