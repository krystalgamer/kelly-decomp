// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00146020)
#include "KS/SRC/entity_interfaces_shared.h"

extern "C" void **skeleton_base_rtti() __asm__("__tf16entity_interface");
extern "C" void *skeleton_base_type[] __asm__("__ti16entity_interface");
extern "C" void *skeleton_type[] __asm__("__ti18skeleton_interface");
extern "C" const char skeleton_name[];

__asm__(".equ __tf16entity_interface, 0x00113200");
__asm__(".equ __ti16entity_interface, 0x005A26A8");
__asm__(".equ __ti18skeleton_interface, 0x005A28A8");
__asm__(".equ skeleton_name, 0x004CEC10");

// 0x00146020 __tf18skeleton_interface
extern "C" void **skeleton_rtti() __asm__("__tf18skeleton_interface");
void **skeleton_rtti()
{
    if (!skeleton_type[0]) {
        skeleton_base_rtti();
        __rtti_si(skeleton_type, skeleton_name, skeleton_base_type);
    }
    return skeleton_type;
}
#endif
