class WaveSound {
    char padding[0x498];
    bool is_paused;
public:
    void pause();
};

void WaveSound::pause() {
    is_paused = true;
}
