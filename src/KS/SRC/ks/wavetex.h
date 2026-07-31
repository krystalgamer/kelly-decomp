#ifndef WAVETEX_H
#define WAVETEX_H

bool mem_malloc_locked();
void mem_lock_malloc(bool locked);
bool WAVETEX_UnloadTextureAnims();
bool WAVETEX_LoadTextureAnims(bool reset_parameters);
bool WAVETEX_ReloadTextureAnims();

#endif
