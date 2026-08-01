#ifndef BEACH_FRONT_END_H
#define BEACH_FRONT_END_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"

class BeachFrontEnd : public FEMultiMenu {
    char data_to_exiting_without_select[
        0xF20 - sizeof(FEMultiMenu)];
    bool exitingWithoutSelect;

public:
    void OnUnactivate();
};

#endif
