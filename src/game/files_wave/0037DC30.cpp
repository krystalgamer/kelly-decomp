extern bool wave_draw;
__asm__(".equ wave_draw, 0x00484894");
void WAVE_SetDraw(bool value) { wave_draw = value; }
