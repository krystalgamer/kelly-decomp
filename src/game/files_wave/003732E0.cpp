extern int wave_timer;
__asm__(".equ wave_timer, 0x0048517C");
void WAVE_ResetTimer() { wave_timer = 0; }
