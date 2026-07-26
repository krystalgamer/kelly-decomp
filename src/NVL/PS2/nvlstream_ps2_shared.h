#ifndef KELLY_DECOMP_NVLSTREAM_PS2_SHARED_H
#define KELLY_DECOMP_NVLSTREAM_PS2_SHARED_H

typedef int nvlMsg;
typedef void (*callbackType)(int);

struct nvlMsgQueue {
    int sema;
    nvlMsg *array;
};

struct nvlStream {
    int idx;
    unsigned int startSector;
    unsigned int endSector;
    unsigned int readSector;
    unsigned int filesize;
    int bytes_in_last_sect;
    int bufsize;
    char *buf;
    char *endbuf;
    char *pRead;
    char *pWrite;
    char *pLock;
    char *pEndOfData;
    char *pStartOfData;
    int private_buffer;
    int bitrate;
};

struct ThreadParam {
    int status;
    void (*entry)(void *);
    void *stack;
    int stackSize;
    void *gpReg;
    int initPriority;
    int currentPriority;
    unsigned int attr;
    unsigned int option;
    int waitType;
    int waitId;
    int wakeupCount;
};

enum {
    NVL_MSG_INVALID = -1,
    NVL_MSG_MIN = 0,
    NVL_MSG_SHUTDOWN = NVL_MSG_MIN,
    NVL_MSG_VBLANK,
    NVL_MSG_READ,
    NVL_MSG_UNLOCK,
    NVL_MSG_REWIND,
    NVL_MSG_DESTROY,
    NVL_MSG_MAX,
    NVL_MSG_CDVD_READ,
    NVL_MSG_CDVD_SEEK,
    NVL_MSG_CDVD_STANDBY,
    NVL_MSG_CDVD_STOP,
    NVL_MSG_CDVD_PAUSE,
    NVL_MSG_CDVD_BREAK
};

enum {
    NVLSTREAM_MSG_NUM = 8,
    CDVD_MSG_NUM = 1,
    NVL_MAX_STREAM_NUM = 8
};

struct nvlStreamSystemData_t {
    char *threadStack;
    ThreadParam threadParam;
    int threadID;
    int mainThreadID;
    nvlMsgQueue threadMsgQueue;
    nvlMsg msg[NVLSTREAM_MSG_NUM];
    nvlMsgQueue cdvdMsgQueue;
    nvlMsg cdvdMsg[CDVD_MSG_NUM];
    int vblankHandlerID;
    int VBWasEnabled;
    int vblankSema;
    nvlStream *pStream[NVL_MAX_STREAM_NUM];
    int streamList[NVL_MAX_STREAM_NUM];
    callbackType prevCDVDCallback;
};

extern nvlStreamSystemData_t nvlStreamSystemData;
extern volatile nvlStream *nvlCurrentIOStream;

void nvlSendMsg(nvlMsgQueue *queue, nvlMsg message, nvlStream *stream);

extern "C" void __assert(const char *file, int line, const char *expression);
extern const char nvlstream_source_file[];
extern const char nvlstream_assert_stream[];

__asm__(".equ nvlStreamSystemData, 0x00595E80");
__asm__(".equ nvlSendMsg__FP11nvlMsgQueueiP9nvlStream, 0x003855A0");
__asm__(".equ __assert, 0x003CF6B0");
__asm__(".equ nvlstream_source_file, 0x0051AD40");
__asm__(".equ nvlstream_assert_stream, 0x0051B120");

#endif
