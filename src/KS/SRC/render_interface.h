// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00145FD0)
#include "KS/SRC/entity_interfaces_shared.h"

extern "C" void **render_base_rtti() __asm__("__tf16entity_interface");
extern "C" void *render_base_type[] __asm__("__ti16entity_interface");
extern "C" void *render_type[] __asm__("__ti16render_interface");
extern "C" const char render_name[];

__asm__(".equ __tf16entity_interface, 0x00113200");
__asm__(".equ __ti16entity_interface, 0x005A26A8");
__asm__(".equ __ti16render_interface, 0x005A2898");
__asm__(".equ render_name, 0x004CEBF8");

// 0x00145FD0 __tf16render_interface
extern "C" void **render_rtti() __asm__("__tf16render_interface");
void **render_rtti()
{
    if (!render_type[0]) {
        render_base_rtti();
        __rtti_si(render_type, render_name, render_base_type);
    }
    return render_type;
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_00145F98)
// 0x00145F98 _$_16render_interface
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char generic_interface_vtable[];
__asm__(".equ generic_interface_vtable, 0x004C85B8");

struct interface_layout {
    const void *vtable;
    void *my_entity;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_16render_interface");

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
