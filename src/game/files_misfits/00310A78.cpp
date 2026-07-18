extern float timer_total;
extern float timer_other;
__asm__(".equ timer_total, 0x0046B27C");
__asm__(".equ timer_other, 0x0046B280");
void TIMER_SetTotalSec(float total, float other) { timer_total = total; timer_other = other; }
