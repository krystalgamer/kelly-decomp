// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002B8B18)
// 0x002B8B18 _$_16StoredConfigData
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004CE7A8");

struct target_layout {
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_16StoredConfigData");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8B48)
// 0x002B8B48 __tf16StoredConfigData
extern "C" void __rtti_class(
    void **type, const char *name, const void *bases, int count
);
extern "C" void **singleton_rtti() __asm__("__tf9singleton");
extern "C" void *stored_config_type[]
    __asm__("__ti16StoredConfigData");
extern "C" const char stored_config_name[];
extern "C" const char stored_config_bases[];

__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf9singleton, 0x00144398");
__asm__(".equ __ti16StoredConfigData, 0x005A3E00");
__asm__(".equ stored_config_name, 0x004FE530");
__asm__(".equ stored_config_bases, 0x004FE548");

extern "C" void **stored_config_rtti()
    __asm__("__tf16StoredConfigData");

void **stored_config_rtti()
{
    if (!stored_config_type[0])
    {
        singleton_rtti();
        __rtti_class(
            stored_config_type,
            stored_config_name,
            stored_config_bases,
            1
        );
    }
    return stored_config_type;
}
#endif
