#ifndef BEAM_H
#define BEAM_H

#include "KS/SRC/color.h"
#include "KS/SRC/entity.h"
#include "g++-2/stl_vector.h"

#pragma interface

class material;
class beam;
class beam_effect;
class camera;
class terrain;

template <class T>
class instance_bank {
public:
    void delete_instance(T* instance);
};

class beam : public entity {
    float thickness;
    float max_length;
    color32 my_color;
    vector<beam_effect *> effects;
    unsigned int beam_flags;
    po last_po;
    vector3d static_endpoint;
    float static_len;
    float curr_len;
    vector3d impact_point;
    vector3d impact_normal;
    vector2d uv_anim;
    vector2d uv_coords[2];
    float tiles_per_meter;
    unsigned short effect_id_counter;
    material* my_material;
    bool additive;

public:
    virtual bool is_a_beam() const;
    void kill_all_effects(bool apply_target_vals = false);
    void purge_effects();
    void release();
    render_flavor_t render_passes_needed() const;
    inline color32 get_beam_color() const { return my_color; }
    void set_thickness(float value);
    void set_max_length(float value);
    void set_beam_color(const color32 &color);
    void set_texture(const stringx &filename);
    inline float get_tiles_per_meter() const { return tiles_per_meter; }
    inline void set_tiles_per_meter(float value) {
        tiles_per_meter = value;
    }
    virtual void frame_advance(float time_inc);
    virtual void render(
        camera *camera_link,
        float detail,
        render_flavor_t flavor,
        float translucency);
    virtual void set_visible(bool visible);
    virtual void compute_sector(
        terrain &terrain_value,
        bool use_high_res_intersect);
};

class beam_effect_type {
protected:
    virtual ~beam_effect_type();
    virtual void apply_start_vals(beam *the_beam);
    virtual void apply_target_vals(beam *the_beam);
    virtual void apply_delta_vals(beam *the_beam, float time);
    virtual void reverse();
    virtual beam_effect_type *make_instance();
};

class beam_effect_color : public beam_effect_type {
protected:
    virtual void apply_start_vals(beam *the_beam);
    virtual void apply_target_vals(beam *the_beam);
    virtual void apply_delta_vals(beam *the_beam, float time);
    virtual void reverse();
    unsigned char start[3];
    unsigned char target[3];
    float delta[3];
    float curr[3];
    virtual beam_effect_type *make_instance();
};

class beam_effect_width : public beam_effect_type {
protected:
    beam_effect_width() {}
    virtual ~beam_effect_width() {}
    virtual void apply_start_vals(beam *the_beam);
    virtual void apply_target_vals(beam *the_beam);
    virtual void apply_delta_vals(beam *the_beam, float time);
    virtual void reverse();
    float start;
    float target;
    float delta;
    virtual beam_effect_type *make_instance();
    friend class beam_effect;
};

class beam_effect_alpha : public beam_effect_type {
protected:
    beam_effect_alpha() {}
    virtual ~beam_effect_alpha() {}
    virtual void apply_start_vals(beam *the_beam);
    virtual void apply_target_vals(beam *the_beam);
    virtual void apply_delta_vals(beam *the_beam, float time);
    virtual void reverse();
    unsigned char start;
    unsigned char target;
    float delta;
    float curr;
    virtual beam_effect_type *make_instance();
    friend class beam_effect;
};

class beam_effect {
    enum effect_mode {
        EFFECT_DEAD = 0,
        EFFECT_DELAY = 1,
        EFFECT_ACTIVE = 2,
        EFFECT_INVERTED_DELAY = -1,
        EFFECT_INVERTED_ACTIVE = -2
    };

    beam *my_beam;
    beam_effect_type *effect;
    unsigned short id;
    char mode;
    float timer;
    float loop_delay;
    float duration;

public:
    beam_effect(beam *the_beam);
    virtual ~beam_effect();
    virtual unsigned short get_id() const;
    virtual void set_id(unsigned short value);
    virtual bool is_dead() const;
    virtual bool is_alive() const;
    virtual bool is_inverted() const;
};

extern instance_bank<material> material_bank;

__asm__(".equ release__6entity, 0x0012AAB0");
__asm__(".equ render_passes_needed__C6entity, 0x00133640");
__asm__(".equ purge_effects__4beam, 0x002712B0");
__asm__(".equ kill_all_effects__4beamb, 0x00272608");
__asm__(".equ delete_instance__t13instance_bank1Z8materialP8material, 0x002AD570");
__asm__(".equ material_bank, 0x0046B650");

#endif
