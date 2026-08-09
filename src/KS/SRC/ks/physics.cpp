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

#if defined(KELLY_DECOMP_FUNCTION_002418A0)
// 0x002418A0 _$_18PhysicsObjectClass
extern "C" int terminate(void*) __asm__("Terminate__15RungeKuttaClass");extern "C" void object_delete(void*) __asm__("__builtin_delete");__asm__(".equ Terminate__15RungeKuttaClass,0x002413E0");__asm__(".equ __builtin_delete,0x002AC6B0");extern void*rk_vtable;extern void*ode_vtable;__asm__(".equ rk_vtable,0x004ED528");__asm__(".equ ode_vtable,0x004ED560");struct ode{char p0[12];void*vtable;};struct physics{char p0[124];ode solver;};extern "C" void physics_dtor(physics*self,int deleting) __asm__("_$_18PhysicsObjectClass");void physics_dtor(physics*self,int deleting){ode*o=&self->solver;terminate(o);o->vtable=&rk_vtable;terminate(o);o->vtable=&ode_vtable;if(deleting&1){object_delete(self);int dead;__asm__("" : "=r"(dead));}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00241AA8)
// 0x00241AA8 DerivFunc__18PhysicsObjectClassP18PhysicsObjectClassfPfT3
extern "C" void set_state(void*,float*) __asm__("SetState__18PhysicsObjectClassPf");__asm__(".equ SetState__18PhysicsObjectClassPf,0x00241A28");struct vector3d{float x,y,z;};struct physics{float mass,inverseMass;vector3d force,velo,pos;};extern "C" void deriv(physics*phyobj,float time,float*in,float*out) __asm__("DerivFunc__18PhysicsObjectClassP18PhysicsObjectClassfPfT3");void deriv(physics*phyobj,float time,float*in,float*out){set_state(phyobj,in);*(out++)=phyobj->velo.x;*(out++)=phyobj->velo.y;*(out++)=phyobj->velo.z;*(out++)=phyobj->force.x;*(out++)=phyobj->force.y;*(out++)=phyobj->force.z;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00241A28)
// 0x00241A28 SetState__18PhysicsObjectClassPf
struct vector3d{float x,y,z;vector3d&operator=(const vector3d&o){x=o.x;y=o.y;z=o.z;return*this;}};struct Physics{char pad0[4];float inverseMass;char pad1[12];vector3d velo;vector3d pos;char pad2[68];vector3d linMom;};extern "C" void set_state(Physics*self,float*s)__asm__("SetState__18PhysicsObjectClassPf");void set_state(Physics*self,float*s){self->pos.x=*s++;self->pos.y=*s++;self->pos.z=*s++;self->linMom.x=*s++;self->linMom.y=*s++;self->linMom.z=*s++;vector3d temp;temp.x=self->linMom.x*self->inverseMass;temp.y=self->linMom.y*self->inverseMass;temp.z=self->linMom.z*self->inverseMass;self->velo=temp;}
#endif
