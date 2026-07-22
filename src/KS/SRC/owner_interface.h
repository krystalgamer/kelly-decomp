// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00145D90)
#include "KS/SRC/ownership_interface_shared.h"

extern "C" void **owner_base_rtti() __asm__("__tf16entity_interface");
extern "C" void *owner_base_type[] __asm__("__ti16entity_interface");
extern "C" void *owner_type[] __asm__("__ti15owner_interface");
extern "C" const char owner_name[];

__asm__(".equ __tf16entity_interface, 0x00113200");
__asm__(".equ __ti16entity_interface, 0x005A26A8");
__asm__(".equ __ti15owner_interface, 0x005A2868");
__asm__(".equ owner_name, 0x004CEBB0");

// 0x00145D90 __tf15owner_interface
extern "C" void **owner_rtti() __asm__("__tf15owner_interface");
void **owner_rtti()
{
    if (!owner_type[0]) {
        owner_base_rtti();
        __rtti_si(owner_type, owner_name, owner_base_type);
    }
    return owner_type;
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_00145D58)
// 0x00145D58 _$_15owner_interface
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char generic_interface_vtable[];
__asm__(".equ generic_interface_vtable, 0x004C85B8");

struct interface_layout {
    const void *vtable;
    void *my_entity;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_15owner_interface");

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
