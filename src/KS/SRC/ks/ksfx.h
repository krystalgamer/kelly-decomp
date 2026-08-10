#ifndef KSFX_H
#define KSFX_H

#include "KS/SRC/game.h"
#include "KS/SRC/ks/ksreplay.h"
#include "KS/SRC/timer.h"

#define MAX_WIPEOUT_SPLASHES 2

struct fx_data_render_def {
    int Part_Crash;
    int Geom_Trail;
    int Spray_Trail;
    int Geom_Spray;
    int Part_Loose;
    int Weather;
    int Underwater;
    int Splashes;
};

struct fx_def {
    char data_before_render[0x20];
    fx_data_render_def Render;
    char data_after_render[0x28];
    float wave_inc;
    float wave_dec;
};

struct crashnode_t {
    char data_before_magnitude[0xC];
    float magnitude;
    float size;
    float age;
};

void set_size(crashnode_t *node);

struct wipeout_splash_t
{
    bool valid;
    float start_time;
    int hero_index;
};

extern wipeout_splash_t wipeout_splashes[MAX_WIPEOUT_SPLASHES];
extern fx_def FXD;

__asm__(".equ wipeout_splashes, 0x00485A18");
__asm__(".equ FXD, 0x00485A30");
__asm__(".equ IsPlaying__8KSReplay, 0x0023BE08");
__asm__(".equ SetWipeoutSplash__8KSReplayi, 0x0023BFF0");

#endif
