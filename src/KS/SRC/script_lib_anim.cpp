// Matching decompilation blocks selected by generated build shims.

#include "KS/SRC/script_lib_anim_shared.h"

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
__asm__(".equ kill_anim__21world_dynamics_systemP16entity_anim_tree, 0x002A3710");
__asm__(".equ g_world_ptr, 0x00431A8C");

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

#if defined(KELLY_DECOMP_FUNCTION_00324B60)
// 0x00324B60 __cl__16slf_anim_pause_tR8vm_stackQ320script_library_class8function7entry_t
class slf_anim_pause_t :
    public script_library_class::function {
public:
    struct parms_t {
        entity_anim_tree *me;
    };

    bool operator()(vm_stack &stack, entry_t entry);
};

bool slf_anim_pause_t::operator()(vm_stack &stack, entry_t entry) {
    SLF_PARMS;
    parms->me->set_flag(0x40);
    SLF_DONE;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00324C18)
// 0x00324C18 __cl__24slf_anim_set_timescale_tR8vm_stackQ320script_library_class8function7entry_t
__asm__(".equ set_timescale_factor__16entity_anim_treef, 0x001177D0");

class slf_anim_set_timescale_t :
    public script_library_class::function {
public:
    struct parms_t {
        entity_anim_tree *me;
        vm_num_t speed;
    };

    bool operator()(vm_stack &stack, entry_t entry);
};

bool slf_anim_set_timescale_t::operator()(vm_stack &stack, entry_t entry) {
    SLF_PARMS;
    parms->me->set_timescale_factor(
        parms->speed >= 0.0f ? parms->speed : 0.0f);
    SLF_DONE;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00324B10)
// 0x00324B10 __tf16slf_anim_pause_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00324B10()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_00324B10[]
    __asm__("__ti16slf_anim_pause_t");
extern "C" const char rtti_name_00324B10[];
extern "C" void *rtti_base_type_00324B10[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti16slf_anim_pause_t, 0x005A47B0");
__asm__(".equ rtti_name_00324B10, 0x0050F200");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_00324B10() __asm__("__tf16slf_anim_pause_t");

void **Rtti_00324B10()
{
    if (!rtti_type_00324B10[0]) {
        RttiBase_00324B10();
        __rtti_si(rtti_type_00324B10, rtti_name_00324B10, rtti_base_type_00324B10);
    }
    return rtti_type_00324B10;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00324BC8)
// 0x00324BC8 __tf24slf_anim_set_timescale_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00324BC8()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_00324BC8[]
    __asm__("__ti24slf_anim_set_timescale_t");
extern "C" const char rtti_name_00324BC8[];
extern "C" void *rtti_base_type_00324BC8[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti24slf_anim_set_timescale_t, 0x005A47C0");
__asm__(".equ rtti_name_00324BC8, 0x0050F218");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_00324BC8() __asm__("__tf24slf_anim_set_timescale_t");

void **Rtti_00324BC8()
{
    if (!rtti_type_00324BC8[0]) {
        RttiBase_00324BC8();
        __rtti_si(rtti_type_00324BC8, rtti_name_00324BC8, rtti_base_type_00324BC8);
    }
    return rtti_type_00324BC8;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00324C80)
// 0x00324C80 __tf19slf_anim_set_time_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00324C80()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_00324C80[]
    __asm__("__ti19slf_anim_set_time_t");
extern "C" const char rtti_name_00324C80[];
extern "C" void *rtti_base_type_00324C80[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti19slf_anim_set_time_t, 0x005A47D0");
__asm__(".equ rtti_name_00324C80, 0x0050F238");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_00324C80() __asm__("__tf19slf_anim_set_time_t");

void **Rtti_00324C80()
{
    if (!rtti_type_00324C80[0]) {
        RttiBase_00324C80();
        __rtti_si(rtti_type_00324C80, rtti_name_00324C80, rtti_base_type_00324C80);
    }
    return rtti_type_00324C80;
}
#endif
