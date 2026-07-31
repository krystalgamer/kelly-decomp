// Matching decompilation blocks selected by generated build shims.


// 0x00122890 remove_child__14link_interfaceP4bone
#include "KS/SRC/link_interface.h"

__asm__(".equ clear_parent__14link_interface, 0x001228B0");
class bone { char padding[0x68]; public: link_interface* link; };
void link_interface::remove_child(bone* child) { child->link->clear_parent(); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x001446C0 __tf14link_interface
#include "KS/SRC/link_interface.h"

extern "C" void **link_base_rtti() __asm__("__tf14bone_interface");
extern "C" void *link_base_type[] __asm__("__ti14bone_interface");
extern "C" void *link_type[] __asm__("__ti14link_interface");
extern "C" const char link_name[];

__asm__(".equ __tf14bone_interface, 0x00146490");
__asm__(".equ __ti14bone_interface, 0x005A2908");
__asm__(".equ __ti14link_interface, 0x005A27A8");
__asm__(".equ link_name, 0x004CEA30");

extern "C" void **link_rtti() __asm__("__tf14link_interface");
void **link_rtti()
{
    if (!link_type[0]) {
        link_base_rtti();
        __rtti_si(link_type, link_name, link_base_type);
    }
    return link_type;
}
