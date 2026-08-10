#ifndef GAME_H
#define GAME_H

#include "KS/SRC/commands.h"
#include "KS/SRC/inputmgr.h"
#include "KS/SRC/stringx.h"

enum game_state_e {
    GAME_STATE_NONE
};

class game_process {
    const char *name;
    const game_state_e *flow;
    int index;
    int num_states;
    float timer;
    bool allow_override;

public:
    game_process();
    game_process(
        const char *process_name,
        const game_state_e *state_flow,
        int state_count);
    ~game_process();

    void go_next_state();
    void reset_index();
    inline int get_cur_state() const {
        return flow[index];
    }
    inline void set_timer(float value) {
        timer = value;
    }
};

#include "g++-2/stl_list.h"

struct BeachData {
    char name[32];
    char data_before_map_location[0x140];
    int map_location;
    char remaining_fields[0xB0];
};

extern BeachData BeachDataArray[];

struct SurferData {
    char fields_before_name[0x16C];
    char name[32];
    char data_before_abbr[0x90];
    char abbr[4];
    char data_before_sort_order[0x68];
    int sort_order;
};

extern SurferData SurferDataArray[];

class nglTexture;
class camera;
class TimeAttackMode;
class MeterAttackMode;
class HeadToHeadMode;

struct game_recti {
    int x0;
    int y0;
    int x1;
    int y1;
};

struct PushPlayer {
    float share;
    int extraShare;
    game_recti viewport;
    class kellyslater_controller *controller;
    int score;
};

class PushMode {
    PushPlayer players[2];
    float attackTimer;
    int scoreRequired;

public:
    void Initialize(class kellyslater_controller **controllers);
    void CalcViewports();
    ~PushMode();
    void SetDifficulty(int points);
    float GetPlayerShare(int player) const;
    const game_recti &GetPlayerViewport(int player) const;
    bool InCombat() const;
};

struct PlayMode {
    TimeAttackMode *timeAttack;
    MeterAttackMode *meterAttack;
    HeadToHeadMode *headToHead;
    PushMode *push;
};

class game_info {
protected:
    friend class game;

    int difficulty;
    stringx hero_name_0;
    stringx hero_name_1;

public:
    game_info();
    void reset();

    inline const int &get_difficulty() const {
        return difficulty;
    }
    inline void set_difficulty(const int &value) {
        difficulty = value;
    }
    inline const stringx &get_hero_name_0() const {
        return hero_name_0;
    }
    inline void set_hero_name_0(const stringx &value) {
        hero_name_0 = value;
    }
    inline const stringx &get_hero_name_1() const {
        return hero_name_1;
    }
    inline void set_hero_name_1(const stringx &value) {
        hero_name_1 = value;
    }
    const stringx &get_hero_name(int hero_num);
};

class game {
    char data_before_process_stack[0x5c];
    list<game_process> process_stack;
    char data_after_process_stack[0x08];
    int snapshotState;
    nglTexture *destSnapshot;
    int renderState;
    int game_mode;
    PlayMode play_mode;
    camera *player_cam[2];
    game_recti player_viewports[2];
    char data_before_num_ai_players[4];
    int num_ai_players;
    int num_players;
    int active_player;
    int num_active_players;
    char data_to_flags[4];
    struct {
        unsigned long long padding : 44;
        unsigned long long game_paused : 1;
    } flag;
    char data_to_level_id[0x154];
    int levelid;
    int beachid;
    char data_to_board_index[0x24];
    int boardIdx[2];
    char data_to_loading_state[0x38];
    int current_loading_state;
    char data_to_loading_progress[4];
    float loading_progress;
    float last_loading_progress;

public:
    void do_profiler_stuff();
    void render_shadows();
    void render_black_screen();
    void render_fe();
    void render_mem_free_screen();
    void clear_screen();
    void draw_debug_labels();
    void set_num_ai_players(int count);
    void set_level(int level);
    void set_beach(int beach);
    void SetBoardIdx(int hero, int index);
    void LoadingStateReset();
    void load_new_level(const stringx &name);
    bool play_movie(
        const char *name,
        bool play_video,
        int width = 720,
        int height = 480);
    bool is_paused() const;
    bool was_start_pressed() const;
    bool was_A_pressed() const;
    bool was_B_pressed() const;
    void advance_state_paused(float time_inc);
    void frame_advance_game_overlays(float time_inc);
    int get_first_beach();
    stringx get_beach_location_name();
    int get_first_surfer_index();
    void take_snapshot(nglTexture *destination);
    void retry_mode(bool reload);
    void retry_level(bool reload = false);
    void turn_user_cam_on(bool enabled);
    void pause();
    void end_level();
    float get_player_share(int player) const;
    int get_cur_state() const;
    inline int get_num_players() const {
        return num_players;
    }
    inline int get_num_ai_players() const {
        return num_ai_players;
    }
    inline int get_num_active_players() {
        return num_active_players;
    }
    inline int get_active_player() const {
        return active_player;
    }
    inline bool is_splitscreen() const {
        return num_players >= 2 && num_ai_players == 0;
    }
    inline int get_beach_id() const {
        return *(const int *)((const char *)this + 0x228);
    }
    inline camera *get_player_camera(int player) {
        return player_cam[player];
    }
    void push_process(game_process &process);
    void go_next_state();
    void reset_index();
};

extern game *g_game_ptr;

__asm__(".equ frame_advance_game_overlays__4gamef, 0x00284568");
__asm__(".equ BeachDataArray, 0x0043C198");
__asm__(".equ SurferDataArray, 0x004254E0");
__asm__(".equ g_game_ptr, 0x0046AC64");

#endif
