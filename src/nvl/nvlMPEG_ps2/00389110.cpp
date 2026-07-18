struct VoBuf { char padding[0xC]; int count; };
static int voBufIsEmpty(VoBuf* buffer) { return buffer->count == 0; }
__asm__(".globl voBufIsEmpty__FP5VoBuf");
