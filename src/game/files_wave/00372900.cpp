extern int water_flags;
__asm__(".equ water_flags, 0x00484618");
bool WATER_GetDrawSeam() { return (water_flags >> 3) & 1; }
