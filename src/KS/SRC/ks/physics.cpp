// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002419E0)
// 0x002419E0 GetState__18PhysicsObjectClassPf
#include "KS/SRC/ks/physics.h"

void PhysicsObjectClass::GetState(float *s)
{
	// get the position //
	*(s++) = this->position.x;
	*(s++) = this->position.y;
	*(s++) = this->position.z;

  // linear momentum //
	*(s++) = this->linMom.x;
	*(s++) = this->linMom.y;
	*(s++) = this->linMom.z;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00241A28)
// 0x00241A28 SetState__18PhysicsObjectClassPf
struct vector3d{float x,y,z;vector3d&operator=(const vector3d&o){x=o.x;y=o.y;z=o.z;return*this;}};struct Physics{char pad0[4];float inverseMass;char pad1[12];vector3d velo;vector3d pos;char pad2[68];vector3d linMom;};extern "C" void set_state(Physics*self,float*s)__asm__("SetState__18PhysicsObjectClassPf");void set_state(Physics*self,float*s){self->pos.x=*s++;self->pos.y=*s++;self->pos.z=*s++;self->linMom.x=*s++;self->linMom.y=*s++;self->linMom.z=*s++;vector3d temp;temp.x=self->linMom.x*self->inverseMass;temp.y=self->linMom.y*self->inverseMass;temp.z=self->linMom.z*self->inverseMass;self->velo=temp;}
#endif
