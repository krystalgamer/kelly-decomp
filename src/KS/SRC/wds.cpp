// WDS method definitions extracted by generated one-function shims.


// 0x0029B770 add_box_trigger__21world_dynamics_systemG9entity_idRC2poRC10convex_boxPCt4list2ZPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeZt23__malloc_alloc_template1i0Ui
class entity;

// Released signature: entity* world_dynamics_system::add_box_trigger(entity_id, const po&, const convex_box&, const region_node_list*, unsigned int).
entity* add_box_trigger_stub() asm("add_box_trigger__21world_dynamics_systemG9entity_idRC2poRC10convex_boxPCt4list2ZPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeZt23__malloc_alloc_template1i0Ui");

entity* add_box_trigger_stub() {
    return 0;
}

// 0x0029FD58 set_current_light_context__21world_dynamics_systemP15nglLightContext
#include "KS/SRC/wds.h"

nglLightContext* world_dynamics_system::set_current_light_context(nglLightContext* value) {
    nglLightContext* old = current_light_context;
    current_light_context = value;
    return old;
}

// 0x002A3770 get_ett_manager__21world_dynamics_system
#include "KS/SRC/wds.h"

ett_manager* world_dynamics_system::get_ett_manager() {
    return ett_mgr;
}

// 0x002A8DA8 apply_radius_damage__21world_dynamics_systemG8vector3dfii
extern const char radius_damage_error[];
void error(const char *format, ...);
__asm__(".equ radius_damage_error, 0x004F8EB0");
__asm__(".equ error__FPCce, 0x001DFBD8");
extern "C" void RadiusDamageStub() __asm__("apply_radius_damage__21world_dynamics_systemG8vector3dfii");
void RadiusDamageStub() { error(radius_damage_error); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x002A3408 add_marker__21world_dynamics_systemP6marker
#include "KS/SRC/wds.h"
marker *world_dynamics_system::add_marker(marker *value) { marker *result = (marker *)g_entity_maker->create_entity((entity *)value); KELLY_DECOMP_COMPILER_BARRIER(); return result; }

// 0x002A3430 add_beam__21world_dynamics_systemP4beam
#include "KS/SRC/wds.h"
beam *world_dynamics_system::add_beam(beam *value) { beam *result = (beam *)g_entity_maker->create_entity((entity *)value); KELLY_DECOMP_COMPILER_BARRIER(); return result; }

// 0x002A3458 add_camera__21world_dynamics_systemP6camera
#include "KS/SRC/wds.h"
camera *world_dynamics_system::add_camera(camera *value) { camera *result = (camera *)g_entity_maker->create_entity((entity *)value); KELLY_DECOMP_COMPILER_BARRIER(); return result; }

// 0x002A3488 add_particle_generator__21world_dynamics_systemP18particle_generator
#include "KS/SRC/wds.h"
particle_generator *world_dynamics_system::add_particle_generator(particle_generator *value) { particle_generator *result = (particle_generator *)g_entity_maker->create_entity((entity *)value); KELLY_DECOMP_COMPILER_BARRIER(); return result; }

// 0x002A34B0 add_lensflare__21world_dynamics_systemP9lensflare
#include "KS/SRC/wds.h"
lensflare *world_dynamics_system::add_lensflare(lensflare *value) { lensflare *result = (lensflare *)g_entity_maker->create_entity((entity *)value); KELLY_DECOMP_COMPILER_BARRIER(); return result; }

// 0x002A7418 add_sky__21world_dynamics_systemP3sky
#include "KS/SRC/wds.h"
sky *world_dynamics_system::add_sky(sky *value) { sky *result = (sky *)g_entity_maker->create_entity((entity *)value); KELLY_DECOMP_COMPILER_BARRIER(); return result; }

// 0x002A39F0 set_ks_controller__21world_dynamics_systemiP22kellyslater_controller
class kellyslater_controller { public: void set_player_num(int player); };
__asm__(".equ set_player_num__22kellyslater_controlleri, 0x0020F570");
class world_dynamics_system { char padding[0xf8]; kellyslater_controller *ks_controller[2]; public: void set_ks_controller(int player, kellyslater_controller *controller); };
void world_dynamics_system::set_ks_controller(int player, kellyslater_controller *controller) { world_dynamics_system *base = this; int offset = player * 4; KELLY_DECOMP_COMPILER_BARRIER(); base = (world_dynamics_system *)((char *)base + offset); base->ks_controller[0] = controller; controller->set_player_num(player); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x00294CF0 wds_releasefile__21world_dynamics_systemPPUc
__asm__(".equ KSMemFree__FPv, 0x001E3280"); __asm__(".equ _20os_developer_options$instance, 0x0046B180");
void KSMemFree(void*); class os_developer_options { public: int pad; int flags; static os_developer_options *instance; static os_developer_options *inst(){return instance;} bool is_flagged(int) const { return flags!=0; } enum { FLAG_STASH_ONLY=1 }; };
class world_dynamics_system { public: static bool wds_releasefile(unsigned char **); };
bool world_dynamics_system::wds_releasefile(unsigned char **buf) { if(!os_developer_options::inst()->is_flagged(os_developer_options::FLAG_STASH_ONLY)) KSMemFree(*buf); *buf=0; return true; }

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

// 0x00295138 wds_exists__21world_dynamics_systemRC7stringxT1i
struct stringx { unsigned data; }; extern "C" void string_ctor(stringx*) __asm__("__7stringx"); extern "C" void string_dtor(stringx*,int) __asm__("_$_7stringx"); extern "C" bool finder(const stringx&,const stringx&,stringx*) __asm__("file_finder_exists__FRC7stringxT0P7stringx");
__asm__(".equ __7stringx,0x0034D3E0");__asm__(".equ _$_7stringx,0x0034D6E0");__asm__(".equ file_finder_exists__FRC7stringxT0P7stringx,0x00276EF0");
extern "C" bool exists(const stringx&name,const stringx&ext,int flags) __asm__("wds_exists__21world_dynamics_systemRC7stringxT1i");
bool exists(const stringx&name,const stringx&ext,int flags)
{stringx fname;string_ctor(&fname);if(!finder(name,ext,&fname)){string_dtor(&fname,2);return false;}else{string_dtor(&fname,2);return true;}}

// 0x002A9100 add_region_ambient_sound__21world_dynamics_systemR7stringxT1f
struct stringx{char data[8];};struct rbnode{};struct iterator{rbnode*value;char pad[12];};struct terrain{char pad[12];rbnode*header;};struct world{char pad[236];terrain*ter;};struct graph_pair{char pad[4];void*region_data;};extern "C" iterator*find_region(iterator*,void*,stringx*)__asm__("find__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeZt10_Select1st1Zt4pair2ZC7stringxZP6regionZP6portalZt4less1Z7stringx4nodeZt4less1Z7stringxZt12my_allocator1ZQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeRC7stringx");extern "C" void set_sound(void*,stringx&)__asm__("set_region_ambient_sound__6regionR7stringx");__asm__(".equ find__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeZt10_Select1st1Zt4pair2ZC7stringxZP6regionZP6portalZt4less1Z7stringx4nodeZt4less1Z7stringxZt12my_allocator1ZQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeRC7stringx,0x00110A88");__asm__(".equ set_region_ambient_sound__6regionR7stringx,0x002E81A0");extern "C" void add(world*self,stringx&id,stringx&id2,float volume)__asm__("add_region_ambient_sound__21world_dynamics_systemR7stringxT1f");void add(world*self,stringx&id,stringx&id2,float volume){terrain*ter=self->ter;iterator found;find_region(&found,(char*)ter+12,&id);register rbnode*endp asm("$2")=ter->header;register rbnode*foundp asm("$3")=found.value;iterator finish;finish.value=endp;graph_pair*fr=(graph_pair*)((char*)foundp+24);if(foundp==endp)fr=0;if(fr){set_sound(fr->region_data,id2);*(float*)((char*)fr->region_data+300)=volume;}}

// 0x002A8F00 play_scene_anim__21world_dynamics_systemRC7stringxbf
struct stringx{};struct Node{char p[24];struct scene_anim*value;};struct Iterator{Node*node;char pad[12];};struct scene_anim{void play(void*,unsigned,bool,float)__asm__("play__10scene_animRt6vector2Z16scene_anims_infoZt12my_allocator1Z16scene_anims_infoUibf");};extern "C" void find(Iterator*,void*,const stringx&)__asm__("find__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP10scene_animZt10_Select1st1Zt4pair2ZC7stringxZP10scene_animZt4less1Z7stringxZt12my_allocator1ZP10scene_animRC7stringx");extern "C" void error(const char*,...)__asm__("error__FPCce");extern const char err[];class world_dynamics_system{public:char p[876];unsigned last_handle;void*map_head;char p2[8];char scene_anims[1];unsigned play_scene_anim(const stringx&,bool,float)__asm__("play_scene_anim__21world_dynamics_systemRC7stringxbf");};__asm__(".equ find__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP10scene_animZt10_Select1st1Zt4pair2ZC7stringxZP10scene_animZt4less1Z7stringxZt12my_allocator1ZP10scene_animRC7stringx,0x002B6900");__asm__(".equ play__10scene_animRt6vector2Z16scene_anims_infoZt12my_allocator1Z16scene_anims_infoUibf,0x0011D038");__asm__(".equ error__FPCce,0x001DFBD8");__asm__(".equ err,0x004F8F48");unsigned world_dynamics_system::play_scene_anim(const stringx&filename,bool reverse,float start){Iterator it;Iterator end;find(&it,(char*)this+880,filename);end.node=(Node*)map_head;if(it.node!=end.node){last_handle++;it.node->value->play((char*)this+892,last_handle,reverse,start);}else error(err);return last_handle;}

// 0x002A4430 destroy_entity__21world_dynamics_systemP6entity
struct EntityVtable{char p[8];short dtor_adj;short z;void(*dtor)(void*,int);};struct entity{char p[8];EntityVtable*vtable;char p2[112];int flavor;};extern const char error_text[];extern const char*item_flavor_name;extern "C" void error(const char*,...) __asm__("error__FPCce");asm(".equ error_text,0x004F8AB8");asm(".equ item_flavor_name,0x003E5AA4");asm(".equ error__FPCce,0x001DFBD8");class world_dynamics_system{public:void remove_light_source(entity*) __asm__("remove_light_source__21world_dynamics_systemP12light_source");bool remove_entity(entity*);void destroy_entity(entity*) __asm__("destroy_entity__21world_dynamics_systemP6entity");};asm(".equ remove_light_source__21world_dynamics_systemP12light_source,0x002A3360");asm(".equ remove_entity__21world_dynamics_systemP6entity,0x002A3D80");void world_dynamics_system::destroy_entity(entity*e){switch(e->flavor){case 7:error(error_text,item_flavor_name);case 4:remove_light_source(e);{int dead;asm("" : "=r"(dead));}break;default:if(remove_entity(e)){if(!e)return;EntityVtable*v=e->vtable;v->dtor((char*)e+v->dtor_adj,3);}break;}}

// 0x0029FE00 scene_analyzer_frame_advance__21world_dynamics_systemf
struct geometry_manager{char padding[112];int enabled;};extern geometry_manager*g_geom;asm(".equ g_geom,0x00432868");struct generic_vtable{char padding[128];};struct Obj{char padding[8];generic_vtable*vtable;};class world_dynamics_system{char padding[348];Obj*move;Obj*orient;Obj*controller;Obj*cam;public:void scene_analyzer_frame_advance(float);};inline void call_slot(Obj*o,int off,float t){char*v=(char*)o->vtable;short adj=*(short*)(v+off);void(*fn)(void*,float)=*(void(**)(void*,float))(v+off+4);fn((char*)o+adj,t);}void world_dynamics_system::scene_analyzer_frame_advance(float t){if(g_geom->enabled){call_slot(controller,16,t);call_slot(cam,120,t);call_slot(move,32,t);call_slot(orient,32,t);}}

// 0x0029C360 visibility_check__FRC8vector3dT0P6entity
struct vector3d{float x,y,z;};struct region_node{};struct entity;struct ent_vtable{char pad[1056];short adjustment;short zero;region_node*(*get_region)(void*);};struct entity{char pad[8];ent_vtable*vtable;};struct game{char pad[188];int active_player;};struct world{char pad[240];entity*heroes[4];};extern game*g_game;extern world*g_world;asm(".equ g_game,0x0046AC64");asm(".equ g_world,0x00431A8C");extern "C" bool find_intersection(const vector3d&,const vector3d&,region_node*,unsigned,vector3d*,vector3d*,region_node**,entity**)__asm__("find_intersection__FRC8vector3dT0PQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeUiP8vector3dT4PPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodePP6entity");asm(".equ find_intersection__FRC8vector3dT0PQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeUiP8vector3dT4PPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodePP6entity,0x002E1AE0");inline region_node*region(entity*e){ent_vtable*v=e->vtable;return v->get_region((char*)e+v->adjustment);}bool visibility_check(const vector3d&p1,const vector3d&p2,entity*ent);bool visibility_check(const vector3d&p1,const vector3d&p2,entity*ent){vector3d hitp,hitn;entity*hit_entity=0;bool ret=find_intersection(p1,p2,region(g_world->heroes[g_game->active_player]),5,&hitp,&hitn,0,&hit_entity);if(ret&&(ent==0||ent!=hit_entity))return false;else return true;}

// 0x0029BFC8 add_particle_generator__21world_dynamics_systemRC7stringxbT2R9entity_id
#include "KS/SRC/archalloc_shared.h"
#include "KS/SRC/particle_generator_ctor_shared.h"
#include "KS/SRC/wds.h"

extern const char particle_generator_description[];
__asm__(".equ particle_generator_description, 0x004F86F0");

// Retain the shipped old-GCC repeated-bool mangling.
// Preserve the released allocation and constructor scheduling via the EE shim.
particle_generator* world_dynamics_system::add_particle_generator(
    const stringx& filename,
    bool invisible,
    bool nonstatic,
    entity_id &_id )
{
	void *memory = operator new(
        sizeof(particle_generator),
        0,
        particle_generator_description,
        0);
	particle_generator* new_pg =
        new(memory) particle_generator( filename, _id );
	new_pg->set_flag( (entity_flags)EFLAG_MISC_NONSTATIC, true );
	new_pg->set_flag( (entity_flags)EFLAG_MISC_RAW_NONSTATIC, true );

	new_pg->set_visible(!invisible);
	add_particle_generator(new_pg);
	return new_pg;
}

// 0x0029C080 add_light_source__21world_dynamics_systemRC7stringxbT2R9entity_id
class stringx;
class entity_id;

struct light_vtable
{
    char entries_to_set_visible[0x160];
    short set_visible_adjustment;
    short set_visible_padding;
    void (*set_visible)(void *self, bool visible);
};

class light_source
{
    char data_to_vtable[8];
    light_vtable *vtable;
    char data_to_flags[0x6C];
    unsigned int flags;

public:
    inline void set_visible(bool visible)
    {
        light_vtable *table = vtable;
        table->set_visible(
            (char *)this + table->set_visible_adjustment,
            visible
        );
    }

    inline void set_nonstatic()
    {
        flags |= 0x08000000;
    }
};

class world_dynamics_system
{
public:
    light_source *add_light_source(
        const stringx &filename,
        bool invisible,
        bool nonstatic,
        entity_id &id
    ) __asm__(
        "add_light_source__21world_dynamics_systemRC7stringxbT2R9entity_id"
    );
    void add_light_source(light_source *light);
};

void *operator new(
    unsigned int size,
    unsigned int alignment,
    const char *description,
    int line
);

extern const char light_source_description[];
extern "C" light_source *construct_light(
    light_source *self,
    const stringx &filename,
    const entity_id &id,
    unsigned int flavor
) __asm__("__12light_sourceRC7stringxRC9entity_idUi");

__asm__(".equ __nw__FUiUiPCci, 0x002AC578");
__asm__(".equ light_source_description, 0x004F8768");
__asm__(
    ".equ __12light_sourceRC7stringxRC9entity_idUi, "
    "0x002CD378"
);
__asm__(
    ".equ add_light_source__21world_dynamics_systemP12light_source, "
    "0x002A32F0"
);

light_source *world_dynamics_system::add_light_source(
    const stringx &filename,
    bool invisible,
    bool nonstatic,
    entity_id &id
)
{
    light_source *light = (light_source *)operator new(
        528,
        0,
        light_source_description,
        0
    );
    light = construct_light(light, filename, id, 0);
    if (nonstatic)
        light->set_nonstatic();
    light->set_visible(!invisible);
    add_light_source(light);
    return light;
}
