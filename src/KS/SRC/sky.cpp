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
class entity_id {
};

enum entity_flavor_t {
    ENTITY_FLAVOR_ZERO
};

extern "C" void EntityCtor(
    void *self,
    const entity_id &id,
    entity_flavor_t flavor,
    unsigned int flags
) __asm__("__6entityRC9entity_id15entity_flavor_tUi");

__asm__(
    ".equ __6entityRC9entity_id15entity_flavor_tUi, 0x00129778"
);

extern char sky_vtable[];
__asm__(".equ sky_vtable, 0x004F9730");

class sky {
    char padding[8];
    void *vtable;

public:
    sky(const entity_id &id, entity_flavor_t flavor);
};

sky::sky(const entity_id &id, entity_flavor_t flavor)
{
    EntityCtor(this, id, flavor, 0);
    vtable = sky_vtable;
}
#endif

// Source implementation boundary.
// 0x002B93F0 is_a_sky__C3sky
#include "KS/SRC/sky.h"
bool sky::is_a_sky() const
{
    return true;
}
