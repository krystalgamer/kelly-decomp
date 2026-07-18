extern int wave_schedule_index;
__asm__(".equ wave_schedule_index, 0x004846D4");
int WAVE_GetScheduleIndex() { return wave_schedule_index; }
