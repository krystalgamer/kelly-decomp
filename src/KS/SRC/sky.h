// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002B93F0)
// 0x002B93F0 is_a_sky__C3sky
class sky {
public:
    bool is_a_sky() const;
};

bool sky::is_a_sky() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B9378)
// 0x002B9378 _$_3sky
extern "C" void EntityDtor(void *self) __asm__("_$_6entity");
extern "C" void SkyDtor(void *self) __asm__("_$_3sky");
__asm__(".equ _$_6entity, 0x001298C8");
void SkyDtor(void *self) { EntityDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B9398)
// 0x002B9398 __tf3sky
#include "KS/SRC/rtti_shared.h"
extern "C" void **SkyBaseRtti() __asm__("__tf6entity");
extern "C" void *sky_type[] __asm__("__ti3sky");
extern "C" const char sky_name[];
extern "C" void *sky_base_type[] __asm__("__ti6entity");
__asm__(".equ __tf6entity, 0x001449C8");
__asm__(".equ __ti3sky, 0x005A3E90");
__asm__(".equ sky_name, 0x004FE5E8");
__asm__(".equ __ti6entity, 0x005A27C8");
extern "C" void **SkyRtti() __asm__("__tf3sky");
void **SkyRtti()
{
    if (!sky_type[0]) {
        SkyBaseRtti();
        __rtti_si(sky_type, sky_name, sky_base_type);
    }
    return sky_type;
}
#endif
