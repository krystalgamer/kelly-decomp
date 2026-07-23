// Matching decompilation blocks selected by generated build shims.

#include "KS/SRC/script_lib_item_shared.h"

#if defined(KELLY_DECOMP_FUNCTION_003275B0)
// 0x003275B0 _$_20slf_item_set_count_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_003275B0(void *self) __asm__("_$_20slf_item_set_count_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_003275B0(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00327668)
// 0x00327668 _$_20slf_item_get_count_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00327668(void *self) __asm__("_$_20slf_item_get_count_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00327668(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00327620)
// 0x00327620 __cl__20slf_item_set_count_tR8vm_stackQ320script_library_class8function7entry_t
class slf_item_set_count_t :
    public script_library_class::function {
public:
    struct parms_t {
        item *me;
        vm_num_t count;
    };

    bool operator()(vm_stack &stack, entry_t entry);
};

bool slf_item_set_count_t::operator()(vm_stack &stack, entry_t entry) {
    SLF_PARMS;
    parms->me->set_count(parms->count);
    SLF_DONE;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00327850)
// 0x00327850 _$_17slf_create_item_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00327850(void *self) __asm__("_$_17slf_create_item_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00327850(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00327C98)
// 0x00327C98 _$_13slf_to_item_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_00327C98(void *self) __asm__("_$_13slf_to_item_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_00327C98(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003275D0)
// 0x003275D0 __tf20slf_item_set_count_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_003275D0()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_003275D0[]
    __asm__("__ti20slf_item_set_count_t");
extern "C" const char rtti_name_003275D0[];
extern "C" void *rtti_base_type_003275D0[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti20slf_item_set_count_t, 0x005A4A10");
__asm__(".equ rtti_name_003275D0, 0x0050F648");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_003275D0() __asm__("__tf20slf_item_set_count_t");

void **Rtti_003275D0()
{
    if (!rtti_type_003275D0[0]) {
        RttiBase_003275D0();
        __rtti_si(rtti_type_003275D0, rtti_name_003275D0, rtti_base_type_003275D0);
    }
    return rtti_type_003275D0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00327688)
// 0x00327688 __tf20slf_item_get_count_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00327688()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_00327688[]
    __asm__("__ti20slf_item_get_count_t");
extern "C" const char rtti_name_00327688[];
extern "C" void *rtti_base_type_00327688[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti20slf_item_get_count_t, 0x005A4A20");
__asm__(".equ rtti_name_00327688, 0x0050F660");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_00327688() __asm__("__tf20slf_item_get_count_t");

void **Rtti_00327688()
{
    if (!rtti_type_00327688[0]) {
        RttiBase_00327688();
        __rtti_si(rtti_type_00327688, rtti_name_00327688, rtti_base_type_00327688);
    }
    return rtti_type_00327688;
}
#endif
