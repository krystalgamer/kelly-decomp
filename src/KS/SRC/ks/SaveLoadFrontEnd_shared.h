#ifndef KELLY_DECOMP_SAVE_LOAD_FRONT_END_SHARED_H
#define KELLY_DECOMP_SAVE_LOAD_FRONT_END_SHARED_H

#pragma interface

#define KELLY_DECOMP_FULL_FEMENU_ENTRY
#include "KS/SRC/ks/FEMenu_shared.h"
#undef KELLY_DECOMP_FULL_FEMENU_ENTRY

class FEManager {
    char manager_data[0x15644];

public:
    color32 col_info_b;
};

extern FEManager frontendmanager;

class NamesMenu : public FEMultiMenu {
public:
    void OnUnactivate(FEMenu *menu);
    void RefreshDisplay();
    void TurnPQ(bool enabled);
};

#endif
