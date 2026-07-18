class FEEntityManager { char padding[0x4]; bool mm_anims_loaded; public: void LoadSurferAnims(int surfer); };
void FEEntityManager::LoadSurferAnims(int surfer) { if (mm_anims_loaded) return; mm_anims_loaded = true; }
