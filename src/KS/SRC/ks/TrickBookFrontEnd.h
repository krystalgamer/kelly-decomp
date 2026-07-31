#ifndef TRICKBOOKFRONTEND_H
#define TRICKBOOKFRONTEND_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"
#include "KS/SRC/ks/trickdata.h"

class GraphicalMenuSystem;

class TrickBookFrontEnd : public FEMultiMenu {
private:
    enum {
        NUM_TYPES = 6
    };

    GraphicalMenuSystem *sys;
    SurferTrick **tricks[NUM_TYPES];
    TextString *buttons;
    TextString *trickbook;
    FEMenu *State2[NUM_TYPES];
    PanelQuad *arrows[2][2];
    PanelQuad *bkg;
    int arrow_counter;
    int arrow_num;
    bool wait_for_camera;

public:
    virtual void Init();
    virtual void Select(int entry_index);
    virtual void Draw();
    virtual void OnCross(int controller);
    static bool TrickOK(int trick);
};

#endif
