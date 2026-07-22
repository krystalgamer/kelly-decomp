#ifndef KELLY_DECOMP_BEAM_SHARED_H
#define KELLY_DECOMP_BEAM_SHARED_H

class material;

template <class T>
class instance_bank {
public:
    void delete_instance(T* instance);
};

class entity {
    char entity_data[0x200];

public:
    void release();
};

class beam : public entity {
    char beam_data_to_material[0xAC];
    material* my_material;

public:
    void purge_effects();
    void release();
    int render_passes_needed() const;
};

extern instance_bank<material> material_bank;

__asm__(".equ release__6entity, 0x0012AAB0");
__asm__(".equ purge_effects__4beam, 0x002712B0");
__asm__(".equ delete_instance__t13instance_bank1Z8materialP8material, 0x002AD570");
__asm__(".equ material_bank, 0x0046B650");

#endif
