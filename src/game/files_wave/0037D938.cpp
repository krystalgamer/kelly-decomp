extern float wave_timer;
extern float wave_schedule_remaining;
__asm__(".equ wave_timer, 0x0048517C");
__asm__(".equ wave_schedule_remaining, 0x004846E0");

static inline float WAVE_GetTotalSec() {
    return wave_timer;
}

float WAVE_GetScheduleRemainingSec() {
    return wave_schedule_remaining - WAVE_GetTotalSec();
}
