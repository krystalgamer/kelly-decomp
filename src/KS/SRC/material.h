#ifndef MATERIAL_H
#define MATERIAL_H

#include "KS/SRC/color.h"
#include "KS/SRC/stringx.h"

enum map_e {
    MAP_DIFFUSE,
    MAP_DIFFUSE2,
    MAP_DETAIL,
    MAP_ENVIRONMENT,
    MAPS_PER_MATERIAL
};

class hw_texture;

class anim_texture {
    stringx filename;
    hw_texture **frame_begin;
    hw_texture **frame_end;
    hw_texture **frame_capacity;
    char vertex_contexts[12];
    unsigned int tex_flags;
    unsigned int blend_mode;
    float blend_amount;
    color32 diffuse_color;

public:
    hw_texture *get_texture(int frame) const;
    int get_anim_length() const;
};

class material {
    static material *last_context_material;

    stringx material_name;
    stringx texture_filename[MAPS_PER_MATERIAL];
    anim_texture diffuse_map[MAPS_PER_MATERIAL];
    float u_anim;
    float v_anim;
    float det_u_scale;
    float det_v_scale;
    float det_range;
    float det_alpha_clamp;
    unsigned int mat_flags;

public:
    static void flush_last_context();
    void send_context(
        int frame,
        map_e map,
        unsigned int flags,
        color32 color);
    int get_anim_length(int map = 0) const;
    unsigned int get_flags() const;
    void set_flags(unsigned int value);
};

#endif
