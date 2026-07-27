// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0011DDD0)
// 0x0011DDD0 __10anim_maker
extern void* anim_maker_vtable;
__asm__(".equ anim_maker_vtable, 0x004CA030");
class anim_maker { void* vptr; public: anim_maker(); };
anim_maker::anim_maker() { vptr = &anim_maker_vtable; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0011DDE8)
// 0x0011DDE8 _$_10anim_maker
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char anim_maker_vtable[];
__asm__(".equ anim_maker_vtable, 0x004CA030");

struct anim_maker_layout {
    const void *vtable;
};

extern "C" void AnimMakerDtor(void *self, int deleting)
    __asm__("_$_10anim_maker");

void AnimMakerDtor(void *self, int deleting) {
    ((anim_maker_layout *)self)->vtable = anim_maker_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0011E0D0)
// 0x0011E0D0 create_anim__10anim_makerP16entity_anim_treeRC7stringxRC17entity_track_treeT3ffUsfisP13entity_widget
struct stringx{};struct entity_track_tree{char p[16];float duration;};struct entity_anim_tree{void construct(const stringx&,const entity_track_tree&,const entity_track_tree&,float,float,unsigned short,float,int,short)__asm__("construct__16entity_anim_treeRC7stringxRC17entity_track_treeT2ffUsfis");};struct entity_widget{void add_anim(entity_anim_tree*)__asm__("add_anim__13entity_widgetP16entity_anim_tree");};struct world{void add_anim(entity_anim_tree*)__asm__("add_anim__21world_dynamics_systemP16entity_anim_tree");};extern world*g_world_ptr;class anim_maker{public:void create_anim(entity_anim_tree*,const stringx&,const entity_track_tree&,const entity_track_tree&,float,float,unsigned short,float,int,short,entity_widget*)__asm__("create_anim__10anim_makerP16entity_anim_treeRC7stringxRC17entity_track_treeT3ffUsfisP13entity_widget");};__asm__(".equ construct__16entity_anim_treeRC7stringxRC17entity_track_treeT2ffUsfis,0x001167D8");__asm__(".equ add_anim__13entity_widgetP16entity_anim_tree,0x002B9B50");__asm__(".equ add_anim__21world_dynamics_systemP16entity_anim_tree,0x002A3688");__asm__(".equ g_world_ptr,0x00431A8C");void anim_maker::create_anim(entity_anim_tree*cached,const stringx&name,const entity_track_tree&a,const entity_track_tree&b,float ba,float bb,unsigned short flags,float start,int priority,short loop,entity_widget*owner){if(flags&2)start=a.duration-start;cached->construct(name,a,b,ba,bb,flags,start,priority,loop);if(!owner){g_world_ptr->add_anim(cached);asm volatile("");}else{owner->add_anim(cached);asm volatile("");}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0011DF10)
// 0x0011DF10 create_anim__10anim_makerP16entity_anim_treeRC7stringxRC17entity_track_treeUsfisP13entity_widget
class stringx;class entity_anim_tree{public:void construct(const stringx&,const class entity_track_tree&,unsigned short,float,int,short);};class entity_track_tree{char p[16];float duration;public:float get_duration()const{return duration;}};class entity_widget{public:void add_anim(entity_anim_tree*);};class world_dynamics_system{public:void add_anim(entity_anim_tree*);};extern world_dynamics_system*g_world_ptr;extern int alwaysrebuildanims;asm(".equ g_world_ptr,0x00431A8C");asm(".equ alwaysrebuildanims,0x003E57F4");asm(".equ construct__16entity_anim_treeRC7stringxRC17entity_track_treeUsfis,0x00116388");asm(".equ add_anim__21world_dynamics_systemP16entity_anim_tree,0x002A3688");asm(".equ add_anim__13entity_widgetP16entity_anim_tree,0x002B9B50");class anim_maker{public:void create_anim(entity_anim_tree*,const stringx&,const entity_track_tree&,unsigned short,float,int,short,entity_widget*) __asm__("create_anim__10anim_makerP16entity_anim_treeRC7stringxRC17entity_track_treeUsfisP13entity_widget");};void anim_maker::create_anim(entity_anim_tree*cached,const stringx&name,const entity_track_tree&track,unsigned short flags,float start_time,int priority,short loop,entity_widget*owning_widget){if(flags&2)start_time=track.get_duration()-start_time;if(alwaysrebuildanims)cached->construct(name,track,flags,start_time,priority,loop);if(!owning_widget){g_world_ptr->add_anim(cached);int dead;asm("" : "=r"(dead));}else{owning_widget->add_anim(cached);int dead;asm("" : "=r"(dead));}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0011DE18)
// 0x0011DE18 create_anim__10anim_makerRC7stringxRC17entity_track_treeP6entityUsfisP13entity_widget
#include "KS/SRC/anim_maker_shared.h"

entity_anim_tree* anim_maker::create_anim(const stringx& name, const entity_track_tree& track, entity* ent, unsigned short flags, float start_time, int priority, short loop, entity_widget* owning_widget) {
  entity_anim_tree* new_anim = 0;
  if (flags & 2)
    start_time = track.get_duration() - start_time;
  new_anim = new(0, anim_maker_source_file, 0) entity_anim_tree(name, ent, track, flags, start_time, priority, loop);
  if (!owning_widget)
    g_world_ptr->add_anim(new_anim);
  else
    owning_widget->add_anim(new_anim);
  return new_anim;
}
#endif
