#ifndef KELLY_DECOMP_FE_MENU_SHARED_H
#define KELLY_DECOMP_FE_MENU_SHARED_H

#include "KS/SRC/stringx.h"

#pragma interface

typedef float time_value_t;

class TextString;
class Font;
class FEManager;
class FEMenuSystem;
class PanelQuad;
class entity;
class MultiLineString;
class vector3d;

#ifndef KELLY_DECOMP_COLOR32_DEFINED
#define KELLY_DECOMP_COLOR32_DEFINED
class color32 {
public:
    unsigned int value;
};
#endif

class FEMenu;

class FEMenuEntry {
public:
    int entry_num;
    FEMenuEntry* next;
    FEMenuEntry* previous;
    FEMenu* menu;
#if defined(KELLY_DECOMP_FULL_FEMENU_ENTRY)

protected:
    bool highlight;
    bool disabled;
    entity *ent;
    color32 high_ent_color;
    color32 norm_ent_color;
    MultiLineString *text;

private:
    float highlight_intensity;
    float highlight_timer;
    int disabled_alpha;
    color32 special_color;
    color32 special_color_high;
    bool has_special_color;
    bool no_flash;
    float special_scale;
    float special_scale_high;
    bool has_special_scale;

public:
    FEMenuEntry *up;
    FEMenuEntry *down;
    FEMenuEntry *left;
    FEMenuEntry *right;

    virtual ~FEMenuEntry();
    virtual void Load();
    virtual void OnSelect();
    virtual void Highlight(bool highlighted = true, bool animate = true);
    virtual void Disable(bool disabled = true);
    virtual bool GetDisable();
    virtual void Draw();
    virtual void Update(time_value_t time_inc);
    virtual void TurnOn(bool enabled);
    virtual void SetSpecialColor(color32 normal, color32 highlighted);
    virtual void SetSpecialScale(float normal, float highlighted);
    virtual bool GetSpecialScale(float &normal, float &highlighted);
    virtual void SetNoFlash(bool disabled);
    virtual float GetHighlightIntensity();
    virtual void SetPos(float x, float y);
    virtual void SetLocation3D(vector3d location);
#endif
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
#if defined(KELLY_DECOMP_FEMENU_LAYOUT_PADDING)
    char layout_padding[8];
#endif
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

protected:
    virtual void cons(FEMenuSystem*, int, int, int = 8);
    virtual void cons(FEMenuSystem*, int, int, color32, color32, int = 8);
    virtual void cons(
        FEMenuSystem*,
        int,
        int,
        color32,
        color32,
        color32,
        float = 1.0f,
        float = 1.2f,
        int = 8,
        int = 0
    );
    virtual void Next();
    virtual void Previous();
    virtual void Select();
    virtual void AddSubmenu(FEMenu*);
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

class __attribute__((aligned(16))) PanelAnimManager {
    char data[0x80];
};

class PanelFile {
    char data[0x30];

public:
    void Load(bool floating);
    void SetFilename(stringx filename);
};

class FrontEnd {
public:
    PanelAnimManager pam;
    PanelFile panel;
    FrontEnd* next;
    stringx path;
    FEManager* manager;

    virtual ~FrontEnd();
    virtual void Add(PanelAnimManager);
    virtual void Update(time_value_t);
    virtual void Draw();
    virtual void LoadPanel(bool floating = false) { panel.Load(floating); }
    virtual PanelFile* GetPanel();
    virtual void SetPanel(stringx);

protected:
    virtual void SetPQIndices();
};

class __attribute__((aligned(16))) FEGraphicalMenu : public FEMenu, public FrontEnd {
public:
    virtual void Init();
    virtual void Load(bool floating);
    virtual void Load();
    virtual void Draw();
    virtual void Select(int entry_num);
    virtual void Update(time_value_t time_inc);
    virtual void OnActivate();
    virtual void Add(FEMenuEntry*);
    virtual void LoadPanel(bool floating = false);
};

class FEMultiMenu : public FEGraphicalMenu {
public:
    FEMenuEntry *first;
    FEMenuEntry *last;
#if defined(KELLY_DECOMP_FULL_FEMULTI_MENU)
    FEMenuEntry *secondary_cursor;
#endif
};

#endif
