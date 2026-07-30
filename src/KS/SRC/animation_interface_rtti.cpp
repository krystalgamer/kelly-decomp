// animation_interface RTTI definition extracted by generated shims.

// 0x001462C8 __tf19animation_interface
#include "KS/SRC/animation_interface.h"

extern "C" void **animation_base_rtti() __asm__("__tf16entity_interface");
extern "C" void *animation_base_type[] __asm__("__ti16entity_interface");
extern "C" void *animation_type[] __asm__("__ti19animation_interface");
extern "C" const char animation_name[];

__asm__(".equ __tf16entity_interface, 0x00113200");
__asm__(".equ __ti16entity_interface, 0x005A26A8");
__asm__(".equ __ti19animation_interface, 0x005A28D8");
__asm__(".equ animation_name, 0x004CEC50");

extern "C" void **animation_rtti() __asm__("__tf19animation_interface");
void **animation_rtti()
{
    if (!animation_type[0]) {
        animation_base_rtti();
        __rtti_si(animation_type, animation_name, animation_base_type);
    }
    return animation_type;
}
