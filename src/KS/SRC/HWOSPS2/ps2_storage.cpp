// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001E2C88)
// 0x001E2C88 _$_29storage_unit_changed_callback
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004DF778");

struct target_layout {
    char padding[0x4];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_29storage_unit_changed_callback");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E2CB8)
// 0x001E2CB8 _$_11storage_mgr
extern "C" void debug_print(const char*,...) __asm__("debug_print__FPCce");
extern "C" void object_delete(void*) __asm__("__builtin_delete");
__asm__(".equ debug_print__FPCce,0x00120790"); __asm__(".equ __builtin_delete,0x002AC6B0");
extern int storage_init_called; extern const char storage_vtable[]; extern const char singleton_vtable[]; extern const char shutdown_text[];
__asm__(".equ storage_init_called,0x0040E470"); __asm__(".equ storage_vtable,0x004DF798"); __asm__(".equ singleton_vtable,0x004CE7A8"); __asm__(".equ shutdown_text,0x004DE9F0");
struct storage_layout { const void *vtable; };
extern "C" void destroy_storage(storage_layout*self,int deleting) __asm__("_$_11storage_mgr");
void destroy_storage(storage_layout*self,int deleting)
{
 self->vtable=storage_vtable; debug_print(shutdown_text); storage_init_called=0; self->vtable=singleton_vtable; if(deleting&1){object_delete(self);int dead;__asm__("" : "=r"(dead));}
}
#endif
