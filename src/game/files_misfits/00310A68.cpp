extern bool timer_no_tick;
__asm__(".equ timer_no_tick, 0x0046B280");
void TIMER_NoTick() { timer_no_tick = false; }
