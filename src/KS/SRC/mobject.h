// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002FF0A8)
// 0x002FF0A8 is_active__C13motion_object
class motion_object {
    bool active;
public:
    bool is_active() const;
};

bool motion_object::is_active() const {
    return active;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF0B0)
// 0x002FF0B0 set_active__13motion_objectb
class motion_object {
    bool active;
public:
    void set_active(bool value);
};

void motion_object::set_active(bool value) {
    active = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF078)
// 0x002FF078 _$_13motion_object
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004F3318");

struct target_layout {
    char padding[0x8];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_13motion_object");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
