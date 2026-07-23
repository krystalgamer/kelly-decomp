// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00327150)
// 0x00327150 _$_19slc_entity_widget_t
extern "C" void ScriptClassDtor(void *self) __asm__("_$_20script_library_class");
extern "C" void ScriptDtor_00327150(void *self) __asm__("_$_19slc_entity_widget_t");
__asm__(".equ _$_20script_library_class, 0x0034EE68");
void ScriptDtor_00327150(void *self) { ScriptClassDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00327170)
// 0x00327170 __tf19slc_entity_widget_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00327170()
    __asm__("__tf20script_library_class");
extern "C" void *rtti_type_00327170[]
    __asm__("__ti19slc_entity_widget_t");
extern "C" const char rtti_name_00327170[];
extern "C" void *rtti_base_type_00327170[]
    __asm__("__ti20script_library_class");
__asm__(".equ __tf20script_library_class, 0x0035F680");
__asm__(".equ __ti19slc_entity_widget_t, 0x005A49E0");
__asm__(".equ rtti_name_00327170, 0x0050F5E8");
__asm__(".equ __ti20script_library_class, 0x005121B0");
extern "C" void **Rtti_00327170() __asm__("__tf19slc_entity_widget_t");

void **Rtti_00327170()
{
    if (!rtti_type_00327170[0]) {
        RttiBase_00327170();
        __rtti_si(rtti_type_00327170, rtti_name_00327170, rtti_base_type_00327170);
    }
    return rtti_type_00327170;
}
#endif
