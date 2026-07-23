// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_0023BFF0) || \
    defined(KELLY_DECOMP_FUNCTION_0023C038)
#include "KS/SRC/ks/ksreplay_shared.h"
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023ABC0)
class KSEntityState {
    char padding[4];
    int anim_info;
public:
    void SetKSAnimInfo(float speed, bool mirrored, float unused);
};

void KSEntityState::SetKSAnimInfo(float speed, bool mirrored, float)
{
    int value = anim_info;
    value &= -128;
    value |= ((int)(speed * 100.0f)) & 0x7f;
    value &= 0xff7fffff;
    value |= (mirrored & 1) << 23;
    value |= 0x200000;
    anim_info = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023AD38)
struct KSReplay {
    char padding[216];
    const char *term_message;
};

extern const char term_message[];
extern void Term(KSReplay *) __asm__("Term__8KSReplay");
extern void builtin_delete(void *) __asm__("__builtin_delete");
__asm__(".equ term_message, 0x004D5E88");
__asm__(".equ Term__8KSReplay, 0x0023B2E8");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern "C" void KSReplayDtor(void *self, int deleting)
    __asm__("_$_8KSReplay");
void KSReplayDtor(void *self, int deleting)
{
    ((KSReplay *)self)->term_message = term_message;
    Term((KSReplay *)self);
    if (deleting & 1) {
        builtin_delete(self);
        __asm__ volatile("");
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023CA88)
// 0x0023CA88 Playspeed__8KSReplay
#include "KS/SRC/ks/ksreplay_shared.h"
float KSReplay::Playspeed() {
    if (slomo)
        return 1.0f / slomospeed;
    if (!fastforward)
        return 1.0f;
    return (float)ffspeed;
}
#endif

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

#if defined(KELLY_DECOMP_FUNCTION_0023CA58)
// 0x0023CA58 SpeedNormal__8KSReplay
class KSReplay { char padding[0x1c]; bool slomo; bool fastforward; bool prepareSlomo; bool prepareNormal; public: void SpeedNormal(); };
void KSReplay::SpeedNormal() { if (fastforward) { slomo = false; KELLY_DECOMP_COMPILER_BARRIER(); fastforward = false; } else { prepareNormal = true; } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023AC70)
// 0x0023AC70 Save__13KSReplayFrame
extern float WAVE_ShiftX;
extern float TIMER_LevelSec;
extern float TIMER_TotalSec;
__asm__(".equ WAVE_ShiftX, 0x004852DC");
__asm__(".equ TIMER_LevelSec, 0x0046B284");
__asm__(".equ TIMER_TotalSec, 0x0046B27C");
class KSReplayFrame { float wave_shiftx; float levelTime; float totalTime; public: void Save(); };
void KSReplayFrame::Save() { wave_shiftx = WAVE_ShiftX; levelTime = TIMER_LevelSec; totalTime = TIMER_TotalSec; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023C978)
// 0x0023C978 Restart__8KSReplay
class KSReplay { char padding[0xd4]; int firstFrame; public: void Restart(); void Play(); };
__asm__(".equ Play__8KSReplay, 0x0023C6A0");
void KSReplay::Restart() { Play(); firstFrame = 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00239EB0)
// 0x00239EB0 __10KSEntityPO
struct vector3d {
    float x;
    float y;
    float z;

    vector3d() {
    }
};

struct quaternion {
    float a;
    float b;
    float c;
    float d;

    quaternion() {
        a = 1.0f;
        b = c = d = 0.0f;
    }
};

class KSEntityPO {
    vector3d KSPos;
    vector3d KSBPos;
    quaternion KSRot;
    quaternion KSBRot;
    vector3d BoardCurrent;
    vector3d BoardMomentum;

public:
    KSEntityPO();
};

KSEntityPO::KSEntityPO()
{
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023BFF0)
// 0x0023BFF0 SetWipeoutSplash__8KSReplayi
void KSReplay::SetWipeoutSplash(int player)
{
    if (mainEntityState == 0 || numFrames >= maxFrames)
        return;

    if (player == 0)
        mainEntityState[numFrames].KSWipeoutSplash = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023C038)
// 0x0023C038 SetEndWave__8KSReplay
void KSReplay::SetEndWave()
{
    if (mainEntityState && numFrames < maxFrames)
        mainEntityState[numFrames].EndWave = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023AC10)
// 0x0023AC10 SetKSBAnimInfo__13KSEntityStatefbf
typedef unsigned int uint32;

class KSEntityState {
    uint32 KSState : 7;
    uint32 KSSuperState : 4;
    uint32 KSAnim : 10;
    uint32 KSBAnim : 8;

    uint32 KSBlend : 7;
    uint32 KSBBlend : 7;
    uint32 KSCurTrick : 7;
    uint32 KSAnimCall : 1;
    uint32 KSBAnimCall : 1;
    uint32 KSLoop : 1;
    uint32 KSBLoop : 1;
    uint32 KSWipedOut : 1;
    uint32 KSInAir : 1;
    uint32 KSInTube : 1;
    uint32 KSDry : 1;
    uint32 KSIKValid : 1;
    uint32 KSWipeoutSplash : 1;
    uint32 EndWave : 1;

public:
    void SetKSBAnimInfo(float blend, bool loop, float frame);
};

void KSEntityState::SetKSBAnimInfo(float blend, bool loop, float frame)
{
    KSBBlend = (char)(100.0f * blend);
    KSBLoop = loop;
    KSBAnimCall = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0023C9E0)
// 0x0023C9E0 Pause__8KSReplayb
class KSReplay
{
    char padding[0x10];
    int status;

public:
    void Pause(bool paused);
};

enum
{
    REPLAY_IGNORE = 0,
    REPLAY_RECORD = 1,
    REPLAY_PLAYBACK = 2,
    REPLAY_PAUSED = 3
};

void KSReplay::Pause(bool paused)
{
    if (paused)
    {
        if (status == REPLAY_RECORD)
            status = REPLAY_IGNORE;
        else if (status == REPLAY_PLAYBACK)
            status = REPLAY_PAUSED;
    }
    else
    {
        if (status == REPLAY_IGNORE)
            status = REPLAY_RECORD;
        else if (status == REPLAY_PAUSED)
            status = REPLAY_PLAYBACK;
    }
}
#endif
