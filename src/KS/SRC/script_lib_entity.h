// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0031D938)
// 0x0031D938 _$_12slc_entity_t
extern "C" void ScriptClassDtor(void *self) __asm__("_$_20script_library_class");
extern "C" void ScriptDtor_0031D938(void *self) __asm__("_$_12slc_entity_t");
__asm__(".equ _$_20script_library_class, 0x0034EE68");
void ScriptDtor_0031D938(void *self) { ScriptClassDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031D958)
// 0x0031D958 __tf12slc_entity_t
#include "KS/SRC/rtti_shared.h"
extern "C" void **SlcEntityBaseRtti() __asm__("__tf20script_library_class");
extern "C" void *slc_entity_type[] __asm__("__ti12slc_entity_t");
extern "C" const char slc_entity_name[];
extern "C" void *slc_entity_base_type[] __asm__("__ti20script_library_class");
__asm__(".equ __tf20script_library_class, 0x0035F680");
__asm__(".equ __ti12slc_entity_t, 0x005A4240");
__asm__(".equ slc_entity_name, 0x0050E8B8");
__asm__(".equ __ti20script_library_class, 0x005121B0");
extern "C" void **SlcEntityRtti() __asm__("__tf12slc_entity_t");
void **SlcEntityRtti()
{
    if (!slc_entity_type[0]) {
        SlcEntityBaseRtti();
        __rtti_si(slc_entity_type, slc_entity_name, slc_entity_base_type);
    }
    return slc_entity_type;
}
#endif
