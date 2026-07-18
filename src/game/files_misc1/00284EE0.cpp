class game { char padding[0x290]; int current_loading_state; char padding_to_progress[0x4]; float loading_progress; float last_loading_progress; public: void LoadingStateReset(); };
void game::LoadingStateReset() { current_loading_state = 0; loading_progress = 0; last_loading_progress = 0; }
