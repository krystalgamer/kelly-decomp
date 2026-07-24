// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001BC490)
// 0x001BC490 SetSystem__13LegalFrontEndP12FEMenuSystem
class FEMenuSystem;

class LegalFrontEnd {
    char padding[0x50];
    FEMenuSystem* system;

public:
    void SetSystem(FEMenuSystem* s);
};

void LegalFrontEnd::SetSystem(FEMenuSystem* s) {
    system = s;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001BE6E8)
// 0x001BE6E8 restartMovie__19GraphicalMenuSystem
class GraphicalMenuSystem {
public:
    void restartMovie();
};

void GraphicalMenuSystem::restartMovie() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001BE6F0)
// 0x001BE6F0 killMovie__19GraphicalMenuSystem
class GraphicalMenuSystem {
public:
    void killMovie();
};

void GraphicalMenuSystem::killMovie() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001BE9E0)
// 0x001BE9E0 DrawMovie__19GraphicalMenuSystem
class GraphicalMenuSystem {
public:
    void DrawMovie();
};

void GraphicalMenuSystem::DrawMovie() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001BD0B0)
// 0x001BD0B0 OnUnactivate__18ControllerFrontEndP6FEMenu
struct PauseMenuSystemLayout { char padding[0x70]; int controller; };
struct ControllerWidgetLayout { char padding[0x15c]; int active; };
struct FEManagerLayout { char padding[0x156a4]; ControllerWidgetLayout *controller_widget; };
extern FEManagerLayout frontendmanager;
__asm__(".equ frontendmanager, 0x003E7728");
class FEMenu;
class ControllerFrontEnd { char padding0[0x50]; PauseMenuSystemLayout *system; char padding1[0x128]; int selected_controller; public: void OnUnactivate(FEMenu *menu); };
void ControllerFrontEnd::OnUnactivate(FEMenu *menu) { system->controller = selected_controller; frontendmanager.controller_widget->active = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001BC258)
// 0x001BC258 Draw__13LegalFrontEnd
struct legal_widget_vtable { char padding[0x18]; short adjustment; short padding2; void (*draw)(void *self); };
struct legal_widget { char padding[0x4c]; legal_widget_vtable *vtable; };
class LegalFrontEnd { char padding[0x150]; legal_widget *legal; public: void Draw(); };
void LegalFrontEnd::Draw() { legal_widget_vtable *table = legal->vtable; table->draw((char *)legal + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001BC9B0)
// 0x001BC9B0 OnLeft__13TitleFrontEndi
struct menu_vtable {
    char padding[0xA8];
    short adjustment;
    short padding2;
    void (*on_left)(void *self, int controller);
};

struct menu_layout {
    char padding[0x74];
    menu_vtable *vtable;
};

class TitleFrontEnd {
    char padding[0x60];
    menu_layout *active;

public:
    void OnLeft(int controller);
};

void TitleFrontEnd::OnLeft(int controller)
{
    menu_layout *menu = active;
    if (menu) {
        menu_vtable *table = menu->vtable;
        table->on_left((char *)menu + table->adjustment, controller);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001BC9E8)
// 0x001BC9E8 OnRight__13TitleFrontEndi
struct menu_vtable {
    char padding[0xB0];
    short adjustment;
    short padding2;
    void (*on_right)(void *self, int controller);
};

struct menu_layout {
    char padding[0x74];
    menu_vtable *vtable;
};

class TitleFrontEnd {
    char padding[0x60];
    menu_layout *active;

public:
    void OnRight(int controller);
};

void TitleFrontEnd::OnRight(int controller)
{
    menu_layout *menu = active;
    if (menu) {
        menu_vtable *table = menu->vtable;
        table->on_right((char *)menu + table->adjustment, controller);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001BCD90)
// 0x001BCD90 SetSystem__13TitleFrontEndP12FEMenuSystem
class FEMenuSystem;

struct menu_vtable {
    char padding[0x1D0];
    short adjustment;
    short padding2;
    void (*set_system)(void *self, FEMenuSystem *system);
};

struct mc_frontend_layout {
    char padding[0x74];
    menu_vtable *vtable;
};

class TitleFrontEnd {
    char padding0[0x50];
    FEMenuSystem *system;
    char padding1[0x12C];
    mc_frontend_layout *mc;

public:
    void SetSystem(FEMenuSystem *new_system);
};

void TitleFrontEnd::SetSystem(FEMenuSystem *new_system)
{
    system = new_system;
    mc_frontend_layout *frontend = mc;
    menu_vtable *table = frontend->vtable;
    table->set_system(
        (char *)frontend + table->adjustment,
        new_system
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001BE9E8)
// 0x001BE9E8 DrawTop__19GraphicalMenuSystem
#include "KS/SRC/ks/GraphicalMenuSystem_shared.h"
void GraphicalMenuSystem::DrawTop() {
    if (fedb_draw_overlays) {
        if (active)
            menus[active]->DrawTop();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001BC438)
// 0x001BC438 Select__13LegalFrontEndi
struct menu_vtable
{
    char padding[0x20];
    short adjustment;
    short reserved;
    void (*make_active)(
        void *self, int menu, bool play_sound, bool set_previous
    );
};

struct menu_system
{
    char padding[0x8c];
    menu_vtable *vtable;
};

class LegalFrontEnd
{
    char padding0[0x50];
    menu_system *system;
    char padding1[0x100];
    float timer;

public:
    void Select(int entry);
};

void LegalFrontEnd::Select(int entry)
{
    if (timer > 5.0f && system)
    {
        menu_vtable *table = system->vtable;
        table->make_active(
            (char *)system + table->adjustment,
            12, true, true
        );
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001BD0D8)
// 0x001BD0D8 OnStart__18ControllerFrontEndi
struct select_slot {
    short adjustment; short reserved;
    void (*function)(void *,int,int,int);
};
struct menu_system_layout {
    char padding[0x8c];
    char *vtable;
};
class ControllerFrontEnd {
    char padding[0x50];
    menu_system_layout *system;
    char padding2[0x120];
    int selected;
    int controller_count;
public:
    void OnStart(int controller);
};
void ControllerFrontEnd::OnStart(int controller) {
    if (selected==-1) return;
    if (controller_count!=-1 && controller!=controller_count-1) return;
    select_slot *slot=(select_slot *)(system->vtable+0x20);
    slot->function(
        (char *)system+slot->adjustment,selected,1,1
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001BC1D8)
// 0x001BC1D8 Update__13LegalFrontEndf
struct menu_vtable{char pad[296];short adjust;short reserved;void(*select)(void*,int);};struct Legal{char pad[116];menu_vtable*vtable;char pad2[220];float timer;};extern "C" void front_update(void*,float)__asm__("Update__8FrontEndf");extern "C" void menu_update(void*,float)__asm__("Update__6FEMenuf");__asm__(".equ Update__8FrontEndf,0x00157B30");__asm__(".equ Update__6FEMenuf,0x00156DC8");extern "C" void update(Legal*self,float dt)__asm__("Update__13LegalFrontEndf");void update(Legal*self,float dt){self->timer+=dt;if(self->timer>=10.0f){menu_vtable*t=self->vtable;t->select((char*)self+t->adjust,0);}front_update((char*)self+128,dt);menu_update(self,dt);KELLY_DECOMP_COMPILER_BARRIER();}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001BE6F8)
// 0x001BE6F8 UpdateInScene__19GraphicalMenuSystem
struct menu_vtable{char pad[88];short adjust;short reserved;void(*update_scene)(void*);};struct Menu{char pad[116];menu_vtable*vtable;void UpdateInScene(){menu_vtable*t=vtable;t->update_scene((char*)this+t->adjust);}};struct System{char pad[116];Menu**menus;char gap[4];int active;};extern "C" void update(System*self)__asm__("UpdateInScene__19GraphicalMenuSystem");void update(System*self){self->menus[self->active]->UpdateInScene();if(self->active!=5&&self->active!=13)self->menus[5]->UpdateInScene();}
#endif
