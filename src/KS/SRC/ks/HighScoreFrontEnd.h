#ifndef HIGH_SCORE_FRONT_END_H
#define HIGH_SCORE_FRONT_END_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"

class NameEntryMenu : public FEMultiMenu {
public:
    virtual void OnTriangle(int controller);
};

#endif
