// owner_interface definitions extracted by generated one-function shims.

// 0x00145D90 __tf15owner_interface
#include "KS/SRC/owner_interface.h"

extern "C" void **owner_base_rtti() __asm__("__tf16entity_interface");
extern "C" void *owner_base_type[] __asm__("__ti16entity_interface");
extern "C" void *owner_type[] __asm__("__ti15owner_interface");
extern "C" const char owner_name[];

__asm__(".equ __tf16entity_interface, 0x00113200");
__asm__(".equ __ti16entity_interface, 0x005A26A8");
__asm__(".equ __ti15owner_interface, 0x005A2868");
__asm__(".equ owner_name, 0x004CEBB0");

extern "C" void **owner_rtti() __asm__("__tf15owner_interface");
void **owner_rtti()
{
    if (!owner_type[0]) {
        owner_base_rtti();
        __rtti_si(owner_type, owner_name, owner_base_type);
    }
    return owner_type;
}
