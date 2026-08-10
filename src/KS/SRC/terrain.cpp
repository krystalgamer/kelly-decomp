// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002EC610)
// 0x002EC610 find_sector__C7terrainRC8vector3d
#include "KS/SRC/terrain.h"

__asm__(".equ find_sector__C6tree_tRC8vector3d, 0x002E83D0");
sector *terrain::find_sector(const vector3d &position) const
{
    return tree->find_sector(position);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002E81D8)
// 0x002E81D8 __10partition3RC10partition3
#include "KS/SRC/terrain.h"

partition3::partition3(const partition3 &other)
  : _H(other),
    my_sector(other.my_sector)
{}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002E8DD8)
// 0x002E8DD8 find_intersection__7terrainRC8vector3dT1R8vector3dT3
#include "KS/SRC/terrain.h"

bool terrain::find_intersection(
    const vector3d &p0, const vector3d &p1,
    vector3d &intersection, vector3d &normal
)
{
    vector3d my_normal;
    return tree_recurse_intersection(
        tree, tree_t::branch(tree->begin()), p0, p1,
        my_normal, intersection, normal
    );
}
#endif

// Source implementation boundary.
// 0x002E81C8 __10partition3
#include "KS/SRC/terrain.h"
partition3::partition3() {
    my_sector = 0;
}
