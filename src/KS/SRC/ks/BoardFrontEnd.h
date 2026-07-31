#ifndef BOARDFRONTEND_H
#define BOARDFRONTEND_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"
#include "KS/SRC/ks/GraphicalMenuSystem.h"

class BoardFrontEnd : public FEMultiMenu {
    bool unlocked;
    GraphicalMenuSystem *sys;

public:
    virtual void Load();
    virtual void Select();
    virtual void Select(int entry_index);
    virtual void OnUp(int controller);
    virtual void OnDown(int controller);
    virtual void OnCross(int controller);
    virtual void OnAnyButtonPress(int controller, int button);
    virtual void OnTriangle(int controller);
    bool IsLevelBoardUnlocked(int location);

private:
    virtual void SetPQIndices();
};

#endif
