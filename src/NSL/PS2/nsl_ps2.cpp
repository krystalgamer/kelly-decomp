// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_003915E0) || \
    defined(KELLY_DECOMP_FUNCTION_00391628)
#include "NSL/PS2/fifo_queue_shared.h"
#endif

#if defined(KELLY_DECOMP_FUNCTION_00390B30)
// 0x00390B30 nslPreInitProviewModePS2__Fb
struct nslState { char padding[0x15884]; bool proview; };
extern nslState nsl;
__asm__(".equ nsl, 0x0049B5F0");
void nslPreInitProviewModePS2(bool value) { nsl.proview = value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00390B48)
// 0x00390B48 nslPreInitCdDvdModePS2__F15nslPs2CdDvdMode
enum nslPs2CdDvdMode { NSL_MODE_ZERO };
struct nslState { char padding[0x15870]; nslPs2CdDvdMode cd_mode; };
extern nslState nsl;
__asm__(".equ nsl, 0x0049B5F0");
void nslPreInitCdDvdModePS2(nslPs2CdDvdMode value) { nsl.cd_mode = value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00390C28)
// 0x00390C28 nslGetSpeakerMode__Fv
struct nslState { char padding[0x15864]; int speaker_mode; };
extern nslState nsl;
__asm__(".equ nsl, 0x0049B5F0");
int nslGetSpeakerMode() { return nsl.speaker_mode; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00390DA8)
// 0x00390DA8 _nslResetInternal__F18_nslClearBehaviour
enum _nslClearBehaviour { NSL_CLEAR_DEFAULT };
void _nslClearSystemData(_nslClearBehaviour behavior);
__asm__(".equ _nslClearSystemData__F18_nslClearBehaviour, 0x00390DC8");
void _nslResetInternal(_nslClearBehaviour behavior) { _nslClearSystemData(behavior); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003916F8)
// 0x003916F8 _GLOBAL_$I$nsl
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalInit() __asm__("_GLOBAL_$I$nsl");
__asm__(".equ __static_initialization_and_destruction_0, 0x003916C0");
void GlobalInit() { StaticInit(1, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003915E0)
// 0x003915E0 clear__t10fifo_queue1ZUi
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_00391628)
// 0x00391628 init__t10fifo_queue1ZUis
__asm__(".equ __builtin_vec_new, 0x002AC640");
__asm__(".equ clear__t10fifo_queue1ZUi, 0x003915E0");

template <>
void fifo_queue<unsigned int>::init(short size) {
    KELLY_DECOMP_COMPILER_BARRIER();
    queue = (unsigned int *)new unsigned int[size];
    queue_max = size;
    clear();
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003916C0)
// 0x003916C0 __static_initialization_and_destruction_0
struct nslSystem {
    char padding0[0x1584c];
    int firstInit;
    int initialized;
    char padding1[0x2c];
    bool on;
};
extern nslSystem nsl;
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_00390228)
// 0x00390228 _nslCheckAutoReleaseEmitters__FP10nslEmitterPv
typedef unsigned int nslEmitterId;
typedef unsigned int nslSoundId;
typedef float nlVector3d[3];
template<class T> class fifo_queue {
    T *queue;
    short queue_max;
    short start;
    short end;
    short count;
public:
    int size() { return count; }
};
struct nslEmitter {
    bool used;
    bool autoRelease;
    bool isALineEmitter;
    nslEmitterId myId;
    nlVector3d startPosition;
    nlVector3d endPosition;
    nlVector3d position;
    fifo_queue<nslSoundId> emittedSounds;
};
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
#endif
