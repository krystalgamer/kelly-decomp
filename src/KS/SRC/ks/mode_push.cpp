// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00285970)
// 0x00285970 SetDifficulty__8PushModei
class PushMode {
    char padding[0x44];
    int scoreRequired;
public:
    void SetDifficulty(int points);
};

void PushMode::SetDifficulty(int points) {
    scoreRequired = points;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00285B70)
// 0x00285B70 GetPlayerShare__C8PushModei
struct PushPlayer { float share; char padding[0x1C]; };
class PushMode { PushPlayer players[2]; public: float GetPlayerShare(int index) const; };
float PushMode::GetPlayerShare(int index) const { return players[index].share; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00285B80)
// 0x00285B80 GetPlayerViewport__C8PushModei
class recti { int values[4]; };
struct PushPlayer { float share; char padding[0x4]; recti viewport; char trailing[0x8]; };
class PushMode { PushPlayer players[2]; public: const recti& GetPlayerViewport(int index) const; };
const recti& PushMode::GetPlayerViewport(int index) const { return players[index].viewport; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002858E8)
// 0x002858E8 _$_8PushMode
extern "C" void builtin_delete(void *pointer) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");
extern "C" void PushModeDtor(void *self, int deleting) __asm__("_$_8PushMode");
void PushModeDtor(void *self, int deleting) { if (deleting & 1) builtin_delete(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00285B90)
// 0x00285B90 InCombat__C8PushMode
struct push_player {
    char padding0[4];
    int extraShare;
    char padding1[0x18];
};

class PushMode {
    push_player players[2];

public:
    bool InCombat() const;
};

bool PushMode::InCombat() const {
    for (int i = 0; i < 2; ++i) {
        if (players[i].extraShare > 0) {
            return true;
        }
    }
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00285910)
// 0x00285910 Initialize__8PushModePP22kellyslater_controller
struct kellyslater_controller;
struct PushPlayer {
    float share;
    int extraShare;
    char viewport[16];
    kellyslater_controller *ks;
    int prevScore;
};
class PushMode {
    PushPlayer players[2];
    float attackTimer;
public:
    void CalcViewports();
    void Initialize(kellyslater_controller **controllers);
};
__asm__(".equ CalcViewports__8PushMode, 0x00285EA0");
void PushMode::Initialize(kellyslater_controller **controllers) {
    PushPlayer *player=players;
    int count=1;
    do {
        player->share=0.5f;
        player->extraShare=0;
        player->ks=*controllers;
        player->prevScore=0;
        ++controllers;
        ++player;
        --count;
    } while (count>=0);
    attackTimer=0.0f;
    CalcViewports();
    __asm__ __volatile__("" : : : "memory");
}
#endif
