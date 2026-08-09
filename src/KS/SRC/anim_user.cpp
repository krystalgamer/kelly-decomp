// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001132F8)
// 0x001132F8 interpolate__Ct10linear_key1ZfRCt10linear_key1Zff
#include "KS/SRC/linear_anim.h"

template <> float linear_key<float>::interpolate(const linear_key<float> &other, float ratio) const { return key_value * (1.0f - ratio) + other.key_value * ratio; }
#endif

// 0x001133A8 interpolate__Ct10linear_key1Z10quaternionRCt10linear_key1Z10quaternionf
#include "KS/SRC/algebra.h"
#include "KS/SRC/linear_anim.h"

quaternion slerp(
    const quaternion &first,
    const quaternion &second,
    float ratio
) __asm__("slerp__FRC10quaternionT0f");
__asm__(".equ slerp__FRC10quaternionT0f, 0x001DED90");

template <>
quaternion linear_key<quaternion>::interpolate(
    const linear_key<quaternion> &other,
    float ratio
) const {
    return slerp(get_value(), other.get_value(), ratio);
}

#if defined(KELLY_DECOMP_FUNCTION_00113320)
// 0x00113320 interpolate__Ct10linear_key1Z8vector3dRCt10linear_key1Z8vector3df
struct vector3d{float x,y,z;vector3d(){}vector3d(const vector3d&v){x=v.x;y=v.y;z=v.z;}vector3d(float X,float Y,float Z){x=X;y=Y;z=Z;}vector3d&operator=(const vector3d&v){x=v.x;y=v.y;z=v.z;return *this;}};inline vector3d operator*(const vector3d&v,float r){return vector3d(r*v.x,r*v.y,r*v.z);}inline vector3d operator+(const vector3d&a,const vector3d&b){return vector3d(a.x+b.x,a.y+b.y,a.z+b.z);}struct linear_key{float time;vector3d value;const vector3d&get_value()const{return value;}vector3d interpolate(const linear_key&b,float r)const __asm__("interpolate__Ct10linear_key1Z8vector3dRCt10linear_key1Z8vector3df");};vector3d linear_key::interpolate(const linear_key&b,float r)const{return get_value()*(1.0f-r)+b.get_value()*r;}
#endif
