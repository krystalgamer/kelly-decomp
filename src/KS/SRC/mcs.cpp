// Matching decompilation blocks selected by generated build shims.


// 0x002E3138 __21motion_control_system
#include "KS/SRC/mcs.h"
__asm__(".equ _vt$21motion_control_system, 0x004F1618");
motion_control_system::motion_control_system() : motion_object() {}

// 0x002E3158 _$_21motion_control_system
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004F3318");

struct target_layout {
    char padding[0x8];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_21motion_control_system");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x002E3188 __17theta_and_psi_mcsP6entityff
#include "KS/SRC/mcs.h"
__asm__(".equ __21motion_control_system,0x002E3138");
__asm__(".equ _vt$17theta_and_psi_mcs,0x004F15E8");
theta_and_psi_mcs::theta_and_psi_mcs(entity *owner, float theta, float psi)
    : motion_control_system(),
      theta(theta),
      psi(psi),
      d_theta_for_next_frame(0),
      d_psi_for_next_frame(0)
{
    ent = owner;
}
