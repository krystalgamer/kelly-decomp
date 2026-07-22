#ifndef KELLY_DECOMP_KSDBMENU_SHARED_H
#define KELLY_DECOMP_KSDBMENU_SHARED_H

#include "KS/SRC/ks/menu_shared.h"

enum {
    MENUCMD_CROSS = 7,
};

class game {
public:
    void turn_user_cam_on(bool enabled);
};

extern game *g_game_ptr;
extern MenuSystem *menus;

bool UserCamButton(MenuEntry *entry, int button);
bool ReplayCancelButton(MenuEntry *entry, int button);
bool ReplaySaveButton(MenuEntry *entry, int button);

#endif
