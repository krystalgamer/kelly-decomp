#ifndef ACCOMP_FRONT_END_H
#define ACCOMP_FRONT_END_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"

class AccompFrontEnd : public FEMultiMenu {
public:
    virtual void Select(int entry_index);
    virtual void OnUp(int controller);
    virtual void OnDown(int controller);
};

#endif
