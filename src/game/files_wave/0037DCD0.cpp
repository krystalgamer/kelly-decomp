extern float wave_height_fudge[];
__asm__(".equ wave_height_fudge, 0x0058ECE8");
void WAVE_AddHeightFudge(int index, float value) { wave_height_fudge[index] = value; }
