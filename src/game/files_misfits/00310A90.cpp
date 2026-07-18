extern float timer_level_seconds;
__asm__(".equ timer_level_seconds, 0x0046B284");
void TIMER_SetLevelSec(float value) { timer_level_seconds = value; }
