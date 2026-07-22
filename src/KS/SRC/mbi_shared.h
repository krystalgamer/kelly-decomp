#ifndef KELLY_DECOMP_MBI_SHARED_H
#define KELLY_DECOMP_MBI_SHARED_H

struct quaternion {
    float value[4];
};

struct vector3d {
    float value[3];
};

struct qt {
    quaternion q;
    vector3d t;
};

class motion_blur_info {
public:
    motion_blur_info(int max_trail_length);
    ~motion_blur_info();

    int motion_trail_start;
    int motion_trail_end;
    int motion_trail_count;
    int motion_trail_length;
    int buffer_size;
    qt *motion_trail_buffer;
};

__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ __builtin_vec_delete, 0x002AC6D0");

#endif
