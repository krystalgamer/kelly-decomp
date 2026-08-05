#ifndef WAVETEX_H
#define WAVETEX_H

extern int wavetex_playerid;
extern int WavetexDebug_ShadowPass;
extern int newshadowbuf;

bool mem_malloc_locked();
void mem_lock_malloc(bool locked);
bool WAVETEX_UnloadTextureAnims();
bool WAVETEX_LoadTextureAnims(bool reset_parameters);
bool WAVETEX_ReloadTextureAnims();
void WAVETEX_ClearShadows();
void WAVETEX_CheckClearShadows();
void WAVETEX_SetPlayer(int player);
int WAVETEX_GetPlayer();

#endif
