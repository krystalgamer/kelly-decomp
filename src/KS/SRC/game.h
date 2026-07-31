#ifndef GAME_H
#define GAME_H

#include "KS/SRC/commands.h"
#include "KS/SRC/inputmgr.h"
#include "KS/SRC/stringx.h"

class game_process {
    const char *name;
    const int *flow;
    int index;
    int num_states;
    float timer;
    bool allow_override;

public:
    game_process();
    game_process(
        const char *process_name,
        const int *state_flow,
        int state_count);
    ~game_process();

    void reset_index();
    inline void set_timer(float value) {
        timer = value;
    }
};

#include "g++-2/stl_list_shared.h"

struct BeachData {
    char name[32];
    char remaining_fields[500];
};

extern BeachData BeachDataArray[];

struct SurferData {
    char fields_before_sort_order[648];
    int sort_order;
};

extern SurferData SurferDataArray[];

class nglTexture;
class camera;
class TimeAttackMode;
class MeterAttackMode;
class HeadToHeadMode;

class PushMode {
public:
    float GetPlayerShare(int player) const;
};

struct PlayMode {
    TimeAttackMode *timeAttack;
    MeterAttackMode *meterAttack;
    HeadToHeadMode *headToHead;
    PushMode *push;
};

struct game_recti {
    int x0;
    int y0;
    int x1;
    int y1;
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
    int num_players;
    int num_ai_players;
    int num_active_players;
    int active_player;

public:
    void do_profiler_stuff();
    void render_shadows();
    void render_black_screen();
    void clear_screen();
    void draw_debug_labels();
    void set_num_ai_players(int count);
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
    float get_player_share(int player) const;
    inline int get_num_players() const {
        return num_players;
    }
    inline int get_num_active_players() {
        return num_active_players;
    }
    inline int get_active_player() const {
        return active_player;
    }
    inline int get_beach_id() const {
        return *(const int *)((const char *)this + 0x228);
    }
    inline camera *get_player_camera(int player) {
        return player_cam[player];
    }
    void push_process(game_process &process);
};

extern game *g_game_ptr;

__asm__(".equ frame_advance_game_overlays__4gamef, 0x00284568");
__asm__(".equ BeachDataArray, 0x0043C198");
__asm__(".equ SurferDataArray, 0x004254E0");
__asm__(".equ g_game_ptr, 0x0046AC64");

#endif
