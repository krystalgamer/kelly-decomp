// KSReplay definitions extracted by generated one-function shims.

// 0x0023ABC0 SetKSAnimInfo__13KSEntityStatefbf
#include "KS/SRC/ks/ksreplay.h"

void KSEntityState::SetKSAnimInfo(float blend, bool loop, float)
{
    KSBlend = (char)(100.0f * blend);
    KSLoop = loop;
    KSAnimCall = true;
}

// 0x0023CA88 Playspeed__8KSReplay
#include "KS/SRC/ks/ksreplay.h"
float KSReplay::Playspeed() {
    if (slomo)
        return 1.0f / slomospeed;
    if (!fastforward)
        return 1.0f;
    return (float)ffspeed;
}

// 0x0023A998 __13KSEntityState
#include "KS/SRC/ks/ksreplay.h"

KSEntityState::KSEntityState() {
}

// 0x0023AC68 __13KSReplayFrame
#include "KS/SRC/ks/ksreplay.h"

KSReplayFrame::KSReplayFrame() {
}

// 0x0023B2D0 Clear__8KSReplayUi
#include "KS/SRC/ks/ksreplay.h"

void KSReplay::Clear(unsigned int value) { seed = value; numFrames = 0; num_collisions = 0; current_collision = 0; status = 0; }

// 0x0023BE08 IsPlaying__8KSReplay
#include "KS/SRC/ks/ksreplay.h"

bool KSReplay::IsPlaying() { return status == REPLAY_PLAYBACK; }

// 0x0023C690 Record__8KSReplay
#include "KS/SRC/ks/ksreplay.h"

void KSReplay::Record() {
    status = REPLAY_RECORD;
}

// 0x0023CA78 SpeedFast__8KSReplay
#include "KS/SRC/ks/ksreplay.h"

void KSReplay::SpeedFast() { fastforward = true; slomo = false; }

// 0x0023CAD8 Done__8KSReplay
#include "KS/SRC/ks/ksreplay.h"

bool KSReplay::Done() { return playframe >= numFrames; }

// 0x0023CAF0 NoDraw__8KSReplay
#include "KS/SRC/ks/ksreplay.h"

bool KSReplay::NoDraw() {
    return noDraw;
}

// 0x0023CAF8 MainPOFrames__8KSReplay
#include "KS/SRC/ks/ksreplay.h"

int KSReplay::MainPOFrames() {
    return 4;
}

// 0x0023CA38 SpeedSlow__8KSReplay
#include "KS/SRC/ks/ksreplay.h"

void KSReplay::SpeedSlow() { if (fastforward) { fastforward = false; slomo = true; } else { prepareSlomo = true; } }

// 0x0023CA58 SpeedNormal__8KSReplay
#include "KS/SRC/ks/ksreplay.h"

void KSReplay::SpeedNormal() { if (fastforward) { fastforward = false; slomo = false; } else { prepareNormal = true; } }

// 0x0023AC70 Save__13KSReplayFrame
#include "KS/SRC/ks/ksreplay.h"
#include "KS/SRC/ks/wave.h"
#include "KS/SRC/timer.h"

void KSReplayFrame::Save() { wave_shiftx = WAVE_ShiftX; levelTime = TIMER_GetLevelSec(); totalTime = TIMER_GetTotalSec(); }

// 0x0023C978 Restart__8KSReplay
#include "KS/SRC/ks/ksreplay.h"

__asm__(".equ Play__8KSReplay, 0x0023C6A0");
void KSReplay::Restart() { Play(); firstFrame = 1; }

// 0x00239EB0 __10KSEntityPO
#include "KS/SRC/ks/ksreplay.h"

KSEntityPO::KSEntityPO()
{
}

// 0x0023BFF0 SetWipeoutSplash__8KSReplayi
#include "KS/SRC/ks/ksreplay.h"

void KSReplay::SetWipeoutSplash(int player)
{
    if (mainEntityState == 0 || numFrames >= maxFrames)
        return;

    if (player == 0)
        mainEntityState[numFrames].KSWipeoutSplash = true;
}

// 0x0023C038 SetEndWave__8KSReplay
#include "KS/SRC/ks/ksreplay.h"

void KSReplay::SetEndWave()
{
    if (mainEntityState && numFrames < maxFrames)
        mainEntityState[numFrames].EndWave = true;
}

// 0x0023AC10 SetKSBAnimInfo__13KSEntityStatefbf
#include "KS/SRC/ks/ksreplay.h"

void KSEntityState::SetKSBAnimInfo(float blend, bool loop, float frame)
{
    KSBBlend = (char)(100.0f * blend);
    KSBLoop = loop;
    KSBAnimCall = true;
}

// 0x0023C9E0 Pause__8KSReplayb
#include "KS/SRC/ks/ksreplay.h"

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

// 0x0023A9A0 Reset__13KSEntityState
struct KSEntityState { unsigned int padding; unsigned int flags; void Reset(); };
void KSEntityState::Reset()
{
    register unsigned int value __asm__("$2") = flags;
    __asm__ __volatile__("" : "+r"(value));
    register unsigned int mask1 __asm__("$5") = 0x7fffffffU;
    __asm__ __volatile__("" : "+r"(mask1));
    register unsigned int mask2 __asm__("$3") = 0xbfffffffU;
    value &= mask1;
    __asm__ __volatile__("" : "+r"(value), "+r"(mask2));
    value &= mask2;
    __asm__ __volatile__("" : "+r"(value));
    register unsigned int mask3 __asm__("$6") = 0xffbfffffU;
    __asm__ __volatile__("" : "+r"(mask3));
    register unsigned int mask4 __asm__("$3") = 0xffdfffffU;
    value &= mask3;
    __asm__ __volatile__("" : "+r"(value), "+r"(mask4));
    value &= mask4;
    __asm__ __volatile__("" : "+r"(value));
    register unsigned int mask5 __asm__("$5") = 0xfeffffffU;
    __asm__ __volatile__("" : "+r"(mask5));
    register unsigned int mask6 __asm__("$3") = 0xff7fffffU;
    value &= mask5;
    __asm__ __volatile__("" : "+r"(value), "+r"(mask6));
    register int mask7 __asm__("$6") = -16257;
    __asm__ __volatile__("" : "+r"(mask7));
    value &= mask6;
    __asm__ __volatile__("" : "+r"(value));
    register int mask8 __asm__("$5") = -128;
    __asm__ __volatile__("" : "+r"(mask8));
    value &= mask7;
    __asm__ __volatile__("" : "+r"(value));
    value &= mask8;
    flags = value;
}

// 0x0023BF50 SetCollisionInfo__8KSReplayP12beach_objectP6entityRC8vector3d
class beach_object;class entity;struct vector3d{float x,y,z;vector3d&operator=(const vector3d&o){x=o.x;y=o.y;z=o.z;return *this;}};struct Collision{beach_object*obj;entity*ent;vector3d dir;float timeStamp;};class KSReplay{char p[200];Collision*collisions;int current_collision;int num_collisions;public:void SetCollisionInfo(beach_object*,entity*,const vector3d&);};extern float level_seconds;asm(".equ level_seconds,0x0046B284");void KSReplay::SetCollisionInfo(beach_object*obj,entity*ent,const vector3d&dir){if(collisions==0||(unsigned)num_collisions>=100)return;collisions[num_collisions].obj=obj;collisions[num_collisions].ent=ent;collisions[num_collisions].dir=dir;collisions[num_collisions].timeStamp=level_seconds;num_collisions++;}

// 0x0023B2E8 Term__8KSReplay
class KSReplay{char padding0[96];void*frame;void*mainEntityState;void*aiEntityState;void*mainEntityPO;void*aiEntityPO;int maxframes;char padding1[80];void*collisions;int num_collisions;int current_collision;public:void Term();};extern "C" void vec_delete(void*)__asm__("__builtin_vec_delete");asm(".equ __builtin_vec_delete,0x002AC6D0");void KSReplay::Term(){if(collisions)vec_delete(collisions);collisions=0;current_collision=0;num_collisions=0;if(frame)vec_delete(frame);frame=0;if(mainEntityState)vec_delete(mainEntityState);mainEntityState=0;if(mainEntityPO)vec_delete(mainEntityPO);mainEntityPO=0;if(aiEntityState)vec_delete(aiEntityState);aiEntityState=0;if(aiEntityPO)vec_delete(aiEntityPO);aiEntityPO=0;maxframes=0;}

// Source implementation boundary.
// 0x002700D0 __tf8KSReplay
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x005120E0"); asm(".equ type_name, 0x004E5048");
extern "C" void *GetTypeInfo() __asm__("__tf8KSReplay");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
