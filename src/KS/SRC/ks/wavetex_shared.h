#ifndef KELLY_DECOMP_WAVETEX_SHARED_H
#define KELLY_DECOMP_WAVETEX_SHARED_H

bool mem_malloc_locked();
void mem_lock_malloc(bool locked);
bool WAVETEX_UnloadTextureAnims();
bool WAVETEX_LoadTextureAnims(bool reset_parameters);
bool WAVETEX_ReloadTextureAnims();

#endif
