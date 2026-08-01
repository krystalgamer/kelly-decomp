#ifndef PAL60_FRONT_END_H
#define PAL60_FRONT_END_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"

class PAL60FrontEnd : public FEMultiMenu {
public:
    void Pick(int entry);
    virtual void OnTriangle(int controller);
    virtual void SetSystem(FEMenuSystem *system);
};

#endif
