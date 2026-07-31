#ifndef MCDETECTFRONTEND_H
#define MCDETECTFRONTEND_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"
#include "KS/SRC/ks/GraphicalMenuSystem.h"

class MCDetectFrontEnd : public FEMultiMenu {
    enum {
        MCContinue,
        MCRetry,
        MCLastEntry
    };

    FEMenuEntry *entries[MCLastEntry];

public:
    void tryToLoadMostRecent();
    bool findGlobalData(int &foundPort, int &foundSlot);
    virtual void OnActivate();
    virtual void OnTriangle(int controller);
    virtual void OnRight(int controller);
    virtual void OnLeft(int controller);
    virtual void Draw();
    virtual void SetSystem(FEMenuSystem *system);
};

extern bool onlyGoToMCScreenOnce;

__asm__(".equ onlyGoToMCScreenOnce, 0x0040CDEC");
__asm__(
    ".equ tryToLoadMostRecent__16MCDetectFrontEnd, "
    "0x001A4DA0");

#endif
