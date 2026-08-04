#ifndef INCLUDED_FRONTENDMENUS_H
#define INCLUDED_FRONTENDMENUS_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"

enum FEMENUCMD {
    FEMENUCMD_SELECT,
    FEMENUCMD_START,
    FEMENUCMD_UP,
    FEMENUCMD_DOWN,
    FEMENUCMD_LEFT,
    FEMENUCMD_RIGHT,
    FEMENUCMD_CROSS
};

class PauseMenuSystem;

class SoundMenuClass : public FEMenu {
public:
    virtual void Select(int entry_index);
};

class TrickMenuClass : public FEMenu {
public:
    virtual void Select(int entry_index);
    virtual void OnActivate();
    virtual void OnCross(int controller);
};

class GoalsMenuClass : public FEMenu {
public:
    virtual void OnUp(int controller);
    virtual void OnDown(int controller);
    virtual void OnCross(int controller);
};

class PauseMenuClass : public FEMenu {
public:
    enum {
        Continue,
        Retry,
        Goals,
        Tip,
        Options,
        TrickBook,
        EndRun,
        ReturnToFE
    };

    PauseMenuSystem *sys;
    FEMenuEntry *goals;
    FEMenuEntry *tip;
    FEMenuEntry *options;
    FEMenuEntry *trickbook;
    FEMenuEntry *returnFE;

    virtual void OnButtonRelease(int controller, int button);
};

class TimeAttackPauseMenuClass : public FEMenu {
public:
    enum {
        Continue,
        Options,
        TrickBook,
        EndRun,
        Restart,
        Quit,
        ReturnToFE
    };

    PauseMenuSystem *sys;
    FEMenuEntry *options;
    FEMenuEntry *trickbook;

    virtual void OnButtonRelease(int controller, int button);
};

class TutorialPauseMenuClass : public FEMenu {
public:
    enum {
        NextTip,
        Continue,
        Retry,
        Options,
        TrickBook,
        EndRun,
        ReturnToFE
    };

    PauseMenuSystem *sys;
    FEMenuEntry *options;
    FEMenuEntry *trickbook;

    virtual void OnButtonRelease(int controller, int button);
};

class HeatMidMenuClass : public FEMenu {
public:
    enum {
        Continue,
        Restart,
        Goals,
        Tip,
        Options,
        TrickBook,
        EndRun,
        EndComp
    };

    PauseMenuSystem *sys;
    FEMenuEntry *options;
    FEMenuEntry *trickbook;

    virtual void OnButtonRelease(int controller, int button);
};

enum {
    SONGS_PER_SCREEN = 6
};

class PlaylistMenuClass : public FEMenu {
private:
    PauseMenuSystem *sys;
    stringx *song_names;
    FEMenuEntry *songName[SONGS_PER_SCREEN];
    TextString *upArrow;
    TextString *downArrow;
    TextString *helpText2;
    TextString *lineNumbers[SONGS_PER_SCREEN];
    TextString *onOff[SONGS_PER_SCREEN];
    TextString *playing;
    TextString *currentSong;
    TextString *currentArtist;
    int offset;
    int pos;
    int active;
    int numSongs;
    color32 col;
    color32 colh;
    bool tweaked;

public:
    virtual void OnSquare(int controller);
    virtual void Select(int entry_index);
    virtual void OnCircle(int controller);
};

class PauseMenuSystem : public FEMenuSystem {
public:
    bool draw;
    bool replay_mode;
    bool end_level;
    int pause_controller;
    int pause_player;
    void *map;
    TextString *player;
    int popupEvent;
    int navigationEvent;

    virtual void Draw();
    virtual void UpdateInScene();
    virtual void endDraw(bool unpause = true);
    void RestartComp();
    void PrepareToEndLevel() { end_level = true; }
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
    virtual void OnL2(int controller);
    virtual void OnCircle(int controller);
};

class SaveCareerPromptClass : public FEMenu {
public:
    PauseMenuSystem *sys;
    int myFrameTimer;
    int myState;
    int next_menu;
    FEMenuEntry *yes;
    FEMenuEntry *no;
    BoxText *message;

    virtual void Draw();
};

class TipMenuClass : public FEMenu {
public:
    BoxText *tip;
    stringx *tip_list;
    int tip_list_size;
    PauseMenuSystem *sys;

    virtual void Init();
};

#endif
