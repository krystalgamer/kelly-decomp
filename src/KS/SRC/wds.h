#ifndef WDS_H
#define WDS_H

class entity;
class entity_anim_tree;
class entity_maker;
class entity_id;
class ett_manager;
class marker;
class material_set;
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
    static bool wds_readfile(
        const char *name,
        unsigned char **buffer,
        unsigned int *length,
        int alignment,
        int extra_bytes = 1);
    static bool wds_releasefile(unsigned char **buffer);
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
    void add_marker(marker *value);
    material_set *get_material_set(const stringx &name);
    void add_beam(beam *value);
    void add_camera(camera *value);
    void add_lensflare(lensflare *value);
    void add_sky(sky *value);
    particle_generator *add_particle_generator(
        const stringx &filename,
        bool invisible,
        bool nonstatic,
        entity_id &id)
        __asm__("add_particle_generator__21world_dynamics_systemRC7stringxbT2R9entity_id");
    void add_particle_generator(particle_generator *generator);
    void render_kelly_slater_stuff(int hero_index);
    void process_kelly_slater_stuff();
    void add_anim(entity_anim_tree *animation);
    void kill_anim(entity_anim_tree *animation);
};

class entity_maker {
public:
    entity *create_entity(entity *value);
};

extern world_dynamics_system *g_world_ptr;
extern entity_maker *g_entity_maker;

__asm__(".equ g_world_ptr, 0x00431A8C");
__asm__(".equ g_entity_maker, 0x004318C8");
__asm__(".equ create_entity__12entity_makerP6entity, 0x0030AB70");

#endif
