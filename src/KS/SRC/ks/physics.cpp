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
