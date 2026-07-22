#ifndef KELLY_DECOMP_BEAM_SHARED_H
#define KELLY_DECOMP_BEAM_SHARED_H

class material;
typedef unsigned int render_flavor_t;

enum {
    RENDER_TRANSLUCENT_PORTION = 2,
};

class color32 {
public:
    union {
        unsigned int value;
        struct channels {
            unsigned char r;
            unsigned char g;
            unsigned char b;
            unsigned char a;
        } c;
    };
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
    void purge_effects();
    void release();
    render_flavor_t render_passes_needed() const;
};

extern instance_bank<material> material_bank;

__asm__(".equ release__6entity, 0x0012AAB0");
__asm__(".equ render_passes_needed__C6entity, 0x00133640");
__asm__(".equ purge_effects__4beam, 0x002712B0");
__asm__(".equ delete_instance__t13instance_bank1Z8materialP8material, 0x002AD570");
__asm__(".equ material_bank, 0x0046B650");

#endif
