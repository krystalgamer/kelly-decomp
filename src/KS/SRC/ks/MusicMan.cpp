// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00258640)
#include "KS/SRC/ks/MusicMan.h"
// 0x00258640 IsPlaying__5Track
bool Track::IsPlaying() { return nslGetSoundStatus(mySndId) != 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00258738)
#include "KS/SRC/ks/MusicMan.h"
// 0x00258738 Unpause__5Track
void Track::Unpause()
{
    if (paused && nslGetSoundStatus(mySndId) != NSL_SOUNDSTATUS_INVALID)
        nslUnpauseSound(mySndId);
    paused = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002586E8)
#include "KS/SRC/ks/MusicMan.h"
// 0x002586E8 Pause__5Track
void Track::Pause()
{
    if (!paused && nslGetSoundStatus(mySndId) != NSL_SOUNDSTATUS_INVALID)
        nslPauseSound(mySndId);
    paused = true;
}
#endif

// 0x00259628 shutdown__8MusicMan
#include "KS/SRC/ks/MusicMan.h"

__asm__(".equ shutdown__12MusicListing, 0x00258C40");
__asm__(".equ stop__8MusicMan, 0x002595F0");
void shutdown_music_listing(MusicListing *listing)
    __asm__("shutdown__12MusicListing");
void MusicMan::shutdown() {
    stop();
    void (*shutdown_listing)(MusicListing *) = shutdown_music_listing;
    shutdown_listing(&musicTrack);
}

#if defined(KELLY_DECOMP_FUNCTION_00258A60)
// 0x00258A60 stop__12MusicListing
#include "KS/SRC/ks/MusicMan.h"

__asm__(".equ Stop__5Track, 0x00258660");
extern "C" void stop_track(Track *track)
    __asm__("Stop__5Track");

void MusicListing::stop()
{
    void (*stop)(Track *) = stop_track;
    stop(&sources[order[current]]);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002595F0)
// 0x002595F0 stop__8MusicMan
#include "KS/SRC/ks/MusicMan.h"

__asm__(".equ isPlaying__12MusicListing, 0x00258A00");
__asm__(".equ stop__12MusicListing, 0x00258A60");
extern "C" void stop_music_listing(MusicListing *listing)
    __asm__("stop__12MusicListing");

void MusicMan::stop()
{
    if (musicTrack.isPlaying()) {
        void (*stop_listing)(MusicListing *) = stop_music_listing;
        stop_listing(&musicTrack);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00258780)
// 0x00258780 __8MusicMan
#include "KS/SRC/ks/MusicMan.h"

asm(".equ __12MusicListing, 0x00258820");
asm(".equ _vt$8MusicMan, 0x004D5E70");
MusicMan::MusicMan()
{
    inited = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002585E8)
// 0x002585E8 Play__5Track
#include "KS/SRC/ks/MusicMan.h"

__asm__(".equ IsPlaying__5Track, 0x00258640");
__asm__(".equ nslAddSound__FUi, 0x0038CAF8");
__asm__(".equ nslPlaySound__FUi, 0x0038CB20");

nslSoundId Track::Play()
{
    if (!IsPlaying() && !paused)
    {
        mySndId = nslAddSound(mySrcId);
        if (mySndId != NSL_INVALID_ID)
            nslPlaySound(mySndId);
    }
    return mySndId;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00258D08)
// 0x00258D08 playNext__8MusicMan
#include "KS/SRC/ks/MusicMan.h"

unsigned int MusicMan::playNext() {
    if (!musicTrack.isPlaying() && !paused)
        return musicTrack.playNext();
    return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00258D60)
// 0x00258D60 play__8MusicMan
#include "KS/SRC/ks/MusicMan.h"

unsigned int MusicMan::play() {
    if (!musicTrack.isPlaying() && !paused)
        return musicTrack.play();
    return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00258A00)
// 0x00258A00 isPlaying__12MusicListing
#include "KS/SRC/ks/MusicMan.h"

__asm__(".equ IsPlaying__5Track, 0x00258640");
bool MusicListing::isPlaying() {
    if (totalSources>0 && current<totalSources)
        return sources[order[current]].IsPlaying();
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00258A98)
// 0x00258A98 play__12MusicListing
#include "KS/SRC/ks/MusicMan.h"

__asm__(".equ Play__5Track,0x002585E8");
unsigned int MusicListing::play()
{
    if (totalSources <= 0) {
        currentSoundId = 0;
        return 0;
    }
    currentSoundId = sources[order[current]].Play();
    successfulLastPlay = currentSoundId != 0;
    return currentSoundId;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002592E8)
// 0x002592E8 init__8MusicMan
struct MusicMan{char pad0[4];float volume;int inited;bool paused;char pad1[3616];int order[50];bool enabled[50];void shutdown()__asm__("shutdown__8MusicMan");};__asm__(".equ shutdown__8MusicMan,0x00259628");extern "C" void init(MusicMan*self)__asm__("init__8MusicMan");void init(MusicMan*self){if(self->inited)self->shutdown();for(int i=0;i<50;i++){KELLY_DECOMP_COMPILER_BARRIER();self->enabled[i]=true;self->order[i]=i;}self->volume=1.0f;self->inited=1;self->paused=false;}
#endif

// Source implementation boundary.
// 0x002585B0 __5Track
#include "KS/SRC/ks/MusicMan.h"
Track::Track() {
    paused = false;
}
