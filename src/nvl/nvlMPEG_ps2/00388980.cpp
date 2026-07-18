struct ReadBuf { char data[0x50000]; int put; int count; int size; };
static void readBufCreate(ReadBuf* buffer) { buffer->put = buffer->count = 0; buffer->size = 0x50000; }
__asm__(".globl readBufCreate__FP7ReadBuf");
