// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00145E70)
#include "KS/SRC/entity_interfaces_shared.h"

extern "C" void **physical_base_rtti() __asm__("__tf16entity_interface");
extern "C" void *physical_base_type[] __asm__("__ti16entity_interface");
extern "C" void *physical_type[] __asm__("__ti18physical_interface");
extern "C" const char physical_name[];

__asm__(".equ __tf16entity_interface, 0x00113200");
__asm__(".equ __ti16entity_interface, 0x005A26A8");
__asm__(".equ __ti18physical_interface, 0x005A2888");
__asm__(".equ physical_name, 0x004CEBE0");

// 0x00145E70 __tf18physical_interface
extern "C" void **physical_rtti() __asm__("__tf18physical_interface");
void **physical_rtti()
{
    if (!physical_type[0]) {
        physical_base_rtti();
        __rtti_si(physical_type, physical_name, physical_base_type);
    }
    return physical_type;
}
#endif
