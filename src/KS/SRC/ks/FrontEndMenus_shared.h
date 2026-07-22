#ifndef KELLY_DECOMP_FRONT_END_MENUS_SHARED_H
#define KELLY_DECOMP_FRONT_END_MENUS_SHARED_H

#include "KS/SRC/ks/FEMenu_shared.h"

#pragma interface

enum FEMENUCMD {
    FEMENUCMD_SELECT,
    FEMENUCMD_START,
    FEMENUCMD_UP,
    FEMENUCMD_DOWN,
    FEMENUCMD_LEFT,
    FEMENUCMD_RIGHT,
    FEMENUCMD_CROSS,
};

class PauseMenuSystem;

class PauseMenuClass : public FEMenu {
public:
    enum { Continue };
    PauseMenuSystem* sys;
    FEMenuEntry* goals;
    FEMenuEntry* tip;
    FEMenuEntry* options;
    FEMenuEntry* trickbook;
    FEMenuEntry* returnFE;
    virtual void OnButtonRelease(int controller, int button);
};

class TimeAttackPauseMenuClass : public FEMenu {
public:
    enum { Continue };
    PauseMenuSystem* sys;
    FEMenuEntry* options;
    FEMenuEntry* trickbook;
    virtual void OnButtonRelease(int controller, int button);
};

class HeatMidMenuClass : public FEMenu {
public:
    enum { Continue };
    PauseMenuSystem* sys;
    FEMenuEntry* options;
    FEMenuEntry* trickbook;
    virtual void OnButtonRelease(int controller, int button);
};

class PauseMenuSystem : public FEMenuSystem {
public:
    bool draw;
    bool replay_mode;
    bool end_level;
    int pause_controller;
    int pause_player;
    void* map;
    TextString* player;
    int popupEvent;
    int navigationEvent;
    virtual void UpdateInScene();
    virtual void endDraw(bool unpause = true);
    void RestartComp();
};

class ReplayMenuClass : public FEMenu {
public:
    enum ReplayType {
        ReplayPlay,
        ReplaySlow,
        ReplayFF
    };

    PauseMenuSystem *sys;

private:
    virtual void ReplayStart();
    virtual void ReplayEnd();
    virtual void ReplayChange(ReplayType option);
    int replayEvent;

public:
    virtual void OnStart(int controller);
};

struct ReplayMenuVTableLayout {
    char entries_before_replay_end[0x178];
    short replay_end_adjustment;
    short replay_end_padding;
    void (*replay_end)(void *self);
};

struct ReplayMenuClassLayout {
    char menu_data[0x74];
    ReplayMenuVTableLayout *vtable;
    PauseMenuSystem *sys;
};

class game {
public:
    void retry_level(bool reload = false);
};

class JudgingSystem {
public:
    void OnCompetitionReset();
};

class beach {
public:
    JudgingSystem judges;
};

extern game* g_game_ptr;
extern beach* g_beach_ptr;

#endif
