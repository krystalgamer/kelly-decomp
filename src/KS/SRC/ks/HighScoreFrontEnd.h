#ifndef HIGH_SCORE_FRONT_END_H
#define HIGH_SCORE_FRONT_END_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"

class NameEntryMenu : public FEMultiMenu {
    PanelQuad *box[9];
    PanelQuad *line;
    PanelQuad *name_box[3];
    PanelQuad *keys[41][2];
    bool in_game;

public:
    virtual void OnTriangle(int controller);
    virtual void Select(int entry_index);
    virtual void OnCross(int controller);
    virtual void OnStart(int controller);
};

#endif
