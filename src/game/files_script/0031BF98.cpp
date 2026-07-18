class SoundScriptManager { char padding[0x45B8]; bool paused; public: void pause(); };
void SoundScriptManager::pause() { paused = true; }
