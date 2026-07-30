// skeleton_interface definitions extracted by generated one-function shims.

// 0x00146020 __tf18skeleton_interface
#include "KS/SRC/skeleton_interface.h"

extern "C" void **skeleton_base_rtti() __asm__("__tf16entity_interface");
extern "C" void *skeleton_base_type[] __asm__("__ti16entity_interface");
extern "C" void *skeleton_type[] __asm__("__ti18skeleton_interface");
extern "C" const char skeleton_name[];

__asm__(".equ __tf16entity_interface, 0x00113200");
__asm__(".equ __ti16entity_interface, 0x005A26A8");
__asm__(".equ __ti18skeleton_interface, 0x005A28A8");
__asm__(".equ skeleton_name, 0x004CEC10");

extern "C" void **skeleton_rtti() __asm__("__tf18skeleton_interface");
void **skeleton_rtti()
{
    if (!skeleton_type[0]) {
        skeleton_base_rtti();
        __rtti_si(skeleton_type, skeleton_name, skeleton_base_type);
    }
    return skeleton_type;
}

// 0x00146070 _$_18skeleton_interface
struct skeleton_interface{void*vptr;void*my_entity;void*abs_po;void*h_abs_po;int po_count;};extern char skel_vtable[],base_vtable[];extern "C" void vec_delete(void*)__asm__("__builtin_vec_delete");extern "C" void builtin_delete(void*)__asm__("__builtin_delete");__asm__(".equ skel_vtable,0x004CDCC8");__asm__(".equ base_vtable,0x004C85B8");__asm__(".equ __builtin_vec_delete,0x002AC6D0");__asm__(".equ __builtin_delete,0x002AC6B0");extern "C" void dtor(skeleton_interface*self,int deleting)__asm__("_$_18skeleton_interface");void dtor(skeleton_interface*self,int deleting){self->vptr=skel_vtable;if(self->abs_po){vec_delete(self->abs_po);self->abs_po=0;if(self->h_abs_po)vec_delete(self->h_abs_po);self->h_abs_po=0;self->po_count=0;}self->vptr=base_vtable;self->my_entity=0;if(deleting&1){builtin_delete(self);KELLY_DECOMP_COMPILER_BARRIER();}}

// 0x00126CE0 connect_bone_abs_po__18skeleton_interfaceRCiP4bone
#include "KS/SRC/skeleton_interface.h"

struct po {
    char data[0x40];
};

class bone {
    char padding0[0x50];
    po *my_abs_po;
    po *my_handed_abs_po;
    char padding1[0x0C];
    bool is_part_of_skeleton;

public:
    void set_part_of_skeleton(bool value) {
        is_part_of_skeleton = value;
    }

    friend class skeleton_interface;
};

void skeleton_interface::connect_bone_abs_po(
    const int &bone_idx,
    bone *new_bone
) {
    new_bone->my_abs_po = &abs_po[bone_idx];
    new_bone->my_handed_abs_po = &handed_abs_po[bone_idx];
    new_bone->set_part_of_skeleton(true);
}
