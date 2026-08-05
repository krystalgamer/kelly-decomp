#ifndef TIMER_H
#define TIMER_H

extern float TIMER_FrameSec;
extern float TIMER_TotalSec;
extern float TIMER_LevelSec;

inline float TIMER_GetFrameSec()
{
    return TIMER_FrameSec;
}

inline float TIMER_GetTotalSec()
{
    return TIMER_TotalSec;
}

inline float TIMER_GetLevelSec()
{
    return TIMER_LevelSec;
}

void TIMER_NoTick();
void TIMER_Reset();
void TIMER_SetTotalSec(float total_seconds, float frame_seconds);
void TIMER_SetLevelSec(float seconds);

#endif
