#ifndef KELLY_DECOMP_CHEAT_FRONT_END_SHARED_H
#define KELLY_DECOMP_CHEAT_FRONT_END_SHARED_H

#pragma interface

#define KELLY_DECOMP_FULL_FEMULTI_MENU
#include "KS/SRC/ks/FEMenu_shared.h"
#undef KELLY_DECOMP_FULL_FEMULTI_MENU
#include "KS/SRC/ks/SoundScript_shared.h"

#define MAX_CHEATS_PER_SCREEN 2
#define NUM_PHONE_NUM_GAPS 2

class GraphicalMenuSystem;

struct CheatFrontEndDispatchVTable {
    char padding[0x1c0];
    short adjustment;
    short padding2;
    void (*on_left)(void *self, int command);
    void (*on_right)(void *self, int command);
};

class CheatFrontEnd : public FEMultiMenu {
public:
    void OnLeft(int command);
    void OnRight(int command);
};

class CheatCodeMenu : public FEMultiMenu {
private:
    FEMenuEntry *cheats[MAX_CHEATS_PER_SCREEN];
    int menu_entry_cheat_index[MAX_CHEATS_PER_SCREEN];
    GraphicalMenuSystem *sys;
    int next_down;
    int next_up;
    TextString *toggle_state[MAX_CHEATS_PER_SCREEN];
    PanelQuad *arrow_up;
    PanelQuad *arrow_down;

public:
    virtual void Draw();
    virtual void Load();
    virtual void Select(int entry_index);
    virtual void Select();
    virtual void OnTriangle(int command);
    virtual void OnActivate();
    virtual void OnUp(int command);
    virtual void OnDown(int command);

private:
    void SetPQIndices();
    void ReOrderEntries(int start);
    void ResetToggles();
    void ResetUpDownArrows();
};

class EnterCheatMenu : public FEMultiMenu {
private:
    GraphicalMenuSystem *sys;
    stringx current_code;
    MultiLineString *code_display;
    TextString *cursor;
    int current_button;
    PanelQuad *numbers_hi[10];
    bool pq_indices_set;
    static const int phone_num_gap[NUM_PHONE_NUM_GAPS];
    bool closing;
    // The built layout retains one word between the closing flag and timer.
    int closing_layout_padding;
    float closing_timer;
    int cheat_unlocked;

public:
    virtual void Update(time_value_t time_inc);
    virtual void Load();
    virtual void Select(int entry_index);
    virtual void Select();
    virtual void OnActivate();
    virtual void OnUp(int command);
    virtual void OnDown(int command);
    virtual void OnRight(int command);
    virtual void OnLeft(int command);
    virtual void OnCross(int command);
    virtual void OnTriangle(int command);
    virtual void Draw();

private:
    void ChangeButton(int new_button);
    void SetPQIndices();
    void ExitMenu(float delay);
};

#endif
