#ifndef KELLY_DECOMP_FRONT_END_MANAGER_SHARED_H
#define KELLY_DECOMP_FRONT_END_MANAGER_SHARED_H

class IGOFrontEnd;
class GraphicalMenuSystem;
class FEEntityManager;

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
};

extern FEManager frontendmanager;

#endif
