// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0023A998)
// 0x0023A998 __13KSEntityState
class KSEntityState {
public:
    KSEntityState();
};

KSEntityState::KSEntityState() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023AC68)
// 0x0023AC68 __13KSReplayFrame
class KSReplayFrame {
public:
    KSReplayFrame();
};

KSReplayFrame::KSReplayFrame() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023B2D0)
// 0x0023B2D0 Clear__8KSReplayUi
class KSReplay { char padding[0xC]; unsigned int seed; int status; char padding_to_frames[0x40]; unsigned int numFrames; char padding_to_current_collision[0x74]; int current_collision; int num_collisions; public: void Clear(unsigned int value); };
void KSReplay::Clear(unsigned int value) { seed = value; numFrames = 0; num_collisions = 0; current_collision = 0; status = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023BE08)
// 0x0023BE08 IsPlaying__8KSReplay
class KSReplay { char padding[0x10]; int status; public: bool IsPlaying(); };
bool KSReplay::IsPlaying() { return status == 2; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023C690)
// 0x0023C690 Record__8KSReplay
class KSReplay {
    char padding[0x10];
    int status;
public:
    void Record();
};

void KSReplay::Record() {
    status = 1;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023CA78)
// 0x0023CA78 SpeedFast__8KSReplay
class KSReplay { char padding[0x1C]; bool slomo; bool fastforward; public: void SpeedFast(); };
void KSReplay::SpeedFast() { fastforward = true; slomo = false; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023CAD8)
// 0x0023CAD8 Done__8KSReplay
class KSReplay { char padding_to_play[0x34]; unsigned int playframe; char padding_to_num[0x1C]; unsigned int numFrames; public: bool Done(); };
bool KSReplay::Done() { return playframe >= numFrames; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023CAF0)
// 0x0023CAF0 NoDraw__8KSReplay
class KSReplay {
    char padding[0x78];
    bool noDraw;
public:
    bool NoDraw();
};

bool KSReplay::NoDraw() {
    return noDraw;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023CAF8)
// 0x0023CAF8 MainPOFrames__8KSReplay
class KSReplay {
public:
    int MainPOFrames();
};

int KSReplay::MainPOFrames() {
    return 4;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023CA38)
// 0x0023CA38 SpeedSlow__8KSReplay
class KSReplay { char padding[0x1c]; bool slomo; bool fastforward; bool prepareSlomo; bool prepareNormal; public: void SpeedSlow(); };
void KSReplay::SpeedSlow() { if (fastforward) { fastforward = false; slomo = true; } else { prepareSlomo = true; } }
#endif
