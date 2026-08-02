#include "KS/SRC/lensflare.h"

// 0x002FF8D0 render_passes_needed__C9lensflare
render_flavor_t lensflare::render_passes_needed() const
{
    return RENDER_TRANSLUCENT_PORTION;
}

// 0x002FF8D8 possibly_active__C9lensflare
bool lensflare::possibly_active() const
{
    return true;
}
