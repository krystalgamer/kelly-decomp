// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002DDEE0)
// 0x002DDEE0 collide_segment_region__FRC8vector3dT0PC6regionR8vector3dT3UiT0
struct vector3d { float x; float y; float z; }; class region;
class terrain { public: bool find_intersection(const vector3d &p1, const vector3d &p2, vector3d &hit, vector3d &normal); };
__asm__(".equ find_intersection__7terrainRC8vector3dT1R8vector3dT3, 0x002E8DD8");
struct world_layout { char padding[0xec]; terrain *terrain_ptr; };
extern world_layout *world_ptr;
__asm__(".equ world_ptr, 0x00431A8C");
bool collide_segment_region(const vector3d &p1, const vector3d &p2, const region *reg, vector3d &hit, vector3d &normal, unsigned int flags, const vector3d &extra) { return world_ptr->terrain_ptr->find_intersection(p1, p2, hit, normal); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002E14C8)
// 0x002E14C8 det3__FG8vector3dN20
struct vector3d { float x,y,z; };
extern "C" float determinant3(
    const vector3d *first,const vector3d *second,const vector3d *third
) __asm__("det3__FG8vector3dN20");
float determinant3(
    const vector3d *first,const vector3d *second,const vector3d *third
) {
    return first->x*(second->y*third->z-second->z*third->y)
         + first->y*(second->z*third->x-second->x*third->z)
         + first->z*(second->x*third->y-second->y*third->x);
}
#endif
