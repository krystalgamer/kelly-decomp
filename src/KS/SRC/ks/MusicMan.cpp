// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002585B0)
// 0x002585B0 __5Track
class Track {
    char padding[0x8];
    bool paused;
public:
    Track();
};

Track::Track() {
    paused = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00258640)
// 0x00258640 IsPlaying__5Track
unsigned int nslGetSoundStatus(unsigned int sound);
__asm__(".equ nslGetSoundStatus__FUi, 0x0038DBA0");
class Track { char padding[4]; unsigned int mySndId; public: bool IsPlaying(); };
bool Track::IsPlaying() { return nslGetSoundStatus(mySndId) != 0; }
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
