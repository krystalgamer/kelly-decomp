// Released effects rendering controls.

#include "KS/SRC/ks/ksfx.h"

// 0x0036D2A8 ks_fx_GetDrawCrash__Fv
bool ks_fx_GetDrawCrash() { return FXD.Render.Part_Crash; }

// 0x0036D2B8 ks_fx_SetDrawCrash__Fb
void ks_fx_SetDrawCrash(bool enabled) {
    FXD.Render.Part_Crash = enabled;
}

// 0x0036D2C8 ks_fx_GetDrawTrailGeom__Fv
bool ks_fx_GetDrawTrailGeom() { return FXD.Render.Geom_Trail; }

// 0x0036D2D8 ks_fx_SetDrawTrailGeom__Fb
void ks_fx_SetDrawTrailGeom(bool enabled) {
    FXD.Render.Geom_Trail = enabled;
}

// 0x0036D2E8 ks_fx_GetDrawSpray__Fv
bool ks_fx_GetDrawSpray() { return FXD.Render.Spray_Trail; }

// 0x0036D2F8 ks_fx_SetDrawSpray__Fb
void ks_fx_SetDrawSpray(bool enabled) {
    FXD.Render.Spray_Trail = enabled;
}

// 0x0036D308 ks_fx_GetDrawSprayGeom__Fv
bool ks_fx_GetDrawSprayGeom() { return FXD.Render.Geom_Spray; }

// 0x0036D318 ks_fx_SetDrawSprayGeom__Fb
void ks_fx_SetDrawSprayGeom(bool enabled) {
    FXD.Render.Geom_Spray = enabled;
}

// 0x0036D328 ks_fx_GetDrawLoose__Fv
bool ks_fx_GetDrawLoose() { return FXD.Render.Part_Loose; }

// 0x0036D338 ks_fx_SetDrawLoose__Fb
void ks_fx_SetDrawLoose(bool enabled) {
    FXD.Render.Part_Loose = enabled;
}

// 0x0036D348 ks_fx_GetDrawWeather__Fv
bool ks_fx_GetDrawWeather() { return FXD.Render.Weather; }

// 0x0036D358 ks_fx_SetDrawWeather__Fb
void ks_fx_SetDrawWeather(bool enabled) {
    FXD.Render.Weather = enabled;
}

// 0x0036D368 ks_fx_GetDrawUnderwater__Fv
bool ks_fx_GetDrawUnderwater() { return FXD.Render.Underwater; }

// 0x0036D378 ks_fx_SetDrawUnderwater__Fb
void ks_fx_SetDrawUnderwater(bool enabled) {
    FXD.Render.Underwater = enabled;
}

// 0x0036D388 ks_fx_GetDrawSplashes__Fv
bool ks_fx_GetDrawSplashes() { return FXD.Render.Splashes; }

// 0x0036D398 ks_fx_SetDrawSplashes__Fb
void ks_fx_SetDrawSplashes(bool enabled) {
    FXD.Render.Splashes = enabled;
}
