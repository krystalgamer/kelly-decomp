// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00338518)
// 0x00338518 set_fog_distance__11fog_managerff
class fog_manager {
    char padding[0x14];
    float fog_start_distance;
    float fog_end_distance;
public:
    void set_fog_distance(float start, float end);
};
void fog_manager::set_fog_distance(float start, float end) { fog_start_distance = start; fog_end_distance = end; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00338630)
// 0x00338630 set_fog_table_gamma__11fog_managerf
class fog_manager {
    char padding[0x1C];
    float specified_fog_table_gamma;
public:
    void set_fog_table_gamma(float value);
};

void fog_manager::set_fog_table_gamma(float value) {
    specified_fog_table_gamma = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00338458)
// 0x00338458 _$_11fog_manager
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004CE7A8");

struct target_layout {
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_11fog_manager");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
