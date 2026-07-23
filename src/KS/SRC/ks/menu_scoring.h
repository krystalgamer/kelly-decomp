// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00314100)
// 0x00314100 __tf9TrickMenu
#include "KS/SRC/rtti_shared.h"
extern "C" void **TrickMenuBaseRtti() __asm__("__tf4Menu");
extern "C" void *trick_menu_type[] __asm__("__ti9TrickMenu");
extern "C" const char trick_menu_name[];
extern "C" void *trick_menu_base_type[] __asm__("__ti4Menu");
__asm__(".equ __tf4Menu, 0x002703D0");
__asm__(".equ __ti9TrickMenu, 0x005A4210");
__asm__(".equ trick_menu_name, 0x00508B10");
__asm__(".equ __ti4Menu, 0x005120F8");
extern "C" void **TrickMenuRtti() __asm__("__tf9TrickMenu");
void **TrickMenuRtti()
{
    if (!trick_menu_type[0]) {
        TrickMenuBaseRtti();
        __rtti_si(trick_menu_type, trick_menu_name, trick_menu_base_type);
    }
    return trick_menu_type;
}
#endif
