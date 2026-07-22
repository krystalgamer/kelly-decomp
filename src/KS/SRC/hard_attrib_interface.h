// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00145988)
#include "KS/SRC/hard_attrib_interface_shared.h"

extern "C" void **hard_attrib_base_rtti() __asm__("__tf16entity_interface");
extern "C" void *hard_attrib_base_type[] __asm__("__ti16entity_interface");
extern "C" void *hard_attrib_type[] __asm__("__ti21hard_attrib_interface");
extern "C" const char hard_attrib_name[];

__asm__(".equ __tf16entity_interface, 0x00113200");
__asm__(".equ __ti16entity_interface, 0x005A26A8");
__asm__(".equ __ti21hard_attrib_interface, 0x005A2858");
__asm__(".equ hard_attrib_name, 0x004CEB98");

// 0x00145988 __tf21hard_attrib_interface
extern "C" void **hard_attrib_rtti() __asm__("__tf21hard_attrib_interface");
void **hard_attrib_rtti()
{
    if (!hard_attrib_type[0]) {
        hard_attrib_base_rtti();
        __rtti_si(hard_attrib_type, hard_attrib_name, hard_attrib_base_type);
    }
    return hard_attrib_type;
}
#endif
