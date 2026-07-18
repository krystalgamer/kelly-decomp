extern int water_flags;
__asm__(".equ water_flags, 0x00484618");
bool WATER_GetDrawHorizon() { return (water_flags >> 9) & 1; }
