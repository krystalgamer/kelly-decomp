#ifndef KELLY_DECOMP_BEAM_SHARED_H
#define KELLY_DECOMP_BEAM_SHARED_H

class material;
class beam;
typedef unsigned int render_flavor_t;

enum {
    RENDER_TRANSLUCENT_PORTION = 2,
};

class color32 {
public:
    union {
        unsigned int i;
        struct channels {
            unsigned char b;
            unsigned char g;
            unsigned char r;
            unsigned char a;
        } c;
    };

    inline color32(unsigned int value = 0) : i(value) {}
    inline color32(
        unsigned char red,
        unsigned char green,
        unsigned char blue,
        unsigned char alpha = 255)
    {
        c.b = blue;
        c.g = green;
        c.r = red;
        c.a = alpha;
    }
    inline unsigned char get_alpha() const { return c.a; }
};

template <class T>
class instance_bank {
public:
    void delete_instance(T* instance);
};

class entity {
    char entity_data[0x200];

public:
    void release();
    render_flavor_t render_passes_needed() const;
};

class beam : public entity {
    float thickness;
    float max_length;
    color32 my_color;
    char beam_data_to_material[0xA0];
    material* my_material;
    bool additive;

public:
    void kill_all_effects(bool apply_target_vals = false);
    void purge_effects();
    void release();
    render_flavor_t render_passes_needed() const;
    inline color32 get_beam_color() const { return my_color; }
    void set_beam_color(const color32 &color);
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

extern instance_bank<material> material_bank;

__asm__(".equ release__6entity, 0x0012AAB0");
__asm__(".equ render_passes_needed__C6entity, 0x00133640");
__asm__(".equ purge_effects__4beam, 0x002712B0");
__asm__(".equ kill_all_effects__4beamb, 0x00272608");
__asm__(".equ delete_instance__t13instance_bank1Z8materialP8material, 0x002AD570");
__asm__(".equ material_bank, 0x0046B650");
__asm__(".equ set_beam_color__4beamRC7color32, 0x002717A0");

#endif
