// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002FF880)
// 0x002FF880 __tf9lensflare
#include "KS/SRC/rtti_shared.h"
extern "C" void **LensflareBaseRtti() __asm__("__tf6entity");
extern "C" void *lensflare_type[] __asm__("__ti9lensflare");
extern "C" const char lensflare_name[];
extern "C" void *lensflare_base_type[] __asm__("__ti6entity");
__asm__(".equ __tf6entity, 0x001449C8");
__asm__(".equ __ti9lensflare, 0x005A3FC0");
__asm__(".equ lensflare_name, 0x004F4C30");
__asm__(".equ __ti6entity, 0x005A27C8");
extern "C" void **LensflareRtti() __asm__("__tf9lensflare");
void **LensflareRtti()
{
    if (!lensflare_type[0]) {
        LensflareBaseRtti();
        __rtti_si(lensflare_type, lensflare_name, lensflare_base_type);
    }
    return lensflare_type;
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_002FF8D0)
// 0x002FF8D0 render_passes_needed__C9lensflare
class lensflare {
public:
    unsigned int render_passes_needed() const;
};

unsigned int lensflare::render_passes_needed() const {
    return 2;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF8D8)
// 0x002FF8D8 possibly_active__C9lensflare
class lensflare {
public:
    bool possibly_active() const;
};

bool lensflare::possibly_active() const {
    return true;
}
#endif
