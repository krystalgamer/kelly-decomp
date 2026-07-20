// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00328010)
// 0x00328010 _$_26slf_scene_anim_kill_anim_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00328010(void *self) __asm__("_$_26slf_scene_anim_kill_anim_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00328010(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003280B8)
// 0x003280B8 _$_21slf_load_scene_anim_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_003280B8(void *self) __asm__("_$_21slf_load_scene_anim_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_003280B8(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00328160)
// 0x00328160 _$_21slf_play_scene_anim_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00328160(void *self) __asm__("_$_21slf_play_scene_anim_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00328160(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00328080)
// 0x00328080 __cl__26slf_scene_anim_kill_anim_tR8vm_stackQ320script_library_class8function7entry_t
class vm_stack {
    char padding[8];
    unsigned char *top;

public:
    void *pop(int size) {
        top -= size;
        return top;
    }
};

class world_dynamics_system {
public:
    void kill_scene_anim(unsigned int animation);
};

__asm__(".equ kill_scene_anim__21world_dynamics_systemUi, 0x002A9058");

extern world_dynamics_system *g_world_ptr;
__asm__(".equ g_world_ptr, 0x00431A8C");

class script_library_class {
public:
    class function {
    public:
        enum entry_t { FIRST_ENTRY };
    };
};

#define SLF_PARMS parms_t *parms = (parms_t *)stack.pop(sizeof(parms_t))
#define SLF_DONE return true

class slf_scene_anim_kill_anim_t :
    public script_library_class::function {
public:
    struct parms_t {
        unsigned int animation;
    };

    bool operator()(vm_stack &stack, entry_t entry);
};

bool slf_scene_anim_kill_anim_t::operator()(
    vm_stack &stack,
    entry_t entry
) {
    SLF_PARMS;
    g_world_ptr->kill_scene_anim(parms->animation);
    SLF_DONE;
}
#endif
