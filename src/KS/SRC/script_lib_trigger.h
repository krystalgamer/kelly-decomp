// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003285A8)
// 0x003285A8 _$_13slc_trigger_t
extern "C" void ScriptClassDtor(void *self) __asm__("_$_20script_library_class");
extern "C" void ScriptDtor_003285A8(void *self) __asm__("_$_13slc_trigger_t");
__asm__(".equ _$_20script_library_class, 0x0034EE68");
void ScriptDtor_003285A8(void *self) { ScriptClassDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003285C8)
// 0x003285C8 __tf13slc_trigger_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_003285C8()
    __asm__("__tf20script_library_class");
extern "C" void *rtti_type_003285C8[]
    __asm__("__ti13slc_trigger_t");
extern "C" const char rtti_name_003285C8[];
extern "C" void *rtti_base_type_003285C8[]
    __asm__("__ti20script_library_class");
__asm__(".equ __tf20script_library_class, 0x0035F680");
__asm__(".equ __ti13slc_trigger_t, 0x005A4AD0");
__asm__(".equ rtti_name_003285C8, 0x0050F7A8");
__asm__(".equ __ti20script_library_class, 0x005121B0");
extern "C" void **Rtti_003285C8() __asm__("__tf13slc_trigger_t");

void **Rtti_003285C8()
{
    if (!rtti_type_003285C8[0]) {
        RttiBase_003285C8();
        __rtti_si(rtti_type_003285C8, rtti_name_003285C8, rtti_base_type_003285C8);
    }
    return rtti_type_003285C8;
}
#endif
