// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001443D8)
// 0x001443D8 _$_9singleton
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char singleton_vtable[];
__asm__(".equ singleton_vtable, 0x004CE7A8");

struct singleton_layout {
    const void *vtable;
};

extern "C" void SingletonDtor(void *self, int deleting)
    __asm__("_$_9singleton");

void SingletonDtor(void *self, int deleting) {
    ((singleton_layout *)self)->vtable = singleton_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
