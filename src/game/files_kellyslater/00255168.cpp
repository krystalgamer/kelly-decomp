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
