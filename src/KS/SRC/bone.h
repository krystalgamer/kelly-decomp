// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00144718)
#include "KS/SRC/bone_shared.h"

extern "C" void **bone_base_rtti() __asm__("__tf9signaller");
extern "C" void *bone_base_type[] __asm__("__ti9signaller");
extern "C" void *bone_type[] __asm__("__ti4bone");
extern "C" const char bone_name[];

__asm__(".equ __tf9signaller, 0x0035FBA8");
__asm__(".equ __ti9signaller, 0x00512028");
__asm__(".equ __ti4bone, 0x005A27B8");
__asm__(".equ bone_name, 0x004CEA48");

// 0x00144718 __tf4bone
extern "C" void **bone_rtti() __asm__("__tf4bone");
void **bone_rtti()
{
    if (!bone_type[0]) {
        bone_base_rtti();
        __rtti_si(bone_type, bone_name, bone_base_type);
    }
    return bone_type;
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_001447E8)
// 0x001447E8 get_bone_idx__4bone
class bone {
public:
    int get_bone_idx();
};

int bone::get_bone_idx() {
    return -1;
}
#endif
