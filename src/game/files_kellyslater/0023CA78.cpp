class KSReplay { char padding[0x1C]; bool slomo; bool fastforward; public: void SpeedFast(); };
void KSReplay::SpeedFast() { fastforward = true; slomo = false; }
