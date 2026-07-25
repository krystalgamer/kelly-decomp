// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003483A8)
// 0x003483A8 non_affine_slow_xform__C2poRC8vector3d
struct vector4d{float x,y,z,w;};struct matrix4x4{vector4d x,y,z,w;};struct vector3d{float x,y,z;vector3d(){}vector3d(const vector3d&v){x=v.x;y=v.y;z=v.z;}};class po{matrix4x4 m;public:vector3d non_affine_slow_xform(const vector3d&)const __asm__("non_affine_slow_xform__C2poRC8vector3d");};vector3d po::non_affine_slow_xform(const vector3d&v)const{vector3d result;result.x=m.x.x*v.x+m.y.x*v.y+m.z.x*v.z;result.y=m.x.y*v.x+m.y.y*v.y+m.z.y*v.z;result.z=m.x.z*v.x+m.y.z*v.y+m.z.z*v.z;return result;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00348F58)
// 0x00348F58 non_affine_inverse_xform__C2poRC8vector3d
struct vector4d{float x,y,z,w;};struct matrix4x4{vector4d x,y,z,w;};struct vector3d{float x,y,z;vector3d(){}vector3d(const vector3d&v){x=v.x;y=v.y;z=v.z;}};class po{matrix4x4 m;public:vector3d non_affine_inverse_xform(const vector3d&)const __asm__("non_affine_inverse_xform__C2poRC8vector3d");};vector3d po::non_affine_inverse_xform(const vector3d&v)const{vector3d result;result.x=m.x.x*v.x+m.x.y*v.y+m.x.z*v.z;result.y=m.y.x*v.x+m.y.y*v.y+m.y.z*v.z;result.z=m.z.x*v.x+m.z.y*v.y+m.z.z*v.z;return result;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003482F8)
// 0x003482F8 slow_xform__C2poRC8vector3d
struct vector3d{float x,y,z;vector3d(){}vector3d(const vector3d&v){x=v.x;y=v.y;z=v.z;}};struct vector4d{float x,y,z,w;};struct matrix4x4{vector4d x,y,z,w;};class po{matrix4x4 m;public:vector3d slow_xform(const vector3d&)const;};vector3d po::slow_xform(const vector3d&sv)const{vector3d result;result.x=m.x.x*sv.x+m.y.x*sv.y+m.z.x*sv.z+m.w.x;result.y=m.x.y*sv.x+m.y.y*sv.y+m.z.y*sv.z+m.w.y;result.z=m.x.z*sv.x+m.y.z*sv.y+m.z.z*sv.z+m.w.z;return result;}
#endif
