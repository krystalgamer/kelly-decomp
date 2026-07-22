// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00144408)
#include "KS/SRC/time_interface_shared.h"

extern "C" void **time_base_rtti() __asm__("__tf16entity_interface");
extern "C" void *time_base_type[] __asm__("__ti16entity_interface");
extern "C" void *time_type[] __asm__("__ti14time_interface");
extern "C" const char time_name[];

__asm__(".equ __tf16entity_interface, 0x00113200");
__asm__(".equ __ti16entity_interface, 0x005A26A8");
__asm__(".equ __ti14time_interface, 0x005A2778");
__asm__(".equ time_name, 0x004CE9D8");

// 0x00144408 __tf14time_interface
extern "C" void **time_rtti() __asm__("__tf14time_interface");
void **time_rtti()
{
    if (!time_type[0]) {
        time_base_rtti();
        __rtti_si(time_type, time_name, time_base_type);
    }
    return time_type;
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_00144458)
// 0x00144458 _$_14time_interface
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char generic_interface_vtable[];
__asm__(".equ generic_interface_vtable, 0x004C85B8");

struct interface_layout {
    const void *vtable;
    void *my_entity;
};

extern "C" void TimeInterfaceDtor(void *self, int deleting)
    __asm__("_$_14time_interface");

void TimeInterfaceDtor(void *self, int deleting)
{
    interface_layout *interface = (interface_layout *)self;
    interface->vtable = generic_interface_vtable;
    interface->my_entity = 0;
    if (deleting & 1)
        BuiltinDelete(self);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
