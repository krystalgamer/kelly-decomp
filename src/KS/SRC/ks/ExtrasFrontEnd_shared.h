#ifndef KELLY_DECOMP_EXTRAS_FRONT_END_SHARED_H
#define KELLY_DECOMP_EXTRAS_FRONT_END_SHARED_H

#include "KS/SRC/ks/GraphicalMenuSystem_shared.h"
#include "KS/SRC/ks/FrontEndManager_shared.h"

#pragma interface

class PreformatText;

class CreditsFrontEnd : public FEMultiMenu {
    PreformatText *credits;
    GraphicalMenuSystem *sys;
    float first_line_y;
    float x_all;
    int up_pressed;
    int down_pressed;

public:
    virtual void OnActivate();
};

#endif
