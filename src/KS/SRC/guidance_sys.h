// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002B9480)
// 0x002B9480 get_type__15guidance_system
class guidance_system {
public:
    int get_type();
};

int guidance_system::get_type() {
    return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B9488)
// 0x002B9488 frame_advance__15guidance_systemf
class guidance_system {
public:
    void frame_advance(float time);
};

void guidance_system::frame_advance(float time) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B9508)
// 0x002B9508 get_type__19rocket_guidance_sys
class rocket_guidance_sys {
public:
    int get_type();
};

int rocket_guidance_sys::get_type() {
    return 1;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B9440)
// 0x002B9440 _$_15guidance_system
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char guidance_vtable[];
__asm__(".equ guidance_vtable, 0x004F9700");

struct guidance_layout {
    void *owner;
    int flags;
    const void *vtable;
};

extern "C" void GuidanceDtor(void *self, int deleting)
    __asm__("_$_15guidance_system");

void GuidanceDtor(void *self, int deleting)
{
    guidance_layout *guidance = (guidance_layout *)self;
    guidance->vtable = guidance_vtable;
    guidance->owner = 0;
    if (deleting & 1)
        BuiltinDelete(self);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
