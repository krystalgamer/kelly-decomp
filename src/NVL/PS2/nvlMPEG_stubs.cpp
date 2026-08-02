struct ReadBuf;

struct VideoDec {
    char data_to_state[0xA8];
    unsigned int state;
};

struct VoBuf;

// 0x00388998 readBufDelete__FP7ReadBuf
static void readBufDelete(ReadBuf *buffer)
{
}

// 0x00388BE8 videoDecReset__FP8VideoDec
static void videoDecReset(VideoDec *decoder)
{
    decoder->state = 0;
}

// 0x00388C28 videoDecGetState__FP8VideoDec
static unsigned int videoDecGetState(VideoDec *decoder)
{
    return decoder->state;
}

// 0x00389020 voBufDelete__FP5VoBuf
static void voBufDelete(VoBuf *buffer)
{
}
