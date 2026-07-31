#ifndef NSL_PS2_HEADER
#define NSL_PS2_HEADER

#include "NSL/PS2/fifo_queue.h"

typedef unsigned int nlUint32;
typedef unsigned int nslSourceId;
typedef unsigned int nslSoundId;

#define NSL_NUM_SOURCES 512
#define NSL_NUM_EMITTERS 256
#define GAS_RPC_REMOVE_SOURCE 0x1005
#define GAS_RPC_SET_STEREO 0x00E7

typedef enum _nslSpeakerModeEnum
{
    NSL_SPEAKER_STEREO,
    NSL_SPEAKER_MONO,
    NSL_SPEAKER_HEADPHONE,
    NSL_SPEAKER_PROLOGIC,
    NSL_SPEAKER_DOLBY_51,
    NSL_SPEAKER_Z
} nslSpeakerModeEnum;

enum nslOutputModeEnum
{
    NSL_OUTPUT_ANALOG,
    NSL_OUTPUT_DIGITAL,
    NSL_OUTPUT_BOTH,
    NSL_OUTPUT_Z
};

enum nslLanguageEnum
{
    NSL_LANGUAGE_ZERO
};

enum nslPs2CdDvdMode
{
    NSL_PS2_CD_MODE,
    NSL_PS2_DVD_MODE
};

enum nslSourceTypeEnum
{
    NSL_SOURCETYPE_SFX,
    NSL_SOURCETYPE_AMBIENT,
    NSL_SOURCETYPE_MUSIC,
    NSL_SOURCETYPE_VOICE,
    NSL_SOURCETYPE_MOVIE,
    NSL_SOURCETYPE_USER1,
    NSL_SOURCETYPE_USER2
};

enum _nslClearBehaviour
{
    NSL_CLEAR_INIT,
    NSL_CLEAR_RESET,
    NSL_CLEAR_FREE
};

struct nslSource
{
    bool used;
    bool looping;
    char fileName[48];
    int bank;
    nslSourceId myId;
    float length;
    float paddedLength;
    nslSourceTypeEnum type;
    nlUint32 gasSourceId;
    float rawVolume;
    float pitch;
    float minDist;
    float maxDist;
};

struct nslSystem
{
    float listenerPo[4][4];
    nslSource sourceSlots[NSL_NUM_SOURCES];
    char data_to_initialized[0x9810];
    int initialized;
    nlUint32 numBanks;
    fifo_queue<nslSoundId> queuedSounds;
    nslSpeakerModeEnum speakerMode;
    nslOutputModeEnum outputMode;
    nslLanguageEnum language;
    nslPs2CdDvdMode cdDvdMode;
    char alignment_before_last_clock[4];
    unsigned long long lastClock;
    bool on;
    bool proview;
    bool finalizeSourcesEnabled;
};

extern nslSystem nsl;
extern const char nsl_not_initialized[];
extern const char nsl_empty_string[];

void nslFatal(const char *format, ...);
void nslReleaseAllSounds();
void _nslClearEmitterSlot(
    nlUint32 slot,
    bool reset_id,
    _nslClearBehaviour clear_style
);
int nslPs2GasRpc(
    int command,
    const char *string,
    int arg1,
    int arg2,
    int arg3,
    int arg4
);

inline __attribute__((always_inline)) void _nslInitialized()
{
    if (!(nsl.initialized == 1))
        nslFatal(nsl_not_initialized);
}

__asm__(".equ nsl, 0x0049B5F0");
__asm__(".equ nsl_not_initialized, 0x0051BDC8");
__asm__(".equ nsl_empty_string, 0x0051BDF8");
__asm__(".equ nslFatal__FPCce, 0x00391420");
__asm__(".equ nslReleaseAllSounds__Fv, 0x0038D3D0");
__asm__(".equ _nslClearEmitterSlot__FUib18_nslClearBehaviour, 0x003910A0");
__asm__(".equ nslPs2GasRpc__FiPCciiii, 0x00391AC0");

#endif
