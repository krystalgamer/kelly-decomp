// bone definitions extracted by generated one-function shims.


// 0x00126D90 destroy_link_ifc__4bone
#include "KS/SRC/bone.h"

void bone::destroy_link_ifc()
{
    delete my_link_interface;
    my_link_interface = 0;
}

// 0x00144718 __tf4bone
#include "KS/SRC/bone.h"

extern "C" void **bone_base_rtti() __asm__("__tf9signaller");
extern "C" void *bone_base_type[] __asm__("__ti9signaller");
extern "C" void *bone_type[] __asm__("__ti4bone");
extern "C" const char bone_name[];

__asm__(".equ __tf9signaller, 0x0035FBA8");
__asm__(".equ __ti9signaller, 0x00512028");
__asm__(".equ __ti4bone, 0x005A27B8");
__asm__(".equ bone_name, 0x004CEA48");

extern "C" void **bone_rtti() __asm__("__tf4bone");
void **bone_rtti()
{
    if (!bone_type[0]) {
        bone_base_rtti();
        __rtti_si(bone_type, bone_name, bone_base_type);
    }
    return bone_type;
}

// 0x001447E8 get_bone_idx__4bone
#include "KS/SRC/bone.h"

int bone::get_bone_idx() {
    return -1;
}

// 0x00144770 _$_4bone
extern void*bone_vtable;__asm__(".equ bone_vtable,0x004CE650");extern "C" void destroy_link(void*) __asm__("destroy_link_ifc__4bone");extern "C" void object_delete(void*) __asm__("__builtin_delete");extern "C" void signaller_dtor(void*,int) __asm__("_$_9signaller");__asm__(".equ destroy_link_ifc__4bone,0x00126D90");__asm__(".equ __builtin_delete,0x002AC6B0");__asm__(".equ _$_9signaller,0x0034CC90");struct bone_layout{char p0[8];void*vtable;char p1[72];void*handed_abs;char p2[12];int part_of_skeleton;void*link;};extern "C" void destroy(bone_layout*self,int deleting) __asm__("_$_4bone");void destroy(bone_layout*self,int deleting){self->vtable=&bone_vtable;if(self->link)destroy_link(self);if(self->handed_abs&&!self->part_of_skeleton)object_delete(self->handed_abs);self->handed_abs=0;signaller_dtor(self,deleting);int dead;__asm__("" : "=r"(dead));}

// 0x00126D28 create_link_ifc__4bone
#include "KS/SRC/archalloc.h"
#include "KS/SRC/bone.h"

void *operator new(unsigned int, unsigned int, const char *, int);
extern const char create_link_signature[];
__asm__(".equ __nw__FUiUiPCci,0x002AC578");
__asm__(".equ create_link_signature,0x004CB1C8");
__asm__(".equ _vt$14link_interface,0x004CE6A0");
link_interface *bone::create_link_ifc()
{
    my_link_interface = new (0, create_link_signature, 0) link_interface(this);
    return my_link_interface;
}
