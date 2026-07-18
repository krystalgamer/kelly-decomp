extern bool wave_static;
__asm__(".equ wave_static, 0x004848FC");
bool WAVE_IsStatic() { return wave_static != 0; }
