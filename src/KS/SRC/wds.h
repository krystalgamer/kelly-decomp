#ifndef WDS_H
#define WDS_H

#include "KS/SRC/algebra.h"
#include "KS/SRC/entity_maker.h"
#include "KS/SRC/stringx.h"
#include "g++-2/stl_vector.h"

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

typedef unsigned int scene_anim_handle_t;

struct scene_anims_info {
    entity *ent;
    vector3d entity_up_vec;
    scene_anim_handle_t handle;
    stringx name;
    entity_anim_tree *anim_tree;
};

typedef vector<scene_anims_info> scene_anim_list_t;

class world_dynamics_system {
    char data_before_ett_manager[0x60];
    ett_manager *ett_mgr;
    char data_before_terrain[0x88];
    terrain *the_terrain;
    entity *hero_ptr[2];
    kellyslater_controller *ks_controller[2];
    char data_before_time_inc[0x28];
    float time_inc;
    char data_after_time_inc_to_current_light_context[0x234];
    nglLightContext *current_light_context;
    char data_before_scene_anims[0x18];
    scene_anim_list_t scene_anims;

public:
    struct ent_time_limit {
        entity *ent;
        float time;
    };

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
    inline float get_time_inc() const {
        return time_inc;
    }
    void set_ks_controller(
        int player,
        kellyslater_controller *controller);
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
    void kill_scene_anim(unsigned int animation);
    float get_scene_anim_time(scene_anim_handle_t animation);
    void load_scene_anim(const stringx &name);
    void unload_scene();
    void destroy_entity(entity *value);
};

extern world_dynamics_system *g_world_ptr;
extern entity_maker *g_entity_maker;

__asm__(".equ g_world_ptr, 0x00431A8C");
__asm__(".equ g_entity_maker, 0x004318C8");
__asm__(".equ create_entity__12entity_makerP6entity, 0x0030AB70");

#endif
