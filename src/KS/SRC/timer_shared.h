#ifndef KELLY_DECOMP_TIMER_SHARED_H
#define KELLY_DECOMP_TIMER_SHARED_H

extern float TIMER_FrameSec;

inline float TIMER_GetFrameSec()
{
    return TIMER_FrameSec;
}

__asm__(".equ TIMER_FrameSec, 0x0046B280");

#endif
