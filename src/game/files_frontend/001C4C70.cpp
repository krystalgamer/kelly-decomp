class FEEntityManager { char padding[0x240]; int cur_state; int last_state; public: void ExitState(); };
void FEEntityManager::ExitState() { last_state = cur_state; cur_state = 6; }
