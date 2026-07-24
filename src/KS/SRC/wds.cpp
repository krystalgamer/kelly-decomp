// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0029B770)
// 0x0029B770 add_box_trigger__21world_dynamics_systemG9entity_idRC2poRC10convex_boxPCt4list2ZPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeZt23__malloc_alloc_template1i0Ui
class entity;

// Released signature: entity* world_dynamics_system::add_box_trigger(entity_id, const po&, const convex_box&, const region_node_list*, unsigned int).
entity* add_box_trigger_stub() asm("add_box_trigger__21world_dynamics_systemG9entity_idRC2poRC10convex_boxPCt4list2ZPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeZt23__malloc_alloc_template1i0Ui");

entity* add_box_trigger_stub() {
    return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0029FD58)
// 0x0029FD58 set_current_light_context__21world_dynamics_systemP15nglLightContext
class nglLightContext;

class world_dynamics_system {
    char padding[0x360];
    nglLightContext* current_light_context;
public:
    nglLightContext* set_current_light_context(nglLightContext* value);
};

nglLightContext* world_dynamics_system::set_current_light_context(nglLightContext* value) {
    nglLightContext* old = current_light_context;
    current_light_context = value;
    return old;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002A3770)
// 0x002A3770 get_ett_manager__21world_dynamics_system
class ett_manager;

class world_dynamics_system {
    char padding[0x60];
    ett_manager* ett_mgr;
public:
    ett_manager* get_ett_manager();
};

ett_manager* world_dynamics_system::get_ett_manager() {
    return ett_mgr;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002A8DA8)
// 0x002A8DA8 apply_radius_damage__21world_dynamics_systemG8vector3dfii
extern const char radius_damage_error[];
void error(const char *format, ...);
__asm__(".equ radius_damage_error, 0x004F8EB0");
__asm__(".equ error__FPCce, 0x001DFBD8");
extern "C" void RadiusDamageStub() __asm__("apply_radius_damage__21world_dynamics_systemG8vector3dfii");
void RadiusDamageStub() { error(radius_damage_error); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002A3408)
// 0x002A3408 add_marker__21world_dynamics_systemP6marker
class entity {};
class marker : public entity {};
class entity_maker { public: entity *create_entity(entity *value); };
extern entity_maker *g_entity_maker;
__asm__(".equ g_entity_maker, 0x004318C8");
__asm__(".equ create_entity__12entity_makerP6entity, 0x0030AB70");
class world_dynamics_system { public: marker *add_marker(marker *value); };
marker *world_dynamics_system::add_marker(marker *value) { marker *result = (marker *)g_entity_maker->create_entity(value); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002A3430)
// 0x002A3430 add_beam__21world_dynamics_systemP4beam
class entity {};
class beam : public entity {};
class entity_maker { public: entity *create_entity(entity *value); };
extern entity_maker *g_entity_maker;
__asm__(".equ g_entity_maker, 0x004318C8");
__asm__(".equ create_entity__12entity_makerP6entity, 0x0030AB70");
class world_dynamics_system { public: beam *add_beam(beam *value); };
beam *world_dynamics_system::add_beam(beam *value) { beam *result = (beam *)g_entity_maker->create_entity(value); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002A3458)
// 0x002A3458 add_camera__21world_dynamics_systemP6camera
class entity {};
class camera : public entity {};
class entity_maker { public: entity *create_entity(entity *value); };
extern entity_maker *g_entity_maker;
__asm__(".equ g_entity_maker, 0x004318C8");
__asm__(".equ create_entity__12entity_makerP6entity, 0x0030AB70");
class world_dynamics_system { public: camera *add_camera(camera *value); };
camera *world_dynamics_system::add_camera(camera *value) { camera *result = (camera *)g_entity_maker->create_entity(value); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002A3488)
// 0x002A3488 add_particle_generator__21world_dynamics_systemP18particle_generator
class entity {};
class particle_generator : public entity {};
class entity_maker { public: entity *create_entity(entity *value); };
extern entity_maker *g_entity_maker;
__asm__(".equ g_entity_maker, 0x004318C8");
__asm__(".equ create_entity__12entity_makerP6entity, 0x0030AB70");
class world_dynamics_system { public: particle_generator *add_particle_generator(particle_generator *value); };
particle_generator *world_dynamics_system::add_particle_generator(particle_generator *value) { particle_generator *result = (particle_generator *)g_entity_maker->create_entity(value); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002A34B0)
// 0x002A34B0 add_lensflare__21world_dynamics_systemP9lensflare
class entity {};
class lensflare : public entity {};
class entity_maker { public: entity *create_entity(entity *value); };
extern entity_maker *g_entity_maker;
__asm__(".equ g_entity_maker, 0x004318C8");
__asm__(".equ create_entity__12entity_makerP6entity, 0x0030AB70");
class world_dynamics_system { public: lensflare *add_lensflare(lensflare *value); };
lensflare *world_dynamics_system::add_lensflare(lensflare *value) { lensflare *result = (lensflare *)g_entity_maker->create_entity(value); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002A7418)
// 0x002A7418 add_sky__21world_dynamics_systemP3sky
class entity {};
class sky : public entity {};
class entity_maker { public: entity *create_entity(entity *value); };
extern entity_maker *g_entity_maker;
__asm__(".equ g_entity_maker, 0x004318C8");
__asm__(".equ create_entity__12entity_makerP6entity, 0x0030AB70");
class world_dynamics_system { public: sky *add_sky(sky *value); };
sky *world_dynamics_system::add_sky(sky *value) { sky *result = (sky *)g_entity_maker->create_entity(value); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002A39F0)
// 0x002A39F0 set_ks_controller__21world_dynamics_systemiP22kellyslater_controller
class kellyslater_controller { public: void set_player_num(int player); };
__asm__(".equ set_player_num__22kellyslater_controlleri, 0x0020F570");
class world_dynamics_system { char padding[0xf8]; kellyslater_controller *ks_controller[2]; public: void set_ks_controller(int player, kellyslater_controller *controller); };
void world_dynamics_system::set_ks_controller(int player, kellyslater_controller *controller) { world_dynamics_system *base = this; int offset = player * 4; KELLY_DECOMP_COMPILER_BARRIER(); base = (world_dynamics_system *)((char *)base + offset); base->ks_controller[0] = controller; controller->set_player_num(player); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00294CF0)
// 0x00294CF0 wds_releasefile__21world_dynamics_systemPPUc
__asm__(".equ KSMemFree__FPv, 0x001E3280"); __asm__(".equ _20os_developer_options$instance, 0x0046B180");
void KSMemFree(void*); class os_developer_options { public: int pad; int flags; static os_developer_options *instance; static os_developer_options *inst(){return instance;} bool is_flagged(int) const { return flags!=0; } enum { FLAG_STASH_ONLY=1 }; };
class world_dynamics_system { public: static bool wds_releasefile(unsigned char **); };
bool world_dynamics_system::wds_releasefile(unsigned char **buf) { if(!os_developer_options::inst()->is_flagged(os_developer_options::FLAG_STASH_ONLY)) KSMemFree(*buf); *buf=0; return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0029B540)
// 0x0029B540 unload_scene__21world_dynamics_system
struct controller_vtable {
    char padding[8]; short adjustment; short reserved;
    void (*destroy)(void *,int);
};
struct controller_layout { char padding[8]; controller_vtable *vtable; };
class world_dynamics_system {
    char padding[0xf8];
    controller_layout *ks_controller[2];
public:
    void unload_scene();
};
void world_dynamics_system::unload_scene() {
    for (int i=0;i<2;i++) {
        if (ks_controller[i]) {
            controller_vtable *table=ks_controller[i]->vtable;
            table->destroy(
                (char *)ks_controller[i]+table->adjustment,3
            );
            ks_controller[i]=0;
        }
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002A8F90)
// 0x002A8F90 get_scene_anim_time__21world_dynamics_systemUi
struct animation_tree { char padding[72]; float time; };
struct entity;
extern "C" animation_tree *get_anim_tree(entity *, int) __asm__("get_anim_tree__C6entityi");
__asm__(".equ get_anim_tree__C6entityi,0x001348D8");
struct scene_anim_entry { entity *ent; char padding[12]; unsigned int handle; char padding2[12]; };
struct scene_anim_list { scene_anim_entry *start; scene_anim_entry *finish; };
class world_dynamics_system { char padding[892]; scene_anim_list scene_anims; public: float get_scene_anim_time(unsigned int handle); };
float world_dynamics_system::get_scene_anim_time(unsigned int handle)
{
    register scene_anim_list *list __asm__("$6") = &scene_anims;
    __asm__ __volatile__("" : "+r"(list));
    register scene_anim_entry *i __asm__("$3") = scene_anims.start;
    register scene_anim_entry *end __asm__("$2") = list->finish;
    __asm__ __volatile__("" : "+r"(i), "+r"(end), "+r"(list));
    for (; i != end; ++i) {
        if (i->handle == handle && i->ent != 0) {
            animation_tree *tree = get_anim_tree(i->ent, 9);
            return tree->time;
        }
        end = list->finish;
    }
    return -1.0f;
}
#endif
