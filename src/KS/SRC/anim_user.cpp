// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001132F8)
// 0x001132F8 interpolate__Ct10linear_key1ZfRCt10linear_key1Zff
template <class Type> class linear_key { float time; Type value; public: Type interpolate(const linear_key<Type> &other, float ratio) const; };
template <> float linear_key<float>::interpolate(const linear_key<float> &other, float ratio) const { return value * (1.0f - ratio) + other.value * ratio; }
#endif
