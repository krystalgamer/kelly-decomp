// Matching decompilation blocks selected by generated build shims.


// 0x001990D8 FEInitialized__Fv
#include "KS/SRC/ks/FrontEndManager.h"

bool FEInitialized() { return frontendmanager.fe_initialized; }

// 0x00199150 FEDone__Fv
#include "KS/SRC/ks/FrontEndManager.h"

bool FEDone() { return frontendmanager.fe_done; }

// 0x00199168 FEDoneLoading__Fv
#include "KS/SRC/ks/FrontEndManager.h"

bool FEDoneLoading() { return frontendmanager.fe_done_loading; }

// 0x00199210 IGOIsPaused__Fv
#include "KS/SRC/ks/FrontEndManager.h"
#include "KS/SRC/ks/FrontEndMenus.h"

bool IGOIsPaused() { return frontendmanager.pms->draw; }

// 0x001991E0 IGOStandUp__Fv
class IGOFrontEnd { public: void OnSurferStandUp(); };
__asm__(".equ OnSurferStandUp__11IGOFrontEnd, 0x0017CB40");
struct FEManagerLayout { IGOFrontEnd *IGO; };
extern FEManagerLayout frontendmanager;
__asm__(".equ frontendmanager, 0x003E7728");
void IGOStandUp() { frontendmanager.IGO->OnSurferStandUp(); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x001988C8 OnLevelLoaded__9FEManager
struct frontend_vtable {
    char padding[0x1E0];
    short adjustment;
    short padding2;
    void (*on_level_loaded)(void *self);
};

struct beach_frontend_layout {
    char padding[0x74];
    frontend_vtable *vtable;
};

struct manager_level_layout {
    char padding[0x156A0];
    beach_frontend_layout *map;
};

extern "C" void manager_level_loaded(manager_level_layout *self)
    __asm__("OnLevelLoaded__9FEManager");
void manager_level_loaded(manager_level_layout *self)
{
    beach_frontend_layout *frontend = self->map;
    frontend_vtable *table = frontend->vtable;
    table->on_level_loaded(
        (char *)frontend + table->adjustment
    );
}

// 0x00198900 OnLevelEnding__9FEManager
struct frontend_vtable {
    char padding[0x1E8];
    short adjustment;
    short padding2;
    void (*on_level_ending)(void *self);
};

struct beach_frontend_layout {
    char padding[0x74];
    frontend_vtable *vtable;
};

struct manager_level_layout {
    char padding[0x156A0];
    beach_frontend_layout *map;
};

extern "C" void manager_level_ending(manager_level_layout *self)
    __asm__("OnLevelEnding__9FEManager");
void manager_level_ending(manager_level_layout *self)
{
    beach_frontend_layout *frontend = self->map;
    frontend_vtable *table = frontend->vtable;
    table->on_level_ending(
        (char *)frontend + table->adjustment
    );
}

// 0x00198ED8 UpdateIGOScene__9FEManager
class FEMenu;
class FEManager;

class FEMenuSystem {
    char data[0x8c];

public:
    virtual ~FEMenuSystem();
    virtual void InitAll();
    virtual void Add(FEMenu *);
    virtual void MakeActive(int, int);
    virtual void Update(float);
    virtual void UpdateButtonDown();
    virtual void Draw();
    virtual void Select(int, int) = 0;
    virtual void Exit();
    virtual void startDraw(int, bool);
    virtual void endDraw(bool);
    virtual FEMenu *GetActiveMenu();

protected:
    virtual void cons(int, FEManager *, void *);
    virtual void OnButtonPress(int, int);
};

class PauseMenuSystem : public FEMenuSystem {
public:
    bool draw;

    virtual ~PauseMenuSystem();
    virtual void InitAll();
    virtual void Load();
    virtual void startDraw(int, bool);
    virtual void endDraw(bool);
    virtual void Update(float);
    virtual void UpdateInScene();
    virtual void Draw();
    virtual void OnButtonPress(int, int);
    virtual void MakeActive(int, int);
    virtual void Select(int, int);
};

struct manager_update_scene_layout {
    void *IGO;
    PauseMenuSystem *pms;
};

extern "C" void update_igo_scene(manager_update_scene_layout *self)
    __asm__("UpdateIGOScene__9FEManager");
void update_igo_scene(manager_update_scene_layout *self)
{
    if(self->pms->draw)
        self->pms->UpdateInScene();
}

// 0x00198CC8 DrawIGO__9FEManager
extern int g_igo_enabled;
__asm__(".equ g_igo_enabled, 0x003E7720");
struct draw_slot {
    short adjustment; short reserved; void (*function)(void *);
};
struct igo_layout { char padding[0xc0]; char *vtable; };
struct pause_layout { char padding[0x8c]; char *vtable; };
struct manager_draw_igo_layout {
    igo_layout *IGO;
    pause_layout *pms;
};
extern "C" void draw_manager_igo(manager_draw_igo_layout *self)
    __asm__("DrawIGO__9FEManager");
void draw_manager_igo(manager_draw_igo_layout *self) {
    if (g_igo_enabled) {
        draw_slot *igo_slot=(draw_slot *)(self->IGO->vtable+0x20);
        igo_slot->function((char *)self->IGO+igo_slot->adjustment);
        draw_slot *pause_slot=(draw_slot *)(self->pms->vtable+0x38);
        pause_slot->function((char *)self->pms+pause_slot->adjustment);
    }
}

// 0x00199070 ReleaseIGO__9FEManager
struct igo_vtable { char padding[8]; short adjustment; short reserved; void (*destroy)(void *, int); };
struct IGOFrontEnd { char padding[192]; igo_vtable *vtable; };
struct PauseMenuSystem { char padding[140]; igo_vtable *vtable; };
struct manager_release_igo_layout {
    IGOFrontEnd *IGO;
    PauseMenuSystem *pms;
};
extern "C" void release_manager_igo(manager_release_igo_layout *self)
    __asm__("ReleaseIGO__9FEManager");
void release_manager_igo(manager_release_igo_layout *self)
{
    if (self->IGO) {
        igo_vtable *table = self->IGO->vtable;
        table->destroy((char *)self->IGO + table->adjustment, 3);
    }
    self->IGO = 0;
    if (self->pms) {
        igo_vtable *table = self->pms->vtable;
        table->destroy((char *)self->pms + table->adjustment, 3);
    }
}

// 0x00198E68 UpdateIGO__9FEManagerf
struct igo_vtable{char p0[24];short adjustment;short x0;void(*update)(void*,float);};struct igo{char p0[192];igo_vtable*vtable;};struct pms_vtable{char p0[40];short adjustment;short x0;void(*update)(void*,float);};struct pms{char p0[140];pms_vtable*vtable;};struct manager{igo*IGO;pms*pause;char p0[87712];int igo_enabled;};extern "C" void update_igo(manager*self,float dt) __asm__("UpdateIGO__9FEManagerf");void update_igo(manager*self,float dt){if(self->igo_enabled){igo*i=self->IGO;igo_vtable*t=i->vtable;t->update((char*)i+t->adjustment,dt);}pms*p=self->pause;pms_vtable*t=p->vtable;t->update((char*)p+t->adjustment,dt);}

// 0x00198850 ReloadTextures__9FEManager
struct map_vtable{char p0[400];short panel_adjust;short x0;void(*reload_panel)(void*);char p1[56];short map_adjust;short x1;void(*reload_map)(void*);};struct map{char p0[116];map_vtable*vtable;};struct help_vtable{char p0[72];short adjustment;short x0;void(*reload)(void*);};struct helpbar{char p0[192];help_vtable*vtable;};struct manager{char p0[87712];map*map_ptr;helpbar*help;};extern "C" void reload_fonts(manager*) __asm__("ReloadFontTextures__9FEManager");__asm__(".equ ReloadFontTextures__9FEManager,0x00198758");extern "C" void reload(manager*self) __asm__("ReloadTextures__9FEManager");void reload(manager*self){reload_fonts(self);register map*m __asm__("$5")=self->map_ptr;register map_vtable*t __asm__("$2")=m->vtable;register int adj __asm__("$4")=t->panel_adjust;register void(*fn)(void*) __asm__("$3")=t->reload_panel;fn((char*)m+adj);m=self->map_ptr;t=m->vtable;adj=t->map_adjust;fn=t->reload_map;fn((char*)m+adj);helpbar*h=self->help;help_vtable*u=h->vtable;u->reload((char*)h+u->adjustment);}
