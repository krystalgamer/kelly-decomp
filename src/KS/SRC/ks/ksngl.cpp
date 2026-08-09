// Matching decompilation blocks selected by generated build shims.


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
void set_perspective_matrix(
    float hfov,
    float center_x,
    float center_y,
    float near_z,
    float far_z,
    float z_min,
    float z_max,
    int render_width,
    int render_height
) __asm__("nglSetPerspectiveMatrix__Ffffffffii");

void ksnglSetPerspectiveMatrix(
    float hfov,
    float center_x,
    float center_y,
    float near_z,
    float far_z
) {
    void (*set_perspective)(
        float, float, float, float, float, float, float, int, int
    ) = set_perspective_matrix;
    set_perspective(
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
}
