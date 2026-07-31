#ifndef KSFX_H
#define KSFX_H

#include "KS/SRC/game.h"
#include "KS/SRC/ks/ksreplay.h"
#include "KS/SRC/timer.h"

#define MAX_WIPEOUT_SPLASHES 2

struct wipeout_splash_t
{
    bool valid;
    float start_time;
    int hero_index;
};

extern wipeout_splash_t wipeout_splashes[MAX_WIPEOUT_SPLASHES];

__asm__(".equ wipeout_splashes, 0x00485A18");
__asm__(".equ IsPlaying__8KSReplay, 0x0023BE08");
__asm__(".equ SetWipeoutSplash__8KSReplayi, 0x0023BFF0");

#endif
