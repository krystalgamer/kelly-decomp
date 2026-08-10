#ifndef HIGH_SCORE_FRONT_END_H
#define HIGH_SCORE_FRONT_END_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"

class GraphicalMenuSystem;

class HighScoreFrontEnd : public FEMultiMenu {
    char high_score_data_before_system[
        0x160 - sizeof(FEMultiMenu)];
    GraphicalMenuSystem *sys;
    char high_score_data_before_in_game[0x28C - 0x164];
    int in_game;

public:
    virtual void OnUp(int controller);
    virtual void OnDown(int controller);
    virtual void OnStart(int controller);
    virtual void OnTriangle(int controller);
};

class NameEntryMenu : public FEMultiMenu {
    PanelQuad *box[9];
    PanelQuad *line;
    PanelQuad *name_box[3];
    PanelQuad *keys[41][2];
    bool in_game;

public:
    virtual void Update(float time_inc);
    virtual void OnTriangle(int controller);
    virtual void Select(int entry_index);
    virtual void OnCross(int controller);
    virtual void OnStart(int controller);
};

#endif
