// Released effects rendering controls.

#include "KS/SRC/ks/ksfx.h"

// 0x0036D2B8 ks_fx_SetDrawCrash__Fb
void ks_fx_SetDrawCrash(bool enabled) {
    FXD.Render.Part_Crash = enabled;
}

// 0x0036D2D8 ks_fx_SetDrawTrailGeom__Fb
void ks_fx_SetDrawTrailGeom(bool enabled) {
    FXD.Render.Geom_Trail = enabled;
}

// 0x0036D2F8 ks_fx_SetDrawSpray__Fb
void ks_fx_SetDrawSpray(bool enabled) {
    FXD.Render.Spray_Trail = enabled;
}

// 0x0036D318 ks_fx_SetDrawSprayGeom__Fb
void ks_fx_SetDrawSprayGeom(bool enabled) {
    FXD.Render.Geom_Spray = enabled;
}

// 0x0036D338 ks_fx_SetDrawLoose__Fb
void ks_fx_SetDrawLoose(bool enabled) {
    FXD.Render.Part_Loose = enabled;
}

// 0x0036D358 ks_fx_SetDrawWeather__Fb
void ks_fx_SetDrawWeather(bool enabled) {
    FXD.Render.Weather = enabled;
}

// 0x0036D378 ks_fx_SetDrawUnderwater__Fb
void ks_fx_SetDrawUnderwater(bool enabled) {
    FXD.Render.Underwater = enabled;
}

// 0x0036D398 ks_fx_SetDrawSplashes__Fb
void ks_fx_SetDrawSplashes(bool enabled) {
    FXD.Render.Splashes = enabled;
}
