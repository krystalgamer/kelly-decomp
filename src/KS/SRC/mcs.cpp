// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002E3138)
// 0x002E3138 __21motion_control_system
class motion_object { protected: bool active; bool locked; public: motion_object() { active = true; locked = false; } virtual ~motion_object(); };
class motion_control_system : public motion_object { public: motion_control_system(); virtual ~motion_control_system(); };
__asm__(".equ _vt$21motion_control_system, 0x004F1618");
motion_control_system::motion_control_system() : motion_object() {}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002E3158)
// 0x002E3158 _$_21motion_control_system
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004F3318");

struct target_layout {
    char padding[0x8];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_21motion_control_system");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
