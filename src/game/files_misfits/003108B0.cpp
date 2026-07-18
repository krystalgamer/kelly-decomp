extern float timer_total;
extern float timer_level;
__asm__(".equ timer_total, 0x0046B27C");
__asm__(".equ timer_level, 0x0046B284");
void TIMER_Reset() { timer_total = 0.0f; timer_level = 0.0f; }
