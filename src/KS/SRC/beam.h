#ifndef BEAM_H
#define BEAM_H

#include "KS/SRC/color.h"
#include "KS/SRC/entity.h"

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
    char beam_data_to_material[0xA0];
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

class beam_effect {
    beam *my_beam;
    beam_effect_type *effect;
    unsigned short id;
    char mode;
    char mode_padding;
    float timer;
    float loop_delay;
    float duration;

public:
    beam_effect(beam *the_beam);
    virtual ~beam_effect();
    virtual unsigned short get_id() const;
    virtual void set_id(unsigned short value);
};

extern instance_bank<material> material_bank;

__asm__(".equ release__6entity, 0x0012AAB0");
__asm__(".equ render_passes_needed__C6entity, 0x00133640");
__asm__(".equ purge_effects__4beam, 0x002712B0");
__asm__(".equ kill_all_effects__4beamb, 0x00272608");
__asm__(".equ delete_instance__t13instance_bank1Z8materialP8material, 0x002AD570");
__asm__(".equ material_bank, 0x0046B650");
__asm__(".equ set_beam_color__4beamRC7color32, 0x002717A0");

#endif
