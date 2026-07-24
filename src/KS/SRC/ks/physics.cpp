// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002419E0)
// 0x002419E0 GetState__18PhysicsObjectClassPf
typedef float rational_t;

class vector3d
{
public:
  typedef rational_t T;
  T x,y,z;
};

class po
{
  float m[16] __attribute__((aligned(16)));
};

class PhysicsObjectClass
{
public:
  void GetState (float *s);

  float mass;
  float inverseMass;
  vector3d force;
  vector3d velo;
  vector3d pos;
  po my_po;
  vector3d linMom;
};

void PhysicsObjectClass::GetState(float *s)
{
	// get the position //
	*(s++) = this->pos.x;
	*(s++) = this->pos.y;
	*(s++) = this->pos.z;

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
