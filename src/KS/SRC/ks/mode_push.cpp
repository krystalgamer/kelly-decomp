// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00285B90)
// 0x00285B90 InCombat__C8PushMode
#include "KS/SRC/game.h"

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
