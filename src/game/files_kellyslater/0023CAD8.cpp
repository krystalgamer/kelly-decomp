class KSReplay { char padding_to_play[0x34]; unsigned int playframe; char padding_to_num[0x1C]; unsigned int numFrames; public: bool Done(); };
bool KSReplay::Done() { return playframe >= numFrames; }
