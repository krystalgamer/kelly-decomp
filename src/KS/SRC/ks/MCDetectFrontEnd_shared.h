#ifndef KELLY_DECOMP_MC_DETECT_FRONT_END_SHARED_H
#define KELLY_DECOMP_MC_DETECT_FRONT_END_SHARED_H

#define KELLY_DECOMP_FULL_FEMULTI_MENU
#define KELLY_DECOMP_BUILT_FEMENU_SELECT_PADDING
#include "KS/SRC/ks/FEMenu_shared.h"
#undef KELLY_DECOMP_BUILT_FEMENU_SELECT_PADDING
#undef KELLY_DECOMP_FULL_FEMULTI_MENU

#pragma interface

class GraphicalMenuSystem {
public:
    enum {
        MainMenu
    };
};

class os_developer_options {
    char built_fields[0x194];
    bool e3_build;

public:
    enum {
        FLAG_E3_BUILD
    };

    static os_developer_options *instance;

    static inline os_developer_options *inst() {
        return instance;
    }

    inline bool is_flagged(int) const {
        return e3_build;
    }
};

class MCDetectFrontEnd : public FEMultiMenu {
    enum {
        MCContinue,
        MCRetry,
        MCLastEntry
    };

    FEMenuEntry *entries[MCLastEntry];

public:
    void tryToLoadMostRecent();
    virtual void OnActivate();
};

extern bool onlyGoToMCScreenOnce;

__asm__(".equ _20os_developer_options$instance, 0x0046B180");
__asm__(".equ onlyGoToMCScreenOnce, 0x0040CDEC");
__asm__(
    ".equ tryToLoadMostRecent__16MCDetectFrontEnd, "
    "0x001A4DA0");

#endif
