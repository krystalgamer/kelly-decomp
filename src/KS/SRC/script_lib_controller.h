// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0032EF70)
// 0x0032EF70 _$_16slc_controller_t
extern "C" void ScriptClassDtor(void *self) __asm__("_$_20script_library_class");
extern "C" void ScriptDtor_0032EF70(void *self) __asm__("_$_16slc_controller_t");
__asm__(".equ _$_20script_library_class, 0x0034EE68");
void ScriptDtor_0032EF70(void *self) { ScriptClassDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0032EE80)
// 0x0032EE80 __tf17script_controller
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_0032EE80()
    __asm__("__tf9signaller");
extern "C" void *rtti_type_0032EE80[]
    __asm__("__ti17script_controller");
extern "C" const char rtti_name_0032EE80[];
extern "C" void *rtti_base_type_0032EE80[]
    __asm__("__ti9signaller");
__asm__(".equ __tf9signaller, 0x0035FBA8");
__asm__(".equ __ti17script_controller, 0x005A5040");
__asm__(".equ rtti_name_0032EE80, 0x00500278");
__asm__(".equ __ti9signaller, 0x00512028");
extern "C" void **Rtti_0032EE80() __asm__("__tf17script_controller");

void **Rtti_0032EE80()
{
    if (!rtti_type_0032EE80[0]) {
        RttiBase_0032EE80();
        __rtti_si(rtti_type_0032EE80, rtti_name_0032EE80, rtti_base_type_0032EE80);
    }
    return rtti_type_0032EE80;
}
#endif
