// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DE758)
// 0x001DE758 make_translate__9matrix4x4RC8vector3d
struct vector3d { float x,y,z; };
struct vector4d { float x,y,z,w; };
class matrix4x4 {
public:
    vector4d x,y,z,w;
    void make_translate(const vector3d &translation);
};
void matrix4x4::make_translate(const vector3d &t) {
    x.x=1.0f; x.y=0.0f; x.z=0.0f; x.w=0.0f;
    y.x=0.0f; y.y=1.0f; y.z=0.0f; y.w=0.0f;
    z.x=0.0f; z.y=0.0f; z.z=1.0f; z.w=0.0f;
    w.x=t.x; w.y=t.y; w.z=t.z; w.w=1.0f;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DE920)
// 0x001DE920 make_scale__9matrix4x4RC8vector3d
struct vector3d { float x,y,z; };
struct vector4d { float x,y,z,w; };
class matrix4x4 {
public:
    vector4d x,y,z,w;
    void make_scale(const vector3d &scale);
};
void matrix4x4::make_scale(const vector3d &s) {
    x.x=s.x; y.x=0.0f; z.x=0.0f; w.x=0.0f;
    x.y=0.0f; y.y=s.y; z.y=0.0f; w.y=0.0f;
    x.z=0.0f; y.z=0.0f; z.z=s.z; w.z=0.0f;
    x.w=0.0f; y.w=0.0f; z.w=0.0f; w.w=1.0f;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DF280)
// 0x001DF280 det3__FPA2_Cf
extern "C" float det3(const float m[3][3]) __asm__("det3__FPA2_Cf");float det3(const float m[3][3]){return m[0][0]*m[1][1]*m[2][2]+m[0][1]*m[1][2]*m[2][0]+m[0][2]*m[1][0]*m[2][1]-m[0][2]*m[1][1]*m[2][0]-m[0][0]*m[1][2]*m[2][1]-m[0][1]*m[1][0]*m[2][2];}
#endif
