#ifndef KELLY_DECOMP_GAME_SHARED_H
#define KELLY_DECOMP_GAME_SHARED_H

#include "KS/SRC/commands_shared.h"
#include "KS/SRC/inputmgr_shared.h"

class stringx {
    char *characters;
    void *buffer;

public:
    stringx(const char *text, int length = -1);
};

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

class game {
public:
    bool is_paused() const;
    bool was_start_pressed() const;
    bool was_A_pressed() const;
    bool was_B_pressed() const;
    void advance_state_paused(float time_inc);
    void frame_advance_game_overlays(float time_inc);
    int get_first_beach();
    stringx get_beach_location_name();
    int get_first_surfer_index();
};

__asm__(".equ frame_advance_game_overlays__4gamef, 0x00284568");
__asm__(".equ BeachDataArray, 0x0043C198");
__asm__(".equ SurferDataArray, 0x004254E0");

#endif
