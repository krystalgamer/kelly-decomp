#ifndef KELLY_DECOMP_TRAIL_SHARED_H
#define KELLY_DECOMP_TRAIL_SHARED_H

#include "KS/SRC/vector3d_shared.h"

typedef unsigned int u_int;

struct trail_node_t {
    u_int valid;
    float age;
    float uv;
};

struct spray_control_t {
    vector3d current __attribute__((aligned(16)));
    vector3d start __attribute__((aligned(16)));
    vector3d *trailpt;
    trail_node_t *trail_node;
    vector3d vel;
    float seed;
    float age;
    float life;
    int valid;
};

class trail {
protected:
    void spraypt_pos(spray_control_t *control_point);

public:
    void spraypt_update(spray_control_t *control_points, u_int max);
};

__asm__(".equ spraypt_pos__5trailP15spray_control_t, 0x00364A20");

#endif
