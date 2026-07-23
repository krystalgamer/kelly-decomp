// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002585B0)
#include "KS/SRC/ks/MusicMan_shared.h"
// 0x002585B0 __5Track
Track::Track() {
    paused = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00258640)
#include "KS/SRC/ks/MusicMan_shared.h"
// 0x00258640 IsPlaying__5Track
bool Track::IsPlaying() { return nslGetSoundStatus(mySndId) != 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00258738)
#include "KS/SRC/ks/MusicMan_shared.h"
// 0x00258738 Unpause__5Track
void Track::Unpause()
{
    if (paused && nslGetSoundStatus(mySndId) != NSL_SOUNDSTATUS_INVALID)
        nslUnpauseSound(mySndId);
    paused = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002586E8)
#include "KS/SRC/ks/MusicMan_shared.h"
// 0x002586E8 Pause__5Track
void Track::Pause()
{
    if (!paused && nslGetSoundStatus(mySndId) != NSL_SOUNDSTATUS_INVALID)
        nslPauseSound(mySndId);
    paused = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002585C0)
// 0x002585C0 _$_5Track
extern "C" void builtin_delete(void *pointer) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");
extern "C" void TrackDtor(void *self, int deleting) __asm__("_$_5Track");
void TrackDtor(void *self, int deleting) { if (deleting & 1) builtin_delete(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00259628)
// 0x00259628 shutdown__8MusicMan
class MusicListing { public: void shutdown(); };
__asm__(".equ shutdown__12MusicListing, 0x00258C40");
class MusicMan { char padding[0x10]; MusicListing musicTrack; public: void shutdown(); void stop(); };
__asm__(".equ stop__8MusicMan, 0x002595F0");
void MusicMan::shutdown() { stop(); musicTrack.shutdown(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00258A60)
// 0x00258A60 stop__12MusicListing
class Track {
    char data[72];

public:
    void Stop();
};

__asm__(".equ Stop__5Track, 0x00258660");

class MusicListing {
    int totalSources;
    int current;
    Track sources[50];
    unsigned int currentSoundId;
    bool successfulLastPlay;
    int order[50];

public:
    void stop();
};

void MusicListing::stop()
{
    sources[order[current]].Stop();
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002595F0)
// 0x002595F0 stop__8MusicMan
class MusicListing {
public:
    bool isPlaying();
    void stop();
};

__asm__(".equ isPlaying__12MusicListing, 0x00258A00");
__asm__(".equ stop__12MusicListing, 0x00258A60");

class MusicMan {
    char padding[0x10];
    MusicListing musicTrack;

public:
    void stop();
};

void MusicMan::stop()
{
    if (musicTrack.isPlaying()) {
        musicTrack.stop();
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00258780)
// 0x00258780 __8MusicMan
class singleton {
protected:
    singleton() {}
    virtual ~singleton() {}
};
class MusicListing { public: MusicListing(); };
class MusicMan : public singleton {
    float volume;
    int inited;
    bool paused;
public:
    MusicMan();
    ~MusicMan();
    MusicListing musicTrack;
};
asm(".equ __12MusicListing, 0x00258820");
asm(".equ _vt$8MusicMan, 0x004D5E70");
MusicMan::MusicMan()
{
    inited = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002585E8)
// 0x002585E8 Play__5Track
#include "KS/SRC/ks/MusicMan_shared.h"

nslSoundId nslAddSound(nslSourceId source);
void nslPlaySound(nslSoundId sound);

__asm__(".equ IsPlaying__5Track, 0x00258640");
__asm__(".equ nslAddSound__FUi, 0x0038CAF8");
__asm__(".equ nslPlaySound__FUi, 0x0038CB20");

nslSoundId Track::Play()
{
    if (!IsPlaying() && !paused)
    {
        mySndId = nslAddSound(mySrcId);
        if (mySndId != 0)
            nslPlaySound(mySndId);
    }
    return mySndId;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00258D08)
// 0x00258D08 playNext__8MusicMan
class MusicListing {
public:
    bool isPlaying();
    unsigned int playNext();
};
__asm__(".equ isPlaying__12MusicListing, 0x00258A00");
__asm__(".equ playNext__12MusicListing, 0x00258B00");
class MusicMan {
    char padding[0xc];
    bool paused;
    MusicListing musicTrack;
public:
    unsigned int playNext();
};
unsigned int MusicMan::playNext() {
    if (!musicTrack.isPlaying() && !paused)
        return musicTrack.playNext();
    return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00258D60)
// 0x00258D60 play__8MusicMan
class MusicListing {
public:
    bool isPlaying();
    unsigned int play();
};
__asm__(".equ isPlaying__12MusicListing, 0x00258A00");
__asm__(".equ play__12MusicListing, 0x00258A98");
class MusicMan {
    char padding[0xc];
    bool paused;
    MusicListing musicTrack;
public:
    unsigned int play();
};
unsigned int MusicMan::play() {
    if (!musicTrack.isPlaying() && !paused)
        return musicTrack.play();
    return 0;
}
#endif
