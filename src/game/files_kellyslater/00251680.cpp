class WaveSound {
    char padding[0x498];
    bool is_paused;
public:
    void unpause();
};

void WaveSound::unpause() {
    is_paused = false;
}
