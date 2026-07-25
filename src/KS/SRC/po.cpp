// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003483A8)
// 0x003483A8 non_affine_slow_xform__C2poRC8vector3d
struct vector4d{float x,y,z,w;};struct matrix4x4{vector4d x,y,z,w;};struct vector3d{float x,y,z;vector3d(){}vector3d(const vector3d&v){x=v.x;y=v.y;z=v.z;}};class po{matrix4x4 m;public:vector3d non_affine_slow_xform(const vector3d&)const __asm__("non_affine_slow_xform__C2poRC8vector3d");};vector3d po::non_affine_slow_xform(const vector3d&v)const{vector3d result;result.x=m.x.x*v.x+m.y.x*v.y+m.z.x*v.z;result.y=m.x.y*v.x+m.y.y*v.y+m.z.y*v.z;result.z=m.x.z*v.x+m.y.z*v.y+m.z.z*v.z;return result;}
#endif
