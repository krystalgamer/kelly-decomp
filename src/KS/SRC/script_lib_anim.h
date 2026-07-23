// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00324A80)
// 0x00324A80 _$_10slc_anim_t
extern "C" void ScriptClassDtor(void *self) __asm__("_$_20script_library_class");
extern "C" void ScriptDtor_00324A80(void *self) __asm__("_$_10slc_anim_t");
__asm__(".equ _$_20script_library_class, 0x0034EE68");
void ScriptDtor_00324A80(void *self) { ScriptClassDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00324AA0)
// 0x00324AA0 __tf10slc_anim_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00324AA0()
    __asm__("__tf20script_library_class");
extern "C" void *rtti_type_00324AA0[]
    __asm__("__ti10slc_anim_t");
extern "C" const char rtti_name_00324AA0[];
extern "C" void *rtti_base_type_00324AA0[]
    __asm__("__ti20script_library_class");
__asm__(".equ __tf20script_library_class, 0x0035F680");
__asm__(".equ __ti10slc_anim_t, 0x005A47A0");
__asm__(".equ rtti_name_00324AA0, 0x0050F1F0");
__asm__(".equ __ti20script_library_class, 0x005121B0");
extern "C" void **Rtti_00324AA0() __asm__("__tf10slc_anim_t");

void **Rtti_00324AA0()
{
    if (!rtti_type_00324AA0[0]) {
        RttiBase_00324AA0();
        __rtti_si(rtti_type_00324AA0, rtti_name_00324AA0, rtti_base_type_00324AA0);
    }
    return rtti_type_00324AA0;
}
#endif
