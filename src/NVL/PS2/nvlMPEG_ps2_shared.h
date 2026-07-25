#ifndef KELLY_DECOMP_NVLMPEG_PS2_SHARED_H
#define KELLY_DECOMP_NVLMPEG_PS2_SHARED_H

typedef unsigned char u_char;

#ifndef NULL
#define NULL 0
#endif

#define AU_STATE_INIT 0
#define AU_STATE_PRESET 1
#define AU_STATE_PLAY 2
#define AU_STATE_PAUSE 3

#define UNIT_SIZE 1024
#define PRESET_VALUE(count) (count)

struct SpuStreamHeader {
    char id[4];
    int size;
    int type;
    int rate;
    int ch;
    int interSize;
    int loopStart;
    int loopEnd;
};

struct SpuStreamBody {
    char id[4];
    int size;
};

#define AU_HDR_SIZE (sizeof(SpuStreamHeader) + sizeof(SpuStreamBody))

struct AudioDec {
    int state;
    SpuStreamHeader sshd;
    SpuStreamBody ssbd;
    int hdrCount;
    u_char *data;
    int put;
    int count;
    int size;
    int totalBytes;
    int iopBuff;
    int iopBuffSize;
    int iopLastPos;
    int iopPausePos;
    int totalBytesSent;
    int iopZero;
};

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
