// slave_interface definitions extracted by generated one-function shims.

// 0x00145E18 __tf15slave_interface
#include "KS/SRC/slave_interface.h"

extern "C" void **slave_base_rtti() __asm__("__tf16entity_interface");
extern "C" void *slave_base_type[] __asm__("__ti16entity_interface");
extern "C" void *slave_type[] __asm__("__ti15slave_interface");
extern "C" const char slave_name[];

__asm__(".equ __tf16entity_interface, 0x00113200");
__asm__(".equ __ti16entity_interface, 0x005A26A8");
__asm__(".equ __ti15slave_interface, 0x005A2878");
__asm__(".equ slave_name, 0x004CEBC8");

extern "C" void **slave_rtti() __asm__("__tf15slave_interface");
void **slave_rtti()
{
    if (!slave_type[0]) {
        slave_base_rtti();
        __rtti_si(slave_type, slave_name, slave_base_type);
    }
    return slave_type;
}
