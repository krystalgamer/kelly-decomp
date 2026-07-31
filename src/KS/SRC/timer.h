#ifndef TIMER_H
#define TIMER_H

extern float TIMER_FrameSec;
extern float TIMER_TotalSec;

inline float TIMER_GetFrameSec()
{
    return TIMER_FrameSec;
}

inline float TIMER_GetTotalSec()
{
    return TIMER_TotalSec;
}

__asm__(".equ TIMER_FrameSec, 0x0046B280");
__asm__(".equ TIMER_TotalSec, 0x0046B27C");

#endif
