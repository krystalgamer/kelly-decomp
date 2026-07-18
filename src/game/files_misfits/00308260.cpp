extern bool blur_enabled;
__asm__(".equ blur_enabled, 0x0046ABF4");
void BLUR_TurnOff() { blur_enabled = false; }
