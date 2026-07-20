// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002A9470)
// 0x002A9470 _$_19rocket_guidance_sys
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char guidance_vtable[];
__asm__(".equ guidance_vtable, 0x004F9700");

struct guidance_layout {
    void *owner;
    int flags;
    const void *vtable;
};

extern "C" void RocketGuidanceDtor(void *self, int deleting)
    __asm__("_$_19rocket_guidance_sys");

void RocketGuidanceDtor(void *self, int deleting)
{
    guidance_layout *guidance = (guidance_layout *)self;
    guidance->vtable = guidance_vtable;
    guidance->owner = 0;
    if (deleting & 1)
        BuiltinDelete(self);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
