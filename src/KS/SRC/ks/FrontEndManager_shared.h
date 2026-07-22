#ifndef KELLY_DECOMP_FRONT_END_MANAGER_SHARED_H
#define KELLY_DECOMP_FRONT_END_MANAGER_SHARED_H

#include "KS/SRC/ks/GraphicalMenuSystem_shared.h"

class IGOFrontEnd;
class GraphicalMenuSystem;
class FEEntityManager {
public:
    void Update(time_value_t time_inc);
};
class HelpbarFE {
public:
    void DisableHelpbar();
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
    char manager_context[0x156a0 - 0x10];
    BeachFrontEnd *map;
    HelpbarFE *helpbar;

    void UpdateFE(time_value_t time_inc);
};

extern FEManager frontendmanager;

#endif
