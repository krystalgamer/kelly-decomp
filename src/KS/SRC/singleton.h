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

#if defined(KELLY_DECOMP_FUNCTION_00144398)
// 0x00144398 __tf9singleton
extern "C" void __rtti_user(void *info, const char *name); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00511FF8"); asm(".equ type_name, 0x004CE9B0");
extern "C" void *GetTypeInfo() __asm__("__tf9singleton");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif
