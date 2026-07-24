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

#if defined(KELLY_DECOMP_FUNCTION_00258A00)
// 0x00258A00 isPlaying__12MusicListing
struct Track {
    char data[72];
    bool IsPlaying();
};
class MusicListing {
    int totalSources;
    int current;
    Track sources[50];
    int currentSoundId;
    bool successfulLastPlay;
    int order[50];
public:
    bool isPlaying();
};
__asm__(".equ IsPlaying__5Track, 0x00258640");
bool MusicListing::isPlaying() {
    if (totalSources>0 && current<totalSources)
        return sources[order[current]].IsPlaying();
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002587C0)
// 0x002587C0 _$_8MusicMan
extern "C" void destroy_listing(void *,int)
    __asm__("_$_12MusicListing");
extern "C" void object_delete(void *)
    __asm__("__builtin_delete");
extern const char music_vtable[];
extern const char singleton_vtable[];
__asm__(".equ _$_12MusicListing, 0x002588B8");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ music_vtable, 0x004D5E70");
__asm__(".equ singleton_vtable, 0x004CE7A8");
struct music_layout {
    const void *vtable;
    char padding[0xc];
    char listing[1];
};
extern "C" void destroy_music(music_layout *self,int flags)
    __asm__("_$_8MusicMan");
void destroy_music(music_layout *self,int flags) {
    self->vtable=music_vtable;
    destroy_listing(self->listing,2);
    self->vtable=singleton_vtable;
    if (flags&1) {
        object_delete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00258A98)
// 0x00258A98 play__12MusicListing
struct Track { char padding[8]; unsigned int Play(); char rest[64]; };
__asm__(".equ Play__5Track,0x002585E8");
class MusicListing { int totalSources; int current; Track sources[50]; unsigned int currentSoundId; bool successfulLastPlay; int order[50]; public: unsigned int play(); };
unsigned int MusicListing::play()
{
    if (totalSources <= 0) {
        currentSoundId = 0;
        return 0;
    }
    register unsigned int sound __asm__("$2") = sources[order[current]].Play();
    __asm__ __volatile__("" : "+r"(sound));
    currentSoundId = sound;
    successfulLastPlay = sound;
    return sound;
}
#endif
