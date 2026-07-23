// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00383E20)
// 0x00383E20 __tf19MenuPerturbDuration
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00383E20()
    __asm__("__tf4Menu");
extern "C" void *rtti_type_00383E20[]
    __asm__("__ti19MenuPerturbDuration");
extern "C" const char rtti_name_00383E20[];
extern "C" void *rtti_base_type_00383E20[]
    __asm__("__ti4Menu");
__asm__(".equ __tf4Menu, 0x002703D0");
__asm__(".equ __ti19MenuPerturbDuration, 0x007822E8");
__asm__(".equ rtti_name_00383E20, 0x0051AA00");
__asm__(".equ __ti4Menu, 0x005120F8");
extern "C" void **Rtti_00383E20() __asm__("__tf19MenuPerturbDuration");

void **Rtti_00383E20()
{
    if (!rtti_type_00383E20[0]) {
        RttiBase_00383E20();
        __rtti_si(rtti_type_00383E20, rtti_name_00383E20, rtti_base_type_00383E20);
    }
    return rtti_type_00383E20;
}
#endif
