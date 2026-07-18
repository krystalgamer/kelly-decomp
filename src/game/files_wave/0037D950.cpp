extern int wave_stage;
__asm__(".equ wave_stage, 0x00585AD0");
int WAVE_GetStage() { return wave_stage; }
