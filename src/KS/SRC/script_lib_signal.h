// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00327068)
// 0x00327068 _$_15slc_signaller_t
extern "C" void ScriptClassDtor(void *self) __asm__("_$_20script_library_class");
extern "C" void ScriptDtor_00327068(void *self) __asm__("_$_15slc_signaller_t");
__asm__(".equ _$_20script_library_class, 0x0034EE68");
void ScriptDtor_00327068(void *self) { ScriptClassDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00327088)
// 0x00327088 __tf15slc_signaller_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00327088()
    __asm__("__tf20script_library_class");
extern "C" void *rtti_type_00327088[]
    __asm__("__ti15slc_signaller_t");
extern "C" const char rtti_name_00327088[];
extern "C" void *rtti_base_type_00327088[]
    __asm__("__ti20script_library_class");
__asm__(".equ __tf20script_library_class, 0x0035F680");
__asm__(".equ __ti15slc_signaller_t, 0x005A49C0");
__asm__(".equ rtti_name_00327088, 0x0050F5C0");
__asm__(".equ __ti20script_library_class, 0x005121B0");
extern "C" void **Rtti_00327088() __asm__("__tf15slc_signaller_t");

void **Rtti_00327088()
{
    if (!rtti_type_00327088[0]) {
        RttiBase_00327088();
        __rtti_si(rtti_type_00327088, rtti_name_00327088, rtti_base_type_00327088);
    }
    return rtti_type_00327088;
}
#endif
