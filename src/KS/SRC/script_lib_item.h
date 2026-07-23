// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003270D8)
// 0x003270D8 _$_10slc_item_t
extern "C" void ScriptClassDtor(void *self) __asm__("_$_20script_library_class");
extern "C" void ScriptDtor_003270D8(void *self) __asm__("_$_10slc_item_t");
__asm__(".equ _$_20script_library_class, 0x0034EE68");
void ScriptDtor_003270D8(void *self) { ScriptClassDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003270F8)
// 0x003270F8 __tf10slc_item_t
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_003270F8()
    __asm__("__tf20script_library_class");
extern "C" void *rtti_type_003270F8[]
    __asm__("__ti10slc_item_t");
extern "C" const char rtti_name_003270F8[];
extern "C" void *rtti_base_type_003270F8[]
    __asm__("__ti20script_library_class");
__asm__(".equ __tf20script_library_class, 0x0035F680");
__asm__(".equ __ti10slc_item_t, 0x005A49D0");
__asm__(".equ rtti_name_003270F8, 0x0050F5D8");
__asm__(".equ __ti20script_library_class, 0x005121B0");
extern "C" void **Rtti_003270F8() __asm__("__tf10slc_item_t");

void **Rtti_003270F8()
{
    if (!rtti_type_003270F8[0]) {
        RttiBase_003270F8();
        __rtti_si(rtti_type_003270F8, rtti_name_003270F8, rtti_base_type_003270F8);
    }
    return rtti_type_003270F8;
}
#endif
