struct VideoDec {
    char padding[0xA8];
    unsigned int state;
};

static unsigned int videoDecGetState(VideoDec* decoder) {
    return decoder->state;
}

__asm__(".globl videoDecGetState__FP8VideoDec");
