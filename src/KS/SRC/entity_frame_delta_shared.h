#ifndef KELLY_DECOMP_ENTITY_FRAME_DELTA_SHARED_H
#define KELLY_DECOMP_ENTITY_FRAME_DELTA_SHARED_H

class frame_vector4 {
public:
    float x;
    float y;
    float z;
    float w;

    inline frame_vector4 &operator=(const frame_vector4 &other) {
        x = other.x;
        y = other.y;
        z = other.z;
        w = other.w;
        return *this;
    }
};

class frame_po {
    frame_vector4 x __attribute__((aligned(16)));
    frame_vector4 y;
    frame_vector4 z;
    frame_vector4 w;

public:
    inline frame_po &operator=(const frame_po &other) {
        x = other.x;
        y = other.y;
        z = other.z;
        w = other.w;
        return *this;
    }
};

struct movement_info {
    bool frame_delta_valid;
    bool last_frame_delta_valid;
    float frame_time;
    char alignment[4];
    frame_po frame_delta;
};

class frame_delta_entity {
    char state[336];
    movement_info *movement;

public:
    void invalidate_frame_delta()
        __asm__("invalidate_frame_delta__6entity");
};

extern const frame_po po_identity_matrix;
__asm__(".equ po_identity_matrix, 0x00513890");

#endif
