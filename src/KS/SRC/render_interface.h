// Matching decompilation blocks selected by generated build shims.


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
