// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_001446C0)
#include "KS/SRC/link_interface_shared.h"

extern "C" void **link_base_rtti() __asm__("__tf14bone_interface");
extern "C" void *link_base_type[] __asm__("__ti14bone_interface");
extern "C" void *link_type[] __asm__("__ti14link_interface");
extern "C" const char link_name[];

__asm__(".equ __tf14bone_interface, 0x00146490");
__asm__(".equ __ti14bone_interface, 0x005A2908");
__asm__(".equ __ti14link_interface, 0x005A27A8");
__asm__(".equ link_name, 0x004CEA30");

// 0x001446C0 __tf14link_interface
extern "C" void **link_rtti() __asm__("__tf14link_interface");
void **link_rtti()
{
    if (!link_type[0]) {
        link_base_rtti();
        __rtti_si(link_type, link_name, link_base_type);
    }
    return link_type;
}
#endif
