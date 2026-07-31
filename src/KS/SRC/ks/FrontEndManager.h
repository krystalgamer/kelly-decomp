#ifndef FEMANAGER_H
#define FEMANAGER_H

#pragma interface

#include "KS/SRC/ks/FEEntityManager.h"
#include "KS/SRC/ks/FEMenu.h"
#include "KS/SRC/ks/GraphicalMenuSystem.h"
#include "KS/SRC/ks/mode.h"

class IGOFrontEnd;
class PauseMenuSystem;
class GraphicalMenuSystem;
class BeachFrontEnd;

class FEManager {
public:
    IGOFrontEnd *IGO;
    PauseMenuSystem *pms;
    GraphicalMenuSystem *gms;
    FEEntityManager *em;
    char manager_context_before_game_mode[0x1566c - 0x10];
    game_mode_t tmp_game_mode;
    char manager_context_before_loading[0x0c];
    bool fe_done_loading;
    char manager_context_after_loading[0x20];
    BeachFrontEnd *map;
    HelpbarFE *helpbar;

    FEManager();
    virtual ~FEManager();
    void UpdateFE(time_value_t time_inc);
};

extern FEManager frontendmanager;

__asm__(".equ frontendmanager, 0x003E7728");
__asm__(".equ LoadAll__15FEEntityManager, 0x001C56E0");

#endif
