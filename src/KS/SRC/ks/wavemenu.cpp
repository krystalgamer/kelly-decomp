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

#if defined(KELLY_DECOMP_FUNCTION_00383E78)
// 0x00383E78 _$_19MenuPerturbDuration
extern "C" void close_menu(void *,bool) __asm__("Close__4Menub");
extern "C" void resize_menu(void *,int) __asm__("Resize__4Menui");
extern "C" void object_delete(void *) __asm__("__builtin_delete");
extern const char menu_vtable[];
__asm__(".equ Close__4Menub,0x0023E470"); __asm__(".equ Resize__4Menui,0x0023E2B0");
__asm__(".equ __builtin_delete,0x002AC6B0"); __asm__(".equ menu_vtable,0x004D5D48");
struct M{char p[0x1c];const void*v;};
extern "C" void d(M*s,int f) __asm__("_$_19MenuPerturbDuration");
void d(M*s,int f){s->v=menu_vtable;close_menu(s,true);resize_menu(s,0);if(f&1){object_delete(s);__asm__ __volatile__("" : : : "memory");}}
#endif
