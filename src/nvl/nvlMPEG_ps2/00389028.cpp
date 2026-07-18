struct VoBuf { char padding[0x8]; volatile int write; volatile int count; };
static void voBufReset(VoBuf* buffer) { buffer->count = 0; buffer->write = 0; }
__asm__(".globl voBufReset__FP5VoBuf");
