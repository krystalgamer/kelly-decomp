// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003271C0)
// 0x003271C0 _$_26slf_create_entity_widget_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_003271C0(void *self) __asm__("_$_26slf_create_entity_widget_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_003271C0(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003273E8)
// 0x003273E8 _$_30slf_entity_widget_get_entity_t
extern "C" void ScriptFunctionDtor(void *self) __asm__("_$_Q220script_library_class8function");
extern "C" void ScriptDtor_003273E8(void *self) __asm__("_$_30slf_entity_widget_get_entity_t");
__asm__(".equ _$_Q220script_library_class8function, 0x0034F178");
void ScriptDtor_003273E8(void *self) { ScriptFunctionDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003271E0)
// 0x003271E0 __tf26slf_create_entity_widget_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_003271E0()
    __asm__("__tfQ220script_library_class8function");
extern "C" void *rtti_type_003271E0[]
    __asm__("__ti26slf_create_entity_widget_t");
extern "C" const char rtti_name_003271E0[];
extern "C" void *rtti_base_type_003271E0[]
    __asm__("__tiQ220script_library_class8function");
__asm__(".equ __tfQ220script_library_class8function, 0x0035F640");
__asm__(".equ __ti26slf_create_entity_widget_t, 0x005A49F0");
__asm__(".equ rtti_name_003271E0, 0x0050F600");
__asm__(".equ __tiQ220script_library_class8function, 0x005121B8");
extern "C" void **Rtti_003271E0() __asm__("__tf26slf_create_entity_widget_t");

void **Rtti_003271E0()
{
    if (!rtti_type_003271E0[0]) {
        RttiBase_003271E0();
        __rtti_si(rtti_type_003271E0, rtti_name_003271E0, rtti_base_type_003271E0);
    }
    return rtti_type_003271E0;
}
#endif
