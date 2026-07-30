#ifndef KELLY_DECOMP_WDS_SHARED_H
#define KELLY_DECOMP_WDS_SHARED_H

class entity;
class entity_id;
class ett_manager;
class marker;
class beam;
class camera;
class kellyslater_controller;
class lensflare;
class nglLightContext;
class particle_generator;
class sky;
class stringx;
class terrain;

class world_dynamics_system {
    char data_before_ett_manager[0x60];
    ett_manager *ett_mgr;
    char data_before_terrain[0x88];
    terrain *the_terrain;
    entity *hero_ptr[2];
    kellyslater_controller *ks_controller[2];
    char data_before_current_light_context[0x260];
    nglLightContext *current_light_context;

public:
    ett_manager *get_ett_manager();
    nglLightContext *set_current_light_context(nglLightContext *context);
    inline terrain &get_the_terrain() {
        return *the_terrain;
    }
    inline entity *get_hero_ptr(int index) {
        return hero_ptr[index];
    }
    inline kellyslater_controller *get_ks_controller(int index) {
        return ks_controller[index];
    }
    marker *add_marker(marker *value);
    beam *add_beam(beam *value);
    camera *add_camera(camera *value);
    lensflare *add_lensflare(lensflare *value);
    sky *add_sky(sky *value);
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
#if !defined(KELLY_DECOMP_FUNCTION_002A3488)
__asm__(".equ add_particle_generator__21world_dynamics_systemP18particle_generator, 0x002A3488");
#endif

#endif
