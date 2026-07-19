// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00286978)
// 0x00286978 go_next_state__12game_process
class game_process { char padding[0x8]; int index; public: void go_next_state(); };
void game_process::go_next_state() { ++index; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00286988)
// 0x00286988 reset_index__12game_process
class game_process {
    char padding[0x8];
    int index;
public:
    void reset_index();
};

void game_process::reset_index() {
    index = 0;
}
#endif
