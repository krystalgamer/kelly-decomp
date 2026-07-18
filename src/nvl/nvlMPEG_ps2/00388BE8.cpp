struct VideoDec {
    char padding[0xA8];
    unsigned int state;
};

static void videoDecReset(VideoDec* decoder) {
    decoder->state = 0;
}

__asm__(".globl videoDecReset__FP8VideoDec");
