extern float wave_height_fudge[];
__asm__(".equ wave_height_fudge, 0x0058ECE8");
float WAVE_GetHeightFudgeFactor(int index) { return wave_height_fudge[index]; }
