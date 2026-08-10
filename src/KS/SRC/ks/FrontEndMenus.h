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
    PauseMenuSystem *sys;
    int soundType;
    int sounds[5];
    bool muted;
    FEMenuEntry *sound_mute;
    FEMenuEntry *sound_type;
    FEMenuEntry *sound_levels[5];

    void Change(int index, bool increase);

public:
    virtual void Select(int entry_index);
    virtual void OnLeft(int controller);
    virtual void OnRight(int controller);
};

class CameraMenuClass : public FEMenu {
public:
    PauseMenuSystem *sys;

private:
    FEMenuEntry *menu_item[3];
    bool multiplayer;

public:
    virtual ~CameraMenuClass();
};

class TrickTypeMenuClass : public FEMenu {
public:
    PauseMenuSystem *sys;

private:
    enum {
        NUM_TYPES = 5,
        MAX_ENTRIES = 50
    };

    FEMenu *sub_menus[NUM_TYPES];
    FEMenuEntry *entry[NUM_TYPES];
    int trick_list_index[NUM_TYPES][MAX_ENTRIES];

public:
    virtual ~TrickTypeMenuClass();
    virtual void Init();
    virtual void Select(int entry_index);
    virtual void HighlightDefault();
    virtual void OnActivate();
    virtual void Update(float time_inc);
    virtual void OnTriangle(int controller);
    virtual void OnCross(int controller);
    virtual void OnUp(int controller);
    virtual void OnDown(int controller);
};

class TrickMenuClass : public FEMenu {
public:
    virtual void Select(int entry_index);
    virtual void OnActivate();
    virtual void OnCross(int controller);
};

class GoalsMenuClass : public FEMenu {
public:
    virtual void Load(PanelFile *panel);
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

class HeatEndMenuClass : public FEMenu {
    PauseMenuSystem *sys;
    FEMenuEntry *optionsEntry;

public:
    virtual void Select(int entry_index);
    virtual void OnActivate();
};

class CompEndMenuClass : public FEMenu {
public:
    PauseMenuSystem *sys;
    FEMenuEntry *optionsEntry;
    virtual void OnActivate();
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
    virtual void OnL1(int controller);
    virtual void OnR1(int controller);
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
    char data_before_controller_disconnected[4];
    bool controller_disconnected;

    virtual void Load();
    virtual void Draw();
    virtual void UpdateInScene();
    virtual void Select(int menu_index, int entry_index);
    virtual void endDraw(bool unpause = true);
    void RestartComp();
    void Restart();
    bool SetDisconnect(bool disconnected);
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
    virtual void BuiltReplayReserved0();
    virtual void ReplayStart();
    virtual void ReplayEnd();
    virtual void ReplayChange(ReplayType option);
    int replayEvent;

public:
    virtual void Select(int entry_index);
    virtual void OnActivate();
    virtual void OnStart(int controller);
    virtual void OnTriangle(int controller);
    virtual void OnL2(int controller);
    virtual void OnCircle(int controller);
};

class LostControllerMenuClass : public FEMenu {
public:
    PauseMenuSystem *sys;

    LostControllerMenuClass(
        FEMenuSystem *system,
        int x,
        int y,
        color32 color);
    virtual void Init();
    virtual void OnActivate();
    virtual void Update();
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
    virtual void Draw();
};

class QuitConfirmMenuClass : public FEMenu {
    PauseMenuSystem *sys;
    BoxText *question;
    FEMenuEntry *yesEntry;
    FEMenuEntry *noEntry;

public:
    virtual void Draw();
    virtual void OnActivate();
};

#endif
