// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00324AF0)
// 0x00324AF0 _$_16slf_anim_pause_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00324AF0(void *self) __asm__("_$_16slf_anim_pause_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00324AF0(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00324BA8)
// 0x00324BA8 _$_24slf_anim_set_timescale_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00324BA8(void *self) __asm__("_$_24slf_anim_set_timescale_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00324BA8(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00324C60)
// 0x00324C60 _$_19slf_anim_set_time_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00324C60(void *self) __asm__("_$_19slf_anim_set_time_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00324C60(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00324D70)
// 0x00324D70 _$_15slf_anim_play_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00324D70(void *self) __asm__("_$_15slf_anim_play_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00324D70(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00324E38)
// 0x00324E38 _$_24slf_anim_wait_finished_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00324E38(void *self) __asm__("_$_24slf_anim_wait_finished_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00324E38(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00324F70)
// 0x00324F70 _$_20slf_anim_kill_anim_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00324F70(void *self) __asm__("_$_20slf_anim_kill_anim_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00324F70(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00325018)
// 0x00325018 _$_15slf_load_anim_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00325018(void *self) __asm__("_$_15slf_load_anim_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00325018(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00324FE0)
// 0x00324FE0 __cl__20slf_anim_kill_anim_tR8vm_stackQ320script_library_class8function7entry_t
class entity_anim_tree;

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
    void kill_anim(entity_anim_tree *animation);
};

__asm__(".equ kill_anim__21world_dynamics_systemP16entity_anim_tree, 0x002A3710");

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

class slf_anim_kill_anim_t :
    public script_library_class::function {
public:
    struct parms_t {
        entity_anim_tree *animation;
    };

    bool operator()(vm_stack &stack, entry_t entry);
};

bool slf_anim_kill_anim_t::operator()(
    vm_stack &stack,
    entry_t entry
) {
    SLF_PARMS;
    g_world_ptr->kill_anim(parms->animation);
    SLF_DONE;
}
#endif
