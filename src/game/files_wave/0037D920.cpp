extern float wave_timer;
extern float wave_schedule_start;
__asm__(".equ wave_timer, 0x0048517C");
__asm__(".equ wave_schedule_start, 0x004846DC");

static inline float WAVE_GetTotalSec() {
    return wave_timer;
}

float WAVE_GetScheduleSec() {
    return WAVE_GetTotalSec() - wave_schedule_start;
}
