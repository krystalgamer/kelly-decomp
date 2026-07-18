class SoundScriptManager {
    char padding[0x45B8];
    bool paused;
public:
    void unpause();
};

void SoundScriptManager::unpause() {
    paused = false;
}
