#ifndef GAME_INFO_H
#define GAME_INFO_H

struct debug_info_t {
    bool dump_frame_info : 1;
    bool dump_threads : 1;
    bool render_spheres : 1;
    bool turtle_watch : 1;
    bool halt_on_asserts : 1;
    bool stay_halted : 1;
    bool simulate32meg : 1;
    bool assert_screen : 1;
    bool mem_free_screen : 1;
};

extern debug_info_t g_debug;

#endif
