#ifndef KELLY_DECOMP_FRONT_END_MANAGER_SHARED_H
#define KELLY_DECOMP_FRONT_END_MANAGER_SHARED_H

#include "KS/SRC/ks/GraphicalMenuSystem.h"
#include "KS/SRC/ks/HelpbarFE_shared.h"

class IGOFrontEnd;
class GraphicalMenuSystem;
class FEEntityManager {
public:
    void Update(time_value_t time_inc);
    void LoadAll();
};
class PauseMenuSystem {
public:
    void ActivateAndExit();
};

class BeachFrontEnd {
public:
    void HideAllDots();
};

class FEManager {
public:
    IGOFrontEnd *IGO;
    PauseMenuSystem *pms;
    GraphicalMenuSystem *gms;
    FEEntityManager *em;
    char manager_context_before_loading[0x1567c - 0x10];
    bool fe_done_loading;
    char manager_context_after_loading[0x20];
    BeachFrontEnd *map;
    HelpbarFE *helpbar;

    void UpdateFE(time_value_t time_inc);
};

extern FEManager frontendmanager;

__asm__(".equ frontendmanager, 0x003E7728");
__asm__(".equ LoadAll__15FEEntityManager, 0x001C56E0");

#endif
