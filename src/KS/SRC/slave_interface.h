// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00145E18)
#include "KS/SRC/ownership_interface_shared.h"

extern "C" void **slave_base_rtti() __asm__("__tf16entity_interface");
extern "C" void *slave_base_type[] __asm__("__ti16entity_interface");
extern "C" void *slave_type[] __asm__("__ti15slave_interface");
extern "C" const char slave_name[];

__asm__(".equ __tf16entity_interface, 0x00113200");
__asm__(".equ __ti16entity_interface, 0x005A26A8");
__asm__(".equ __ti15slave_interface, 0x005A2878");
__asm__(".equ slave_name, 0x004CEBC8");

// 0x00145E18 __tf15slave_interface
extern "C" void **slave_rtti() __asm__("__tf15slave_interface");
void **slave_rtti()
{
    if (!slave_type[0]) {
        slave_base_rtti();
        __rtti_si(slave_type, slave_name, slave_base_type);
    }
    return slave_type;
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_00145DE0)
// 0x00145DE0 _$_15slave_interface
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char generic_interface_vtable[];
__asm__(".equ generic_interface_vtable, 0x004C85B8");

struct interface_layout {
    const void *vtable;
    void *my_entity;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_15slave_interface");

void TargetDtor(void *self, int deleting)
{
    interface_layout *interface = (interface_layout *)self;
    interface->vtable = generic_interface_vtable;
    interface->my_entity = 0;
    if (deleting & 1)
        BuiltinDelete(self);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
