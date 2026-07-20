// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002FF108)
// 0x002FF108 _$_17gravity_generator
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004F3318");

struct target_layout {
    char padding[0x8];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_17gravity_generator");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF188)
// 0x002FF188 _$_22linear_force_generator
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004F3318");

struct target_layout {
    char padding[0x8];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_22linear_force_generator");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF248)
// 0x002FF248 _$_8launcher
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004F3318");

struct target_layout {
    char padding[0x8];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_8launcher");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
