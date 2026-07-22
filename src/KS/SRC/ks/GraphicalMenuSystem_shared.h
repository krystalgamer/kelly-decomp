#ifndef KELLY_DECOMP_GRAPHICAL_MENU_SYSTEM_SHARED_H
#define KELLY_DECOMP_GRAPHICAL_MENU_SYSTEM_SHARED_H

#pragma interface

#include "KS/SRC/ks/FEMenu_shared.h"

class GraphicalMenuSystem : public FEMenuSystem {
    char graphical_menu_data[0x120 - sizeof(FEMenuSystem)];
    bool fedb_draw_overlays;

public:
    void DrawTop();
};

#endif
