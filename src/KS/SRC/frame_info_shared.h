#ifndef KELLY_DECOMP_FRAME_INFO_SHARED_H
#define KELLY_DECOMP_FRAME_INFO_SHARED_H

typedef float time_value_t;

class frame_info {
    time_value_t age;
    int ifl_frame_boost;
    int ifl_frame_locked;
    static float ifl_frame_rate;

public:
    int time_to_frame_locked(int period = 0) const;
    int time_to_frame(int period = 0) const;
};

__asm__(".equ _10frame_info$ifl_frame_rate, 0x0046B5A8");

#endif
