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
