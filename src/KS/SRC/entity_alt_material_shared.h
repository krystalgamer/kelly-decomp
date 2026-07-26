#ifndef KELLY_DECOMP_ENTITY_ALT_MATERIAL_SHARED_H
#define KELLY_DECOMP_ENTITY_ALT_MATERIAL_SHARED_H

#include "KS/SRC/stringx.h"

class material_set;

class alternative_material_world {
public:
    material_set *get_material_set(const stringx &name)
        __asm__(
            "get_material_set__21world_dynamics_systemRC7stringx");
};

class alternative_material_entity {
public:
    void set_alternative_materials(material_set *materials)
        __asm__("set_alternative_materials__6entityP12material_set");
    void set_alternative_materials(const stringx &name)
        __asm__("set_alternative_materials__6entityRC7stringx");
};

extern alternative_material_world *g_world_ptr;
extern const char no_alternative_material[];

__asm__(".equ g_world_ptr, 0x00431A8C");
__asm__(".equ no_alternative_material, 0x004CC728");
__asm__(
    ".equ set_alternative_materials__6entityP12material_set, "
    "0x001311B0");
__asm__(
    ".equ get_material_set__21world_dynamics_systemRC7stringx, "
    "0x002A5200");

#endif
