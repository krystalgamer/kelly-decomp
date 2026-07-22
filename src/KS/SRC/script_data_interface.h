// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00146320)
#include "KS/SRC/entity_interfaces_shared.h"

extern "C" void **script_data_base_rtti() __asm__("__tf16entity_interface");
extern "C" void *script_data_base_type[] __asm__("__ti16entity_interface");
extern "C" void *script_data_type[] __asm__("__ti21script_data_interface");
extern "C" const char script_data_name[];

__asm__(".equ __tf16entity_interface, 0x00113200");
__asm__(".equ __ti16entity_interface, 0x005A26A8");
__asm__(".equ __ti21script_data_interface, 0x005A28E8");
__asm__(".equ script_data_name, 0x004CEC68");

// 0x00146320 __tf21script_data_interface
extern "C" void **script_data_rtti() __asm__("__tf21script_data_interface");
void **script_data_rtti()
{
    if (!script_data_type[0]) {
        script_data_base_rtti();
        __rtti_si(script_data_type, script_data_name, script_data_base_type);
    }
    return script_data_type;
}
#endif
