// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001C4C70)
// 0x001C4C70 ExitState__15FEEntityManager
class FEEntityManager { char padding[0x240]; int cur_state; int last_state; public: void ExitState(); };
void FEEntityManager::ExitState() { last_state = cur_state; cur_state = 6; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001C9140)
// 0x001C9140 LoadSurferAnims__15FEEntityManageri
class FEEntityManager { char padding[0x4]; bool mm_anims_loaded; public: void LoadSurferAnims(int surfer); };
void FEEntityManager::LoadSurferAnims(int surfer) { if (mm_anims_loaded) return; mm_anims_loaded = true; }
#endif
