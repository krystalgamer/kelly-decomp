#ifndef KELLY_DECOMP_GRAPHICAL_MENU_SYSTEM_SHARED_H
#define KELLY_DECOMP_GRAPHICAL_MENU_SYSTEM_SHARED_H

#pragma interface

#include "KS/SRC/ks/FEMenu_shared.h"

class GraphicalMenuSystem : public FEMenuSystem {
    char graphical_menu_data0[0xd4 - sizeof(FEMenuSystem)];

public:
    bool multiplayer;
    bool multi_1;

private:
    char graphical_menu_data1[0x120 - 0xdc];
    bool fedb_draw_overlays;
    bool soundStarted;
    bool LoadedAll;

public:
    enum {
        MainMenu,
        ExtrasMenu,
        CreditsMenu,
        HighScoreMenu,
        SurferMenu,
        BeachMenu,
        SaveLoadMenu,
        TrickBookMenu,
        BoardMenu,
        AccompMenu,
        LogbookMenu,
        BuiltVersionMenu,
        TitleMenu,
        Legal,
        OptionsMenu
    };

    void DrawTop();
    virtual void LoadAll();
};

#endif
