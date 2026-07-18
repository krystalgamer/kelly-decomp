class KSReplay { char padding[0x10]; int status; public: bool IsPlaying(); };
bool KSReplay::IsPlaying() { return status == 2; }
