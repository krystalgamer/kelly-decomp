// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0011DDD0)
// 0x0011DDD0 __10anim_maker
extern void* anim_maker_vtable;
__asm__(".equ anim_maker_vtable, 0x004CA030");
class anim_maker { void* vptr; public: anim_maker(); };
anim_maker::anim_maker() { vptr = &anim_maker_vtable; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0011DDE8)
// 0x0011DDE8 _$_10anim_maker
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char anim_maker_vtable[];
__asm__(".equ anim_maker_vtable, 0x004CA030");

struct anim_maker_layout {
    const void *vtable;
};

extern "C" void AnimMakerDtor(void *self, int deleting)
    __asm__("_$_10anim_maker");

void AnimMakerDtor(void *self, int deleting) {
    ((anim_maker_layout *)self)->vtable = anim_maker_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
