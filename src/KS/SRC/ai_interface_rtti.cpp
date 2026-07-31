// Matching decompilation blocks selected by generated build shims.

// 0x00112DF8 __tf12ai_interface
#include "KS/SRC/ai_interface.h"
#include "KS/SRC/rtti.h"

extern "C" void **entity_interface_rtti() __asm__("__tf16entity_interface");
extern "C" void *entity_interface_type[] __asm__("__ti16entity_interface");
extern "C" void *ai_interface_type[] __asm__("__ti12ai_interface");
extern "C" const char ai_interface_name[];

__asm__(".equ __tf16entity_interface, 0x00113200");
__asm__(".equ __ti16entity_interface, 0x005A26A8");
__asm__(".equ __ti12ai_interface, 0x005A2678");
__asm__(".equ ai_interface_name, 0x004C8808");

extern "C" void **ai_interface_rtti() __asm__("__tf12ai_interface");
void **ai_interface_rtti()
{
    if (!ai_interface_type[0]) {
        entity_interface_rtti();
        __rtti_si(ai_interface_type, ai_interface_name, entity_interface_type);
    }
    return ai_interface_type;
}
