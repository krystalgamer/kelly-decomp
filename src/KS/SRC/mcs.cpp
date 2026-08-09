// Matching decompilation blocks selected by generated build shims.


// 0x002E3138 __21motion_control_system
#include "KS/SRC/mcs.h"
motion_control_system::motion_control_system() : motion_object() {}


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

// Source implementation boundary.
