// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00251670)
// 0x00251670 pause__9WaveSound
class WaveSound {
    char padding[0x498];
    bool is_paused;
public:
    void pause();
};

void WaveSound::pause() {
    is_paused = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00251680)
// 0x00251680 unpause__9WaveSound
class WaveSound {
    char padding[0x498];
    bool is_paused;
public:
    void unpause();
};

void WaveSound::unpause() {
    is_paused = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00255168)
// 0x00255168 shutdown__9WaveSound
class WaveSound {
    char padding_to_initialized[0x494];
    bool initialized;
    char padding_to_crashed[0x4];
    bool crashed;
    char padding_to_emitter[0xC];
    int behindTheCamera;
public:
    void shutdown();
};
void WaveSound::shutdown() { initialized = false; crashed = false; behindTheCamera = 0; }
#endif
