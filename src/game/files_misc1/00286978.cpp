class game_process { char padding[0x8]; int index; public: void go_next_state(); };
void game_process::go_next_state() { ++index; }
