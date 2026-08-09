#ifndef SURFER_FRONT_END_H
#define SURFER_FRONT_END_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"

enum {
    SURFER_LAST = 14,
    MAX_HANDICAP = 6
};

class BoxText;
class entity;
class FEManager;
class GraphicalMenuSystem;
class PanelQuad;
class PreformatText;
class TextString;

class SurferBioFrontEnd;

class SurferFrontEnd : public FEMultiMenu {
public:
    enum {
        ACT_SURFER = 1,
        ACT_CAREER = 2,
        ACT_TUTORIAL = 3
    };

private:
    int disp_state;
    int state;
    int availability[SURFER_LAST];
    bool personality_unlocked[SURFER_LAST];
    GraphicalMenuSystem *sys;
    bool first_time_through;
    FEMenuEntry *current_surfer;
    FEMenuEntry *ks;
    FEMenuEntry *Bio;
    FEMenuEntry *Trick;
    FEMenuEntry *Personality;
    FEMenuEntry *Continue;
    FEMenuEntry *ScrapBook;
    FEMenuEntry *Handicap;
    TextString *players[2];
    TextString *surfer_select;
    TextString *firstname;
    TextString *gauge_labels[4];
    PanelQuad *gauges[4][3];
    PanelQuad *red_gauges[4];
    PanelQuad *horiz_arrows[2][2];
    PanelQuad *ss_lines[3];

    PanelQuad *ss_box[9];
    PanelQuad *hcap_gauge;
    PanelQuad *hcap_slider;
    PanelQuad *hcap_color[3];
    entity *ents[3];
    FEManager *manager;
    bool wait_for_camera;
    int hcap;
    int arrow_counter;
    int arrow_num;
    SurferBioFrontEnd *bio_menu;
    bool in_tb_or_bio;
    float progressval;
    int most_recent_controller;

public:
    int current_surfer_index;
    static bool personality_up;

    SurferFrontEnd(
        FEMenuSystem *system,
        FEManager *manager,
        stringx path,
        stringx panel_name);
    virtual ~SurferFrontEnd();
    virtual void Load();
    virtual void Select(int entry_index);
    virtual void Update(time_value_t time_inc);
    virtual void Draw();
    virtual void OnActivate();
    virtual void OnUp(int controller);
    virtual void OnDown(int controller);
    virtual void OnLeft(int controller);
    virtual void OnRight(int controller);
    virtual void OnTriangle(int controller);
    virtual void OnCross(int controller);
    virtual void OnAnyButtonPress(int controller, int button);
    virtual void OnButtonRelease(int controller, int button);

    static stringx getName(int index);
    static stringx getAbbr(int index);
    static bool getPersonalityUp() {
        return personality_up;
    }
    void TurnPQ(bool enabled);
};

class SurferBioFrontEnd : public FEMultiMenu {
    PreformatText *bios[SURFER_LAST];
    GraphicalMenuSystem *sys;
    SurferFrontEnd *bio_parent;
    TextString *firstname;
    TextString *lastname;
    BoxText *intro;
    PanelQuad *images[SURFER_LAST];
    PanelQuad *scroll_marker;
    bool wait_for_camera;
    bool up_pressed;
    bool down_pressed;
    int counter;
    float scroll_marker_x;
    float scroll_marker_y_t;
    float scroll_marker_y_b;

public:
    SurferBioFrontEnd(
        FEMenuSystem *system,
        FEManager *manager,
        stringx path,
        stringx panel_name,
        SurferFrontEnd *parent);
    virtual ~SurferBioFrontEnd();
    virtual void Load();
    virtual void Update(time_value_t time_inc);
    virtual void Select(int entry_index);
    virtual PanelQuad *GetPointer(const char *name);
    virtual void Draw();
    virtual void OnActivate();
    virtual void OnUp(int controller);
    virtual void OnDown(int controller);
    virtual void OnLeft(int controller);
    virtual void OnRight(int controller);
    virtual void OnCross(int controller);
    virtual void OnTriangle(int controller);
    virtual void OnButtonRelease(int controller, int button);
};

#endif
