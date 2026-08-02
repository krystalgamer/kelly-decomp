// Released timer state accessors.

#include "KS/SRC/timer.h"

// 0x00310A68 TIMER_NoTick__Fv
void TIMER_NoTick() {
    TIMER_FrameSec = 0.0f;
}

// 0x00310A90 TIMER_SetLevelSec__Ff
void TIMER_SetLevelSec(float seconds) {
    TIMER_LevelSec = seconds;
}
