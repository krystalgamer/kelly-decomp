// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00325240)
// 0x00325240 _$_14slc_vector3d_t
extern "C" void ScriptClassDtor(void *self) __asm__("_$_20script_library_class");
extern "C" void ScriptDtor_00325240(void *self) __asm__("_$_14slc_vector3d_t");
__asm__(".equ _$_20script_library_class, 0x0034EE68");
void ScriptDtor_00325240(void *self) { ScriptClassDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00325260)
// 0x00325260 __tf14slc_vector3d_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00325260()
    __asm__("__tf20script_library_class");
extern "C" void *rtti_type_00325260[]
    __asm__("__ti14slc_vector3d_t");
extern "C" const char rtti_name_00325260[];
extern "C" void *rtti_base_type_00325260[]
    __asm__("__ti20script_library_class");
__asm__(".equ __tf20script_library_class, 0x0035F680");
__asm__(".equ __ti14slc_vector3d_t, 0x005A4830");
__asm__(".equ rtti_name_00325260, 0x0050F2C8");
__asm__(".equ __ti20script_library_class, 0x005121B0");
extern "C" void **Rtti_00325260() __asm__("__tf14slc_vector3d_t");

void **Rtti_00325260()
{
    if (!rtti_type_00325260[0]) {
        RttiBase_00325260();
        __rtti_si(rtti_type_00325260, rtti_name_00325260, rtti_base_type_00325260);
    }
    return rtti_type_00325260;
}
#endif
