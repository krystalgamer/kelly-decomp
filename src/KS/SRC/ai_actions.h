// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00113070)
// 0x00113070 _$_9ai_action
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char ai_action_vtable[];
__asm__(".equ ai_action_vtable, 0x004C8370");

struct ai_action_layout {
    char padding[0xc];
    const void *vtable;
};

extern "C" void AIActionDtor(void *self, int deleting)
    __asm__("_$_9ai_action");

void AIActionDtor(void *self, int deleting) {
    ((ai_action_layout *)self)->vtable = ai_action_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00113030)
// 0x00113030 __tf9ai_action
extern "C" void __rtti_user(void *info, const char *name); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00511FA8"); asm(".equ type_name, 0x004C8828");
extern "C" void *GetTypeInfo() __asm__("__tf9ai_action");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001130B0)
// 0x001130B0 _$_14anim_ai_action
extern "C" void destroy_string(void *,int)
    __asm__("_$_7stringx");
extern "C" void object_delete(void *)
    __asm__("__builtin_delete");
extern const char action_vtable[];
__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ action_vtable, 0x004C8370");
struct action_layout {
    char padding[0xc];
    const void *vtable;
    char first_string[8];
    char second_string[8];
};
extern "C" void destroy_action(
    action_layout *self,int flags
) __asm__("_$_14anim_ai_action");
void destroy_action(action_layout *self,int flags) {
    destroy_string(self->second_string,2);
    destroy_string(self->first_string,2);
    self->vtable=action_vtable;
    if (flags&1) {
        object_delete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}
#endif
