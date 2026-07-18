extern float nglIFLSpeed;
__asm__(".equ nglIFLSpeed, 0x004BB808");
void nglSetIFLSpeed(float value) { nglIFLSpeed = value; }
