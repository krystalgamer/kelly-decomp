// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00327FA0)
// 0x00327FA0 _$_16slc_scene_anim_t
extern "C" void ScriptClassDtor(void *self) __asm__("_$_20script_library_class");
extern "C" void ScriptDtor_00327FA0(void *self) __asm__("_$_16slc_scene_anim_t");
__asm__(".equ _$_20script_library_class, 0x0034EE68");
void ScriptDtor_00327FA0(void *self) { ScriptClassDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00327FC0)
// 0x00327FC0 __tf16slc_scene_anim_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00327FC0()
    __asm__("__tf20script_library_class");
extern "C" void *rtti_type_00327FC0[]
    __asm__("__ti16slc_scene_anim_t");
extern "C" const char rtti_name_00327FC0[];
extern "C" void *rtti_base_type_00327FC0[]
    __asm__("__ti20script_library_class");
__asm__(".equ __tf20script_library_class, 0x0035F680");
__asm__(".equ __ti16slc_scene_anim_t, 0x005A4A50");
__asm__(".equ rtti_name_00327FC0, 0x0050F6A0");
__asm__(".equ __ti20script_library_class, 0x005121B0");
extern "C" void **Rtti_00327FC0() __asm__("__tf16slc_scene_anim_t");

void **Rtti_00327FC0()
{
    if (!rtti_type_00327FC0[0]) {
        RttiBase_00327FC0();
        __rtti_si(rtti_type_00327FC0, rtti_name_00327FC0, rtti_base_type_00327FC0);
    }
    return rtti_type_00327FC0;
}
#endif
