// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0031DAA0)
// 0x0031DAA0 _$_9slc_mfg_t
extern "C" void ScriptClassDtor(void *self) __asm__("_$_20script_library_class");
extern "C" void ScriptDtor_0031DAA0(void *self) __asm__("_$_9slc_mfg_t");
__asm__(".equ _$_20script_library_class, 0x0034EE68");
void ScriptDtor_0031DAA0(void *self) { ScriptClassDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031D9B0)
// 0x0031D9B0 __tf10script_mfg
#include "KS/SRC/rtti_shared.h"
extern "C" void **ScriptMfgBaseRtti() __asm__("__tf9signaller");
extern "C" void *script_mfg_type[] __asm__("__ti10script_mfg");
extern "C" const char script_mfg_name[];
extern "C" void *script_mfg_base_type[] __asm__("__ti9signaller");
__asm__(".equ __tf9signaller, 0x0035FBA8");
__asm__(".equ __ti10script_mfg, 0x005A4250");
__asm__(".equ script_mfg_name, 0x0050E8C8");
__asm__(".equ __ti9signaller, 0x00512028");
extern "C" void **ScriptMfgRtti() __asm__("__tf10script_mfg");
void **ScriptMfgRtti()
{
    if (!script_mfg_type[0]) {
        ScriptMfgBaseRtti();
        __rtti_si(script_mfg_type, script_mfg_name, script_mfg_base_type);
    }
    return script_mfg_type;
}
#endif
