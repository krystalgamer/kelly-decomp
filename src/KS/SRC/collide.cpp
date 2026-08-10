// Matching decompilation blocks selected by generated build shims.


// 0x002DDEE0 collide_segment_region__FRC8vector3dT0PC6regionR8vector3dT3UiT0
#include "KS/SRC/algebra.h"
#include "KS/SRC/terrain.h"
#include "KS/SRC/wds.h"

class region;
__asm__(".equ find_intersection__7terrainRC8vector3dT1R8vector3dT3, 0x002E8DD8");
bool collide_segment_region(
    const vector3d &start,
    const vector3d &end,
    const region *region_data,
    vector3d &hit,
    vector3d &normal,
    unsigned int flags,
    const vector3d &relative_velocity)
{
    return g_world_ptr->get_the_terrain().find_intersection(
        start, end, hit, normal);
}

#if defined(KELLY_DECOMP_FUNCTION_002E14C8)
// 0x002E14C8 det3__FG8vector3dN20
#include "KS/SRC/algebra.h"

float det3(vector3d first,vector3d second,vector3d third) {
    return first.x*(second.y*third.z-second.z*third.y)
         + first.y*(second.z*third.x-second.x*third.z)
         + first.z*(second.x*third.y-second.y*third.x);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002DCEF0)
// 0x002DCEF0 collide_polygon_polygon__FPC5cfacePC7cg_meshT0T1R8vector3d
typedef unsigned short vert_ref;

class vector3d
{
public:
  float x, y, z;
};

class vert
{
public:
  const vector3d& get_point() const { return point; }

private:
  vector3d point __attribute__((aligned(16)));
  int num_bones;
  unsigned char bone_ids[4];
  float bone_weights[4];
};

class cface
{
public:
  vert_ref get_vert_ref(int i) const { return vert_refs[i]; }

private:
  vert_ref vert_refs[3];
};

class cg_mesh
{
public:
  const vert& get_vert(vert_ref i) const { return verts[i]; }

private:
  char padding[24];
  vert* verts;
};

bool collide_polygon_segment(const cface*, const cg_mesh*,
                             const vector3d&, const vector3d&, vector3d&);

__asm__(".equ collide_polygon_segment__FPC5cfacePC7cg_meshRC8vector3dT2R8vector3d, 0x002DC880");

bool collide_polygon_polygon( const cface* f1, const cg_mesh* m1,
                              const cface* f2, const cg_mesh* m2,
                              vector3d& hit_loc )
{
  const vector3d& v1_0 = m1->get_vert(f1->get_vert_ref(0)).get_point();
  const vector3d& v1_1 = m1->get_vert(f1->get_vert_ref(1)).get_point();
  const vector3d& v1_2 = m1->get_vert(f1->get_vert_ref(2)).get_point();

  const vector3d& v2_0 = m2->get_vert(f2->get_vert_ref(0)).get_point();
  const vector3d& v2_1 = m2->get_vert(f2->get_vert_ref(1)).get_point();
  const vector3d& v2_2 = m2->get_vert(f2->get_vert_ref(2)).get_point();

  if ( collide_polygon_segment( f1, m1, v2_0, v2_1, hit_loc ) ||
       collide_polygon_segment( f1, m1, v2_1, v2_2, hit_loc ) ||
       collide_polygon_segment( f1, m1, v2_2, v2_0, hit_loc ) )
    return true;
  else if ( collide_polygon_segment( f2, m2, v1_0, v1_1, hit_loc ) ||
            collide_polygon_segment( f2, m2, v1_1, v1_2, hit_loc ) ||
            collide_polygon_segment( f2, m2, v1_2, v1_0, hit_loc ) )
    return true;
  else
    return false;
}
#endif
