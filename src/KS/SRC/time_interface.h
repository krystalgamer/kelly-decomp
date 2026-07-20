// Matching decompilation blocks selected by generated build shims.


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
