struct VideoDec { char padding[0xA8]; unsigned int state; };
static unsigned int videoDecSetState(VideoDec* decoder, unsigned int state) { unsigned int old = decoder->state; decoder->state = state; return old; }
__asm__(".globl videoDecSetState__FP8VideoDecUi");
