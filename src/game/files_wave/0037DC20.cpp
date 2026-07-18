extern bool wave_draw;
__asm__(".equ wave_draw, 0x00484894");
bool WAVE_GetDraw() { return wave_draw != 0; }
