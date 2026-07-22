#ifndef KELLY_DECOMP_NVLMPEG_PS2_SHARED_H
#define KELLY_DECOMP_NVLMPEG_PS2_SHARED_H

struct ReadBuf {
    unsigned char data[0x50000];
    int put;
    int count;
    int size;
};

struct VoBuf;

extern ReadBuf *readBuf;
extern VoBuf voBuf;
extern volatile int isFrameEnd;

void voBufDecCount(VoBuf *buffer);
extern "C" int sceSdRemote(int command, int function, ...);

#endif
