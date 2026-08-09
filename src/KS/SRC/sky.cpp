// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0028CDC8)
// 0x0028CDC8 __3skyR10chunk_fileRC9entity_id15entity_flavor_tUi
#include "KS/SRC/sky.h"

__asm__(".equ __6entityR10chunk_fileRC9entity_id15entity_flavor_tUi, 0x0012AB18");

sky::sky(
    chunk_file &file,
    const entity_id &id,
    entity_flavor_t flavor,
    unsigned int flags
) : entity(file, id, flavor, flags) {}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028CD90)
// 0x0028CD90 __3skyRC9entity_id15entity_flavor_t
#include "KS/SRC/sky.h"

__asm__(
    ".equ __6entityRC9entity_id15entity_flavor_tUi, 0x00129778"
);
__asm__(".equ _vt$3sky, 0x004F9730");

sky::sky(const entity_id &id, entity_flavor_t flavor)
  : entity(id, flavor, 0)
{}
#endif

// Source implementation boundary.
// 0x002B93F0 is_a_sky__C3sky
#include "KS/SRC/sky.h"
bool sky::is_a_sky() const
{
    return true;
}
