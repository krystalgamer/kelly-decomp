// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001132F8)
// 0x001132F8 interpolate__Ct10linear_key1ZfRCt10linear_key1Zff
template <class Type> class linear_key { float time; Type value; public: Type interpolate(const linear_key<Type> &other, float ratio) const; };
template <> float linear_key<float>::interpolate(const linear_key<float> &other, float ratio) const { return value * (1.0f - ratio) + other.value * ratio; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001133A8)
// 0x001133A8 interpolate__Ct10linear_key1Z10quaternionRCt10linear_key1Z10quaternionf
struct quaternion {
    float x;
    float y;
    float z;
    float w;
};

struct quaternion_key {
    float time;
    quaternion value;
};

extern "C" void Slerp(
    quaternion *result,
    const quaternion *first,
    const quaternion *second,
    float ratio
) __asm__("slerp__FRC10quaternionT0f");
__asm__(".equ slerp__FRC10quaternionT0f, 0x001DED90");

extern "C" quaternion *InterpolateQuaternionKey(
    quaternion *result,
    const quaternion_key *self,
    const quaternion_key &other,
    float ratio
) __asm__("interpolate__Ct10linear_key1Z10quaternionRCt10linear_key1Z10quaternionf");

quaternion *InterpolateQuaternionKey(
    quaternion *result,
    const quaternion_key *self,
    const quaternion_key &other,
    float ratio
) {
    Slerp(result, &self->value, &other.value, ratio);
    return result;
}
#endif
