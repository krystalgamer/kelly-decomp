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
