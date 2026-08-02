// capsule definitions extracted by generated one-function shims.


// 0x002D7BA0 estimate_physical_properties__17collision_capsuleP6entityf
#include "KS/SRC/capsule.h"

void collision_capsule::estimate_physical_properties(entity* body, float density) {
}

// 0x002D7F38 apply_radius_scale__17collision_capsulef
#include "KS/SRC/capsule.h"

void collision_capsule::apply_radius_scale(float scale) {
    absolute_capsule.radius = relative_capsule.radius * scale;
}

// 0x002D7688 __17collision_capsuleP6entity
#include "KS/SRC/capsule.h"
__asm__(".equ __18collision_geometry, 0x002D8638");
__asm__(".equ compute_dimensions__17collision_capsule, 0x002D7748");
__asm__(".equ _vt$17collision_capsule, 0x004F30A0");
collision_capsule::collision_capsule(entity *new_owner)
{
    owner = new_owner;
    compute_dimensions();
}

// 0x002D7F48 render__C17collision_capsule
#include "KS/SRC/capsule.h"

void collision_capsule::render() const {
}

// 0x002D76D8 _$_17collision_capsule
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_18collision_geometry");
extern const char base_vtable[];
__asm__(".equ _$_18collision_geometry, 0x002D8658");
__asm__(".equ base_vtable, 0x004F30A0");
struct object_layout { char padding[0x8]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_17collision_capsule");
void DerivedDtor(void *self, int deleting) { ((object_layout *)self)->vtable = base_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x002D7E38 get_min_extent__C17collision_capsuleP8vector3d
struct vector3d{float x,y,z;};struct collision_capsule{char pad[40];vector3d base;vector3d end;float radius;void extent(vector3d*v)const __asm__("get_min_extent__C17collision_capsuleP8vector3d");};void collision_capsule::extent(vector3d*v)const{if(base.x<end.x)v->x=base.x-radius;else v->x=end.x-radius;if(base.y<end.y)v->y=base.y-radius;else v->y=end.y-radius;if(base.z<end.z)v->z=base.z-radius;else v->z=end.z-radius;}

// 0x002D7EB8 get_max_extent__C17collision_capsuleP8vector3d
struct vector3d{float x,y,z;};struct collision_capsule{char pad[40];vector3d base;vector3d end;float radius;void extent(vector3d*v)const __asm__("get_max_extent__C17collision_capsuleP8vector3d");};void collision_capsule::extent(vector3d*v)const{if(base.x>end.x)v->x=base.x+radius;else v->x=end.x+radius;if(base.y>end.y)v->y=base.y+radius;else v->y=end.y+radius;if(base.z>end.z)v->z=base.z+radius;else v->z=end.z+radius;}

// Source implementation boundary.
// 0x002FF4D8 get_type__C17collision_capsule
#include "KS/SRC/capsule.h"

unsigned int collision_capsule::get_type() const {
    return 1;
}

// 0x002FF578 get_core_radius__C17collision_capsule
#include "KS/SRC/capsule.h"

float collision_capsule::get_core_radius() const {
    return absolute_capsule.radius;
}

// 0x002FF4E0 get_radius__C17collision_capsule
extern "C" float sqrtf(float);asm(".equ sqrtf,0x003C7058");class vector3d{public:float x,y,z;vector3d(){}vector3d(float a,float b,float c):x(a),y(b),z(c){}vector3d operator-(const vector3d&v)const{return vector3d(x-v.x,y-v.y,z-v.z);}float length()const{return sqrtf(x*x+y*y+z*z);}};struct capsule{vector3d base,end;float radius;};class collision_capsule{char p[40];capsule abs_cap;public:float get_radius()const __asm__("get_radius__C17collision_capsule");};float collision_capsule::get_radius()const{return abs_cap.radius+(abs_cap.base-abs_cap.end).length();}
