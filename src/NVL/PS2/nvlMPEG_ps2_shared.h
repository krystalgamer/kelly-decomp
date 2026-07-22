#ifndef KELLY_DECOMP_NVLMPEG_PS2_SHARED_H
#define KELLY_DECOMP_NVLMPEG_PS2_SHARED_H

struct ReadBuf {
    unsigned char data[0x50000];
    int put;
    int count;
    int size;
};

struct VoData {
    unsigned char v[0x195000];
};

struct VoTag {
    int status;
    unsigned char data[0x4CE3C];
};

struct VoBuf {
    VoData *data;
    VoTag *tag;
    volatile int write;
    volatile int count;
    int size;
};

extern ReadBuf *readBuf;
extern VoBuf voBuf;
extern volatile int isFrameEnd;

void voBufDecCount(VoBuf *buffer);
extern "C" int sceSdRemote(int command, int function, ...);

#endif
