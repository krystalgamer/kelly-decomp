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

#if defined(KELLY_DECOMP_FUNCTION_00286910)
// 0x00286910 __12game_process
class game_process { const char *name; const void *flow; int index; int num_states; float timer; bool allow_override; public: game_process(); };
game_process::game_process() { name = 0; flow = 0; index = 0; num_states = 0; timer = 0.0f; allow_override = false; }
#endif
