#ifndef PAL60_FRONT_END_H
#define PAL60_FRONT_END_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"

class PAL60FrontEnd : public FEMultiMenu {
protected:
    PanelQuad *box;
    BoxText *msg;
    FEMenuEntry *yes;
    FEMenuEntry *no;
    int selected;
    bool done;

public:
    PAL60FrontEnd(
        FEMenuSystem *system,
        FEManager *manager,
        stringx path,
        stringx panel);
    virtual ~PAL60FrontEnd();
    virtual void Init();
    virtual void Draw();
    virtual void Update(time_value_t time_inc);
    virtual void Select(int entry);
    void Pick(int entry);
    virtual void OnActivate();
    virtual void OnTriangle(int controller);
    virtual void SetSystem(FEMenuSystem *system);
    bool IsDone();
};

#endif
