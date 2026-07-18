struct VoBuf { char padding[0xC]; int count; int size; };
static int voBufIsFull(VoBuf* buffer) { return buffer->count == buffer->size; }
__asm__(".globl voBufIsFull__FP5VoBuf");
