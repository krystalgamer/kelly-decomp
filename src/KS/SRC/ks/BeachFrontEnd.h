#ifndef BEACH_FRONT_END_H
#define BEACH_FRONT_END_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"

class BeachFrontEnd : public FEMultiMenu {
public:
    FEMenuSystem *sys;

private:
    char data_to_sliding_in[0xF18 - sizeof(FEMultiMenu) - sizeof(FEMenuSystem *)];
    bool sliding_in;
    char data_to_exiting_without_select[0xF20 - 0xF1C];
    bool exitingWithoutSelect;

public:
    void ReturnToFE();
    virtual void OnLevelEnding();
    void OnUnactivate();
};

#endif
