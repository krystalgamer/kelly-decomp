// Matching decompilation blocks selected by generated build shims.


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
