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
    char manager_context_before_col_info_b[0x15644 - 0x10];
    color32 col_info_b;
    char manager_context_before_game_mode[0x1566c - 0x15648];
    game_mode_t tmp_game_mode;
    char manager_context_after_game_mode[4];
    bool fe_initialized;
    bool fe_done;
    bool fe_done_loading;
    bool in_game_map_up;
    bool return_to_fe;
    bool map_loading_screen;
    char manager_context_after_map_loading_screen[0x14];
    BeachFrontEnd *map;
    HelpbarFE *helpbar;

    FEManager();
    virtual ~FEManager();
    void InitFE();
    void UpdateFE(time_value_t time_inc);
    void DrawFE();
    void ReleaseFE();
    void UpdateIGO(time_value_t time_inc);
    void DrawIGO();
    void ReleaseIGO();
    void UpdateIGOScene();
    void OnLevelLoaded();
    void OnLevelEnding();
};

extern FEManager frontendmanager;

__asm__(".equ LoadAll__15FEEntityManager, 0x001C56E0");

#endif
