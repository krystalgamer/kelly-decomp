// Matching decompilation blocks selected by generated build shims.


// 0x0011DDD0 __10anim_maker
#include "KS/SRC/anim_maker.h"
anim_maker::anim_maker() {}

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

// 0x0011E0D0 create_anim__10anim_makerP16entity_anim_treeRC7stringxRC17entity_track_treeT3ffUsfisP13entity_widget
#include "KS/SRC/anim_maker.h"
__asm__(".equ construct__16entity_anim_treeRC7stringxRC17entity_track_treeT2ffUsfis,0x001167D8");__asm__(".equ add_anim__13entity_widgetP16entity_anim_tree,0x002B9B50");__asm__(".equ add_anim__21world_dynamics_systemP16entity_anim_tree,0x002A3688");void anim_maker::create_anim(entity_anim_tree*cached,const stringx&name,const entity_track_tree&a,const entity_track_tree&b,float ba,float bb,unsigned short flags,float start,int priority,short loop,entity_widget*owner){if(flags&2)start=a.get_duration()-start;cached->construct(name,a,b,ba,bb,flags,start,priority,loop);if(!owner){g_world_ptr->add_anim(cached);asm volatile("");}else{owner->add_anim(cached);asm volatile("");}}

// 0x0011DF10 create_anim__10anim_makerP16entity_anim_treeRC7stringxRC17entity_track_treeUsfisP13entity_widget
#include "KS/SRC/anim_maker.h"
extern int alwaysrebuildanims;asm(".equ alwaysrebuildanims,0x003E57F4");asm(".equ construct__16entity_anim_treeRC7stringxRC17entity_track_treeUsfis,0x00116388");asm(".equ add_anim__21world_dynamics_systemP16entity_anim_tree,0x002A3688");asm(".equ add_anim__13entity_widgetP16entity_anim_tree,0x002B9B50");void anim_maker::create_anim(entity_anim_tree*cached,const stringx&name,const entity_track_tree&track,unsigned short flags,float start_time,int priority,short loop,entity_widget*owning_widget){if(flags&2)start_time=track.get_duration()-start_time;if(alwaysrebuildanims)cached->construct(name,track,flags,start_time,priority,loop);if(!owning_widget){g_world_ptr->add_anim(cached);int dead;asm("" : "=r"(dead));}else{owning_widget->add_anim(cached);int dead;asm("" : "=r"(dead));}}

// 0x0011DE18 create_anim__10anim_makerRC7stringxRC17entity_track_treeP6entityUsfisP13entity_widget
#include "KS/SRC/anim_maker.h"

__asm__(".equ __nw__16entity_anim_treeUiUiPCci, 0x001137C0");
__asm__(".equ __16entity_anim_treeRC7stringxP6entityRC17entity_track_treeUsfis, 0x00116138");
__asm__(".equ add_anim__13entity_widgetP16entity_anim_tree, 0x002B9B50");
__asm__(".equ add_anim__21world_dynamics_systemP16entity_anim_tree, 0x002A3688");

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

// Source implementation boundary.
// 0x00120EF8 __tf10anim_maker
extern "C" void __rtti_user(void *info, const char *name);
asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int anim_maker_typeinfo[];
extern const char anim_maker_type_name[];
asm(".equ anim_maker_typeinfo, 0x00511FB8");
asm(".equ anim_maker_type_name, 0x004CA4E8");
extern "C" void *AnimMakerRtti() __asm__("__tf10anim_maker");
void *AnimMakerRtti(){if(!anim_maker_typeinfo[0])__rtti_user(anim_maker_typeinfo,anim_maker_type_name);return anim_maker_typeinfo;}
