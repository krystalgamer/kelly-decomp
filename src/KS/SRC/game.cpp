// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002778E8)
// 0x002778E8 clear_zbuffer__Fv
void clear_zbuffer() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00277E20)
// 0x00277E20 nslNoPrint__FPCc
void nslNoPrint(const char* text) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00277E28)
// 0x00277E28 nslNoErrors__FPCc
void nslNoErrors(const char* text) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002791D0)
// 0x002791D0 do_profiler_stuff__4game
class game {
public:
    void do_profiler_stuff();
};

void game::do_profiler_stuff() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00279DF0)
// 0x00279DF0 render_shadows__4game
class game {
public:
    void render_shadows();
};

void game::render_shadows() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00279F30)
// 0x00279F30 render_black_screen__4game
class game {
public:
    void render_black_screen();
};

void game::render_black_screen() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0027A830)
// 0x0027A830 set_beach__4gamei
class game { char padding[0x224]; int levelid; int beachid; public: void set_beach(int beach); };
void game::set_beach(int beach) { levelid = 31; beachid = beach; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0027D968)
// 0x0027D968 is_paused__C4game
struct game_flags {
    unsigned long long padding : 44;
    unsigned long long game_paused : 1;
};

class game {
    char padding[0xC8];
    game_flags flag;

public:
    bool is_paused() const;
};

bool game::is_paused() const {
    return flag.game_paused;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00284628)
// 0x00284628 clear_screen__4game
class game {
public:
    void clear_screen();
};

void game::clear_screen() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00284B80)
// 0x00284B80 SetBoardIdx__4gameii
class game { char padding[0x250]; int boardIdx[2]; public: void SetBoardIdx(int hero, int index); };
void game::SetBoardIdx(int hero, int index) { boardIdx[hero] = index; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00284E90)
// 0x00284E90 draw_debug_labels__4game
class game {
public:
    void draw_debug_labels();
};

void game::draw_debug_labels() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00284E98)
// 0x00284E98 set_num_ai_players__4gamei
class game {
    char padding[0xB4];
    int num_ai_players;
public:
    void set_num_ai_players(int count);
};

void game::set_num_ai_players(int count) {
    num_ai_players = count;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00284EE0)
// 0x00284EE0 LoadingStateReset__4game
class game { char padding[0x290]; int current_loading_state; char padding_to_progress[0x4]; float loading_progress; float last_loading_progress; public: void LoadingStateReset(); };
void game::LoadingStateReset() { current_loading_state = 0; loading_progress = 0; last_loading_progress = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0027A808)
// 0x0027A808 set_level__4gamei
struct CareerData { int beach; char padding[0xd8]; };
extern CareerData CareerDataArray[];
__asm__(".equ CareerDataArray, 0x0042ECA0");
class game { char padding[0x224]; int levelid; int beachid; public: void set_level(int level); };
void game::set_level(int level) { levelid = level; beachid = CareerDataArray[levelid].beach; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002791D8)
// 0x002791D8 render_fe__4game
void FEDraw();
__asm__(".equ FEDraw__Fv, 0x00199130");
class game { public: void render_fe(); void render_mem_free_screen(); };
__asm__(".equ render_mem_free_screen__4game, 0x00278FF0");
void game::render_fe() { FEDraw(); render_mem_free_screen(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0027AA70)
// 0x0027AA70 set_movie__4gameG7stringx
class stringx {
    char *chars;
    void *my_buf;

public:
    ~stringx();
    stringx &operator=(const stringx &other);
};

__asm__(".equ __as__7stringxRC7stringx, 0x0034E0B8");
__asm__(".equ _$_7stringx, 0x0034D6E0");

extern "C" void StringAssign(stringx *self, const stringx &other)
    __asm__("__as__7stringxRC7stringx");
extern "C" void StringDtor(stringx *self, int deleting)
    __asm__("_$_7stringx");

extern "C" void SetMovie(void *self, stringx *name)
    __asm__("set_movie__4gameG7stringx");

void SetMovie(void *self, stringx *name)
{
    StringAssign((stringx *)((char *)self + 0x22C), *name);
    StringDtor(name, 2);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002778F0)
// 0x002778F0 __9game_info
class stringx { char storage[8]; public: stringx(); };
class game_info {
    int difficulty;
    stringx hero_name_0;
    stringx hero_name_1;
public:
    game_info();
    void reset();
};
asm(".equ __7stringx, 0x0034D3E0");
asm(".equ reset__9game_info, 0x00277D58");
game_info::game_info()
{
    reset();
}
#endif
