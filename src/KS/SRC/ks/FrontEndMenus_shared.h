#ifndef KELLY_DECOMP_FRONT_END_MENUS_SHARED_H
#define KELLY_DECOMP_FRONT_END_MENUS_SHARED_H

#include "KS/SRC/stringx.h"

#pragma interface

typedef float time_value_t;

class TextString;
class Font;
class FEManager;
class FEMenuSystem;

class color32 {
public:
    unsigned int value;
};

enum FEMENUCMD {
    FEMENUCMD_SELECT,
    FEMENUCMD_START,
    FEMENUCMD_UP,
    FEMENUCMD_DOWN,
    FEMENUCMD_LEFT,
    FEMENUCMD_RIGHT,
    FEMENUCMD_CROSS,
};

class FEMenu;

class FEMenuEntry {
public:
    int entry_num;
    FEMenuEntry* next;
    FEMenuEntry* previous;
    FEMenu* menu;
};

class FEMenu {
public:
    int center_x;
    int center_y;
    int num_entries;
    int dy;
    int half;
    int menu_num;
    bool init;
    stringx font_filename;
    color32 color;
    color32 color_high;
    color32 color_high_alt;
    float scale;
    float scale_high;
    int max_vis_entries;
    int flags;
    FEMenuEntry* entries;
    FEMenuEntry* first_vis_entry;
    FEMenuEntry* last_vis_entry;
    FEMenuEntry* highlighted;
    FEMenuSystem* system;
    FEMenu* back;
    int back_num;

protected:
    FEMenu* submenus;
    FEMenu* active;
    FEMenu* parent;
    TextString* helpText;
    int helpFlags;

public:
    FEMenu* next_sub;
    virtual ~FEMenu();
    virtual void setBack(FEMenu*, int = 1);
    virtual void setHigh(FEMenuEntry*, bool = true);
    virtual void setVis(FEMenuEntry*);
    virtual void Add(FEMenuEntry*);
    virtual void Init();
    virtual void Load(bool);
    virtual void Load();
    virtual void Draw();
    virtual void DrawTop();
    virtual void UpdateInScene();
    virtual void Update(time_value_t);
    virtual void HighlightDefault();
    virtual void OnActivate();
    virtual void OnActivate(int);
    virtual void OnUnactivate(FEMenu*);
    virtual void OnSelect(int);
    virtual void OnStart(int);
    virtual void OnUp(int);
    virtual void OnDown(int);
    virtual void OnLeft(int);
    virtual void OnRight(int);
    virtual void OnCross(int);
    virtual void OnTriangle(int);
    virtual void OnSquare(int);
    virtual void OnCircle(int);
    virtual void OnL1(int);
    virtual void OnR1(int);
    virtual void OnL2(int);
    virtual void OnR2(int);
    virtual void OnAnyButtonPress(int, int);
    virtual void OnButtonRelease(int, int);
    virtual void SetAllScale(float);
    virtual void MakeActive(FEMenu*, bool = true);
    virtual void SetHelpText(int);
    virtual void Select(int);
};

class FEMenuSystem {
protected:
    bool button_down[14][2];
    int device_flags;

public:
    FEMenu** menus;
    FEManager* manager;
    int active;
    int size;
    int count;
    Font* font;
    virtual ~FEMenuSystem();
    virtual void InitAll();
    virtual void Add(FEMenu*);
    virtual void MakeActive(int, int = 1);
    virtual void Update(time_value_t);
    virtual void UpdateButtonDown();
    virtual void Draw();
    virtual void Select(int, int) = 0;
    virtual void Exit();
    virtual void startDraw(int = -1, bool = true);
    virtual void endDraw(bool = true);
    virtual FEMenu* GetActiveMenu();
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
