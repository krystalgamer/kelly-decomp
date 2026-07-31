#ifndef MBI_H
#define MBI_H

#include "KS/SRC/algebra.h"

struct quaternion {
    float value[4];
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
    vector3d motion_trail_head;
    vector3d motion_trail_tail;
    unsigned int trail_color;
    int trail_min_alpha;
    int trail_max_alpha;
    int blur_min_alpha;
    int blur_max_alpha;
    int num_blur_images;
    float blur_spread;
    float last_motion_recording;
};

__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ __builtin_vec_delete, 0x002AC6D0");

#endif
