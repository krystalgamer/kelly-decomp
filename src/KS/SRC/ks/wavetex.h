#ifndef WAVETEX_H
#define WAVETEX_H

#include "KS/SRC/matfac.h"

extern int wavetex_playerid;
extern int WavetexDebug_ShadowPass;
extern int newshadowbuf;
extern nglMaterial WaveTexLMat[][5];
extern int wavetex_currentmat;

bool mem_malloc_locked();
void mem_lock_malloc(bool locked);
bool WAVETEX_UnloadTextureAnims();
bool WAVETEX_LoadTextureAnims(bool reset_parameters);
bool WAVETEX_ReloadTextureAnims();
void WAVETEX_ClearShadows();
void WAVETEX_CheckClearShadows();
void WAVETEX_SetPlayer(int player);
int WAVETEX_GetPlayer();
void WAVETEX_SetMatZSorted(bool enabled, int material_id);

#endif
