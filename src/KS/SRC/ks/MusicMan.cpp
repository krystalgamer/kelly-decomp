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
