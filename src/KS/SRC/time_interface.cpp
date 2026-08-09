// time_interface definitions extracted by generated one-function shims.

// 0x00144408 __tf14time_interface
#include "KS/SRC/time_interface.h"

extern "C" void **time_base_rtti() __asm__("__tf16entity_interface");
extern "C" void *time_base_type[] __asm__("__ti16entity_interface");
extern "C" void *time_type[] __asm__("__ti14time_interface");
extern "C" const char time_name[];

__asm__(".equ __tf16entity_interface, 0x00113200");
__asm__(".equ __ti16entity_interface, 0x005A26A8");
__asm__(".equ __ti14time_interface, 0x005A2778");
__asm__(".equ time_name, 0x004CE9D8");

extern "C" void **time_rtti() __asm__("__tf14time_interface");
void **time_rtti()
{
    if (!time_type[0]) {
        time_base_rtti();
        __rtti_si(time_type, time_name, time_base_type);
    }
    return time_type;
}
