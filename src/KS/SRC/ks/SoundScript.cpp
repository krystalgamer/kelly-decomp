// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0031BBB8)
// 0x0031BBB8 __17CurrentSoundEvent
class CurrentSoundEvent { int event; int sound; char padding[0x10]; int extra; public: CurrentSoundEvent(); };
CurrentSoundEvent::CurrentSoundEvent() { extra = 0; event = 105; sound = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031BF98)
// 0x0031BF98 pause__18SoundScriptManager
class SoundScriptManager { char padding[0x45B8]; bool paused; public: void pause(); };
void SoundScriptManager::pause() { paused = true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031BFA8)
// 0x0031BFA8 unpause__18SoundScriptManager
class SoundScriptManager {
    char padding[0x45B8];
    bool paused;
public:
    void unpause();
};

void SoundScriptManager::unpause() {
    paused = false;
}
#endif
