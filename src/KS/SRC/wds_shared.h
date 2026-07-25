#ifndef KELLY_DECOMP_WDS_SHARED_H
#define KELLY_DECOMP_WDS_SHARED_H

class entity;
class entity_id;
class kellyslater_controller;
class particle_generator;
class stringx;

class world_dynamics_system {
    char data_before_heroes[0xF0];
    entity *hero_ptr[2];
    kellyslater_controller *ks_controller[2];

public:
    inline entity *get_hero_ptr(int index) {
        return hero_ptr[index];
    }
    inline kellyslater_controller *get_ks_controller(int index) {
        return ks_controller[index];
    }
    particle_generator *add_particle_generator(
        const stringx &filename,
        bool invisible,
        bool nonstatic,
        entity_id &id)
        __asm__("add_particle_generator__21world_dynamics_systemRC7stringxbT2R9entity_id");
    particle_generator *add_particle_generator(
        particle_generator *generator);
};

extern world_dynamics_system *g_world_ptr;

__asm__(".equ g_world_ptr, 0x00431A8C");
__asm__(".equ add_particle_generator__21world_dynamics_systemP18particle_generator, 0x002A3488");

#endif
