// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003819F8)
// 0x003819F8 KSNGL_ReInit__Fv
void KSNGL_ReInit() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003818F8)
// 0x003818F8 ksnglSetViewport__FUiUiUiUi
void nglSetViewport(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2);
__asm__(".equ nglSetViewport__FUiUiUiUi, 0x00398558");
void ksnglSetViewport(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2) { nglSetViewport(x1, y1, x2, y2); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00381948)
// 0x00381948 ksnglSetOrthoMatrix__Fffffff
void nglSetOrthoMatrix(float cx, float cy, float nearz, float farz, float zmin, float zmax);
__asm__(".equ nglSetOrthoMatrix__Fffffff, 0x00398FA8");
void ksnglSetOrthoMatrix(float cx, float cy, float nearz, float farz, float zmin, float zmax) { nglSetOrthoMatrix(cx, cy, nearz, farz, zmin, zmax); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00381918)
// 0x00381918 ksnglSetPerspectiveMatrix__Ffffff
void nglSetPerspectiveMatrix(
    float hfov,
    float center_x,
    float center_y,
    float near_z,
    float far_z,
    float z_min,
    float z_max,
    int render_width,
    int render_height
);

__asm__(".equ nglSetPerspectiveMatrix__Ffffffffii, 0x00398C40");

void ksnglSetPerspectiveMatrix(
    float hfov,
    float center_x,
    float center_y,
    float near_z,
    float far_z
) {
    nglSetPerspectiveMatrix(
        hfov,
        center_x,
        center_y,
        near_z,
        far_z,
        0.0f,
        1.0f,
        0,
        0
    );
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
