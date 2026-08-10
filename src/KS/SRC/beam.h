#ifndef BEAM_H
#define BEAM_H

#include "KS/SRC/color.h"
#include "KS/SRC/entity.h"
#include "KS/SRC/instance_bank.h"
#include "g++-2/stl_vector.h"

#pragma interface

class material;
class beam;
class beam_effect;
class camera;
class chunk_file;
class terrain;

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
    enum signal_id_t {
        PARENT_SYNC_DUMMY = entity::N_SIGNALS - 1,
        ENTER,
        LEAVE,
        N_SIGNALS
    };

    enum flags_t {
        NO_CLIP_TO_HERO = 0x00000008,
        NO_CLIP_TO_BEAMABLE = 0x00000040,
        NO_CLIP_TO_WORLD = 0x00000080,
        NO_CLIPPING =
            NO_CLIP_TO_HERO |
            NO_CLIP_TO_BEAMABLE |
            NO_CLIP_TO_WORLD,
        DETECTS_STEALTH = 0x00000100
    };

    beam(
        const entity_id &id,
        unsigned int flags = 0,
        entity_flavor_t flavor = ENTITY_BEAM);
    virtual ~beam();
    virtual bool is_a_beam() const;
    virtual bool possibly_active() const;
    void kill_all_effects(bool apply_target_vals = false);
    void kill_effect(unsigned short id, bool apply_target_vals);
    void purge_effects();
    void release();
    render_flavor_t render_passes_needed() const;
    inline float get_thickness() const { return thickness; }
    inline color32 get_beam_color() const { return my_color; }
    void set_thickness(float value);
    void set_max_length(float value);
    void set_beam_color(const color32 &color);
    void set_texture(const stringx &filename);
    void set_point_to_point(
        const vector3d &start,
        const vector3d &end);
    inline void set_beam_flag(unsigned int value) {
        beam_flags |= value;
    }
    inline void clear_beam_flag(unsigned int value) {
        beam_flags &= ~value;
    }
    inline float get_tiles_per_meter() const { return tiles_per_meter; }
    inline void set_tiles_per_meter(float value) {
        tiles_per_meter = value;
    }
    inline void set_additive(bool value) {
        additive = value;
    }
    inline void set_uv_anim(const vector2d &value) {
        uv_anim = value;
    }
    virtual void frame_advance(float time_inc);
    virtual void render(
        camera *camera_link,
        float detail,
        render_flavor_t flavor,
        float translucency);
    virtual void set_visible(bool visible);
    virtual const char *get_signal_name(unsigned short index) const;
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
    friend class beam_effect;
};

class beam_effect_color : public beam_effect_type {
protected:
    beam_effect_color() {}
    virtual ~beam_effect_color() {}
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

    virtual void dump();
    virtual void set_active();
    virtual void set_delaying();

public:
    beam_effect(beam *the_beam);
    virtual ~beam_effect();
    virtual void set_color_delta(
        const color32 &start_color,
        const color32 &end_color,
        float duration,
        float delay = 0.0f,
        float loop_delay = -1.0f,
        bool invert_loop = false);
    virtual void set_width_delta(
        float start_width,
        float end_width,
        float duration,
        float delay = 0.0f,
        float loop_delay = -1.0f,
        bool invert_loop = false);
    virtual void set_alpha_delta(
        unsigned char start_alpha,
        unsigned char end_alpha,
        float duration,
        float delay = 0.0f,
        float loop_delay = -1.0f,
        bool invert_loop = false);
    virtual void frame_advance(float time);
    virtual void kill(bool apply_target_vals = false);
    virtual bool is_dead() const;
    virtual bool is_alive() const;
    virtual bool is_delaying() const;
    virtual bool is_active() const;
    virtual bool is_looping() const;
    virtual bool is_inverted() const;
    virtual unsigned short get_id() const;
    virtual void set_id(unsigned short value);
    virtual beam_effect *make_instance(beam *the_beam);
    virtual void read_width_chunk(chunk_file &file);
    virtual void read_alpha_chunk(chunk_file &file);
    virtual void read_color_chunk(chunk_file &file);
    virtual void handle_enx_chunk(chunk_file &file, stringx &label);
};

extern instance_bank<material> material_bank;

__asm__(".equ release__6entity, 0x0012AAB0");
__asm__(".equ render_passes_needed__C6entity, 0x00133640");
__asm__(".equ purge_effects__4beam, 0x002712B0");
__asm__(".equ kill_all_effects__4beamb, 0x00272608");
__asm__(".equ delete_instance__t13instance_bank1Z8materialP8material, 0x002AD570");
__asm__(".equ material_bank, 0x0046B650");

#endif
