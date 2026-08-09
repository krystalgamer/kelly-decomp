// Matching decompilation blocks selected by generated build shims.

// 0x00390B68 nslSetSpeakerMode__F19_nslSpeakerModeEnum
#include "NSL/PS2/nsl_ps2.h"

extern const char nsl_speaker_not_initialized[];
extern const char nsl_speaker_empty[];
__asm__(".equ nsl_speaker_not_initialized, 0x0051C480");
__asm__(".equ nsl_speaker_empty, 0x0051C4D8");

void nslSetSpeakerMode(nslSpeakerModeEnum newMode)
{
    if (!nsl.initialized)
        return;
    if (!(nsl.initialized == 1))
        nslFatal(nsl_speaker_not_initialized);
    if (newMode != nsl.speakerMode)
    {
        nsl.speakerMode = newMode;
        if (nsl.speakerMode != NSL_SPEAKER_MONO)
            nslPs2GasRpc(
                GAS_RPC_SET_STEREO,
                nsl_speaker_empty,
                1,
                0,
                0,
                0);
        else
            nslPs2GasRpc(
                GAS_RPC_SET_STEREO,
                nsl_speaker_empty,
                0,
                0,
                0,
                0);
    }
}

// 0x00390B30 nslPreInitProviewModePS2__Fb
#include "NSL/PS2/nsl_ps2.h"

void nslPreInitProviewModePS2(bool value) { nsl.proview = value; }

// 0x00390B48 nslPreInitCdDvdModePS2__F15nslPs2CdDvdMode
#include "NSL/PS2/nsl_ps2.h"

void nslPreInitCdDvdModePS2(nslPs2CdDvdMode value) { nsl.cdDvdMode = value; }

// 0x00390C28 nslGetSpeakerMode__Fv
#include "NSL/PS2/nsl_ps2.h"

nslSpeakerModeEnum nslGetSpeakerMode() { return nsl.speakerMode; }

// 0x003915E0 clear__t10fifo_queue1ZUi
#include "NSL/PS2/fifo_queue.h"
template <class T>
void fifo_queue<T>::clear() {
    int i;
    start = 0;
    end = -1;
    count = 0;
    for (i = 0; i < queue_max; ++i)
        queue[i] = 0;
}

template void fifo_queue<unsigned int>::clear();

// 0x003916C0 __static_initialization_and_destruction_0
#include "NSL/PS2/nsl_ps2.h"

__asm__(".equ nsl, 0x0049B5F0");
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
void StaticInit(int initialize, int priority)
{
    if (priority == 65535 && initialize) {
        nsl.firstInit = 1;
        nsl.on = false;
        nsl.initialized = 0;
    }
}

// 0x00390228 _nslCheckAutoReleaseEmitters__FP10nslEmitterPv
#include "NSL/PS2/nsl_ps2.h"

extern void nslReleaseEmitter(nslEmitterId emitterToRelease);
__asm__(".equ nslReleaseEmitter__FUi, 0x0038F2C8");
int _nslCheckAutoReleaseEmitters(nslEmitter *daEmmiter, void *userData)
{
    if (daEmmiter->used)
    {
        int size = daEmmiter->emittedSounds.size();
        if (daEmmiter->autoRelease && size == 0)
            nslReleaseEmitter(daEmmiter->myId);
    }
    return 0;
}

// 0x00390C48 nslSetSystemCallbacks__FP23nslSystemCallbackStruct
struct nslSystemCallbackStruct {
    void *ReadFile;
    void *ReleaseFile;
    void *CriticalError;
    void *Error;
    void *Warning;
    void *DebugPrint;
    void *MemAlloc;
    void *MemFree;
};

extern nslSystemCallbackStruct nslSystemCallbacks;
__asm__(".equ nslSystemCallbacks, 0x004A0F48");

extern "C" void *memcpy(void *destination, const void *source, unsigned int size);

void nslSetSystemCallbacks(nslSystemCallbackStruct *callbacks)
{
    memcpy(&nslSystemCallbacks, callbacks, sizeof(nslSystemCallbackStruct));
}

// 0x00390640 nslSetMasterVolume__Ff
struct nsl_system {
    char padding[0x15850];
    int initialized;
    char padding2[0x54];
    float masterVolume;
};
extern nsl_system nsl;
extern const char nsl_error[];
extern "C" void nsl_fatal(const char *,...)
    __asm__("nslFatal__FPCce");
__asm__(".equ nsl, 0x0049B5F0");
__asm__(".equ nsl_error, 0x0051C480");
__asm__(".equ nslFatal__FPCce, 0x00391420");
void nslSetMasterVolume(float volume) {
    if (!nsl.initialized) return;
    if (nsl.initialized!=1) nsl_fatal(nsl_error);
    nsl.masterVolume=volume;
}

// 0x003906A0 nslGetMasterVolume__Fv
struct nsl_master_volume_layout {
    char padding0[0x15850];
    int initialized;
    char padding1[0x54];
    float masterVolume;
};
extern nsl_master_volume_layout nsl;
extern const char initialized_error[];
void nslFatal(const char *, ...);
__asm__(".equ nsl,0x0049B5F0");
__asm__(".equ initialized_error,0x0051C480");
__asm__(".equ nslFatal__FPCce,0x00391420");
float nslGetMasterVolume()
{
    if (!nsl.initialized)
        return 1.0f;
    if (!(nsl.initialized == 1))
        nslFatal(initialized_error);
    return nsl.masterVolume;
}

// 0x00390978 nslSetListenerPosition__FRA2_Cf
struct nsl_system{float listener[12];char p0[88144-48];int initialized;};extern nsl_system nsl;extern "C" void fatal(const char*,...) __asm__("nslFatal__FPCce");__asm__(".equ nsl,0x0049B5F0");__asm__(".equ nslFatal__FPCce,0x00391420");extern const char fatal_text[];__asm__(".equ fatal_text,0x0051C480");struct vec3{float x,y,z;};extern "C" void set_listener(const vec3&pos) __asm__("nslSetListenerPosition__FRA2_Cf");void set_listener(const vec3&pos){if(!nsl.initialized)return;if(nsl.initialized!=1)fatal(fatal_text);nsl.listener[3]=pos.x;nsl.listener[7]=pos.y;nsl.listener[11]=pos.z;}

// 0x00390D20 _nslSoundForEach__FPFP8nslSoundPv_iPv
struct nslSound{bool isReady,used,inRange,isReallyReady,isPlaying,isReallyPlaying,looping,isQueuing;short left,right,old_left,old_right;unsigned gas;int pause,dampen;unsigned id,source,emitter;float vals[6];};struct nsl_sound_system_layout{char pad[0xc040];nslSound soundSlots[256];};typedef int(*callback)(nslSound*,void*);extern nsl_sound_system_layout nsl;extern nslSound sound_slots[];__asm__(".equ nsl,0x0049B5F0");__asm__(".equ sound_slots,0x00497630");extern "C" void for_each(callback cb,void*user)__asm__("_nslSoundForEach__FPFP8nslSoundPv_iPv");void for_each(callback cb,void*user){for(unsigned i=0;i<256;i++)if(nsl.soundSlots[i].used)cb(&sound_slots[i],user);}
