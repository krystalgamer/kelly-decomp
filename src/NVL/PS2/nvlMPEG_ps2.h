#ifndef NVL_MPEG_PS2_H
#define NVL_MPEG_PS2_H

typedef unsigned char u_char;
typedef void *(*nvlAllocCallback)(int alignment, int size);
typedef void (*nvlFreeCallback)(void *pointer);

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

struct StrFile {
    int isOnCD;
    int size;
    char fp[0x24];
    unsigned char *iopBuf;
    int fd;
};

struct sceMpeg {
    char data[0x48];
};

struct sceMpegCbData;
struct sceMpegCbDataError {
    int field0;
    const char *errMessage;
};
struct ViBuf {
    char data[0x60];
};
void viBufAddDMA(ViBuf *buffer);

struct QWORD {
    unsigned long values[2];
};

typedef int (*sceMpegCallback)(
    sceMpeg *mpeg,
    sceMpegCbData *data,
    void *user_data);

struct VideoDec {
    sceMpeg mpeg;
    ViBuf vibuf;
    unsigned int state;
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
extern int isCountVblank;
extern int frd;
extern ViBuf video_dec_vibuf;
extern nvlAllocCallback nvlMPEGAllocFunc;
extern nvlFreeCallback nvlMPEGFreeFunc;

void nvlMPEGSetMemoryAllocCallback(nvlAllocCallback callback);
void nvlMPEGSetMemoryFreeCallback(nvlFreeCallback callback);
extern "C" int sceSdRemote(int command, int function, ...);

#endif
