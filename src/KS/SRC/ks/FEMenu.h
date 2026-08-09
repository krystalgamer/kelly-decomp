#ifndef FEMENU_H
#define FEMENU_H

#include "KS/SRC/color.h"
#include "KS/SRC/stringx.h"
#include "KS/SRC/ks/FEPanel.h"

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
class PanelAnimFile;
class PanelAnimManager;

class FEMenu;

struct FEMenuPreviousDispatchVTable {
    char padding[0x150];
    short adjustment;
    short padding2;
    void (*previous)(void *self);
};

struct FEMenuNextDispatchVTable {
    char padding[0x148];
    short adjustment;
    short padding2;
    void (*next)(void *self);
};

class FEMenuEntry {
public:
    int entry_num;
    FEMenuEntry* next;
    FEMenuEntry* previous;
    FEMenu* menu;

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

    FEMenuEntry() : ent(0) {}
    FEMenuEntry(
        stringx label,
        FEMenu *owner,
        bool floating = false,
        Font *font = 0)
    {
        cons(label, owner, floating, font);
    }
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
    virtual void SetZ(int z);
    virtual void SetText(stringx text);
    virtual void SetLocation3D(vector3d location);
    virtual void SetHJustify(Font::HORIZJUST horizontal);
    virtual void SetVJustify(Font::VERTJUST vertical);
    virtual void SetFade(
        bool start,
        bool fade_in,
        float time = 2.0f)
        __asm__("SetFade__11FEMenuEntrybT1f");
    virtual void SetLineSpacing(int spacing);
    virtual void SetFont(Font *font);
    virtual void SetBehaviorNF(float x, float y);
    virtual void SetBehavior(bool non_floating);
    virtual void SetColor(color32 color);
    virtual void SetScale(float scale);
    virtual void UpdateInScene();
    virtual stringx GetText();
    virtual float GetX();
    virtual float GetY();
    virtual color32 GetColor();
    virtual int getLineNum();
    virtual float GetScale();
    float GetWidth();
    virtual void AddEntity(
        entity *value,
        color32 highlighted,
        color32 normal);
    virtual void AddFont(int index, Font *font);

protected:
    void cons(
        stringx label,
        FEMenu *owner,
        bool floating,
        Font *font);
    virtual void OnHighlight(bool animate = true);
};

class FEGraphicalMenuEntry : public FEMenuEntry {
    PanelQuad *pq;
    PanelQuad *pq_high;
    PanelAnimFile *highlight_paf;
    PanelAnimManager *pam;
    bool already_playing;

public:
    FEGraphicalMenuEntry() {}
    virtual void SetPQ(PanelQuad *quad);
    virtual void SetPQHigh(PanelQuad *quad);
    void Load(PanelQuad *normal, PanelQuad *highlighted);
    void Load(
        PanelQuad *normal,
        PanelAnimFile *animation,
        PanelAnimManager *manager,
        PanelQuad *highlighted);
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
    FEMenu();
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
    // Present in the shipped vtable but absent from the released header.
    virtual void BuiltSelectReserved0();
    virtual void Select(int);
    FEMenu *GetActive();

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
    inline void SetDeviceFlags(int flags) { device_flags = flags; }
    virtual ~FEMenuSystem();
    virtual void InitAll();
    virtual void Add(FEMenu*);
    virtual void MakeActive(int, int = 1, bool = true);
    virtual void Update(time_value_t);
    virtual void UpdateButtonDown();
    virtual void Draw();
    virtual void Select(int, int) = 0;
    virtual void Exit();
    virtual void startDraw(int = -1, bool = true);
    virtual void endDraw(bool = true);
    virtual FEMenu* GetActiveMenu();

protected:
    virtual void cons(int, FEManager*, Font*);
    virtual void OnButtonPress(int, int);
};

class __attribute__((aligned(16))) PanelAnimManager {
    char data[0x80];
};

#if !defined(FE_PANEL_H)
class PanelFile {
    char data[0x30];

public:
    void Load(bool floating);
    PanelQuad *GetPointer(const char *search_name);
    void SetFilename(stringx filename);
};
#endif

class FETextMultiMenu : public FEMenu {
public:
    FEMenuEntry *first;
    FEMenuEntry *last;

    virtual void setVis(FEMenuEntry *entry);
    virtual void Init();
    virtual void OnUp(int controller);
    virtual void OnDown(int controller);
    virtual void OnLeft(int controller);
    virtual void OnRight(int controller);

protected:
    virtual void cons(FEMenuSystem *system);
    virtual void cons(FEMenuSystem *system, color32 highlighted);
    virtual void cons(
        FEMenuSystem *system,
        color32 normal,
        color32 highlighted,
        float scale = 1.0f,
        float highlighted_scale = 1.2f,
        int flags = 0);
    virtual void Up();
    virtual void Down();
    virtual void Left();
    virtual void Right();
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
    inline PanelQuad *GetPointer(const char *name) {
        return panel.GetPointer(name);
    }

protected:
    void TurnOn(PanelQuad* quad, bool enabled) {
        if (quad)
            quad->TurnOn(enabled);
    }
    void ToggleOn(PanelQuad* quad) {
        if (quad)
            quad->ToggleOn();
    }
    void ChangeFade(PanelQuad* quad, bool start, bool fade_in, float time) {
        if (quad)
            quad->ChangeFade(start, fade_in, time);
    }
    void Mask(PanelQuad* quad, float amount) {
        if (quad)
            quad->Mask(amount);
    }
    virtual void SetPQIndices();
};

__asm__(".equ GetPointer__9PanelFilePCc, 0x00152F88");

class __attribute__((aligned(16))) FEGraphicalMenu : public FEMenu, public FrontEnd {
public:
    virtual void Init();
    virtual void Load(bool floating);
    virtual void Load();
    virtual void Draw();
    virtual void Select(int entry_num);
    virtual void Update(time_value_t time_inc);
    virtual void OnActivate();
    virtual void Add(FEMenuEntry *entry) {
        FEMenu::Add(entry);
    }
    virtual void TurnOn(PanelQuad* quad, bool enabled);
    virtual void ToggleOn(PanelQuad* quad);
    virtual void ChangeFade(PanelQuad* quad, bool start, bool fade_in, float time)
        __asm__("ChangeFade__15FEGraphicalMenuP9PanelQuadbT2f");
    virtual void Mask(PanelQuad* quad, float amount);
    virtual void SetLayer(PanelQuad *quad, int layer);
    virtual void LoadPanel(bool floating = false);
    virtual void ReloadPanel();
    virtual PanelQuad *GetPointer(const char *name);
    virtual void SetPanel(stringx path);

protected:
    virtual void cons(
        FEMenuSystem *system,
        FEManager *manager,
        stringx path,
        stringx panel_name);
};

class FEMultiMenu : public FEGraphicalMenu {
public:
    FEMenuEntry *first;
    FEMenuEntry *last;
    FEMenuEntry *secondary_cursor;
    virtual void OnUp(int controller);
    virtual void OnDown(int controller);
    virtual void OnLeft(int controller);
    virtual void OnRight(int controller);
    virtual void SetSecondaryCursor(
        FEMenuEntry *entry,
        bool animate = true);

protected:
    virtual void cons(
        FEMenuSystem *system,
        FEManager *manager,
        stringx path,
        stringx panel_name)
    {
        FEGraphicalMenu::cons(system, manager, path, panel_name);
        secondary_cursor = 0;
    }
    virtual void Up();
    virtual void Down();
    virtual void Left();
    virtual void Right();
};

#endif
