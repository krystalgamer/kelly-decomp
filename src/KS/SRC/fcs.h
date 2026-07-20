// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003003A0)
// 0x003003A0 frame_advance__20force_control_systemf
class force_control_system {
    char padding[0xC];
    bool locked;
public:
    void frame_advance(float time_inc);
};

void force_control_system::frame_advance(float time_inc) {
    locked = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003003A8)
// 0x003003A8 reset_targets__20force_control_system
class force_control_system {
public:
    void reset_targets();
};

void force_control_system::reset_targets() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00300370)
// 0x00300370 _$_20force_control_system
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004F3318");

struct target_layout {
    char padding[0x8];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_20force_control_system");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
