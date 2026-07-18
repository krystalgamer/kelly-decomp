class buoy_camera { char padding_to_first[0x2D0]; bool first_time; char padding_to_jump[0x30]; float jump_time_elapsed; public: void init(); };
void buoy_camera::init() { first_time = true; jump_time_elapsed = 0; }
