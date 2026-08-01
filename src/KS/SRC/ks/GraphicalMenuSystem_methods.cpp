// GraphicalMenuSystem inline definitions extracted by generated shims.


// 0x001DE430 Draw__18ControllerFrontEnd
#include "KS/SRC/ks/GraphicalMenuSystem.h"

void ControllerFrontEnd::Draw() {
}

// 0x001DE438 OnLeft__18ControllerFrontEndi
#include "KS/SRC/ks/GraphicalMenuSystem.h"

void ControllerFrontEnd::OnLeft(int arg0) {
}

// 0x001DE440 OnRight__18ControllerFrontEndi
#include "KS/SRC/ks/GraphicalMenuSystem.h"

void ControllerFrontEnd::OnRight(int arg0) {
}

// 0x001DE448 OnUp__18ControllerFrontEndi
#include "KS/SRC/ks/GraphicalMenuSystem.h"

void ControllerFrontEnd::OnUp(int arg0) {
}

// 0x001DE450 OnDown__18ControllerFrontEndi
#include "KS/SRC/ks/GraphicalMenuSystem.h"

void ControllerFrontEnd::OnDown(int arg0) {
}

// 0x001DE458 Select__18ControllerFrontEndi
#include "KS/SRC/ks/GraphicalMenuSystem.h"

void ControllerFrontEnd::Select(int arg0) {
}

// 0x001DE4D8 Update__9HelpbarFEf
#include "KS/SRC/ks/GraphicalMenuSystem.h"

void HelpbarFE::Update(float time_inc) {
}

// 0x001DE5B0 Reload__19GraphicalMenuSystem
class GraphicalMenuSystem {
public:
    void Reload();
};

void GraphicalMenuSystem::Reload() {
}

// 0x001DE210 _$_11FEDebugMenu
extern "C" void FEMenuDtor(void *self) __asm__("_$_6FEMenu");
extern "C" void FEDebugMenuDtor(void *self) __asm__("_$_11FEDebugMenu");
__asm__(".equ _$_6FEMenu, 0x00156580");
void FEDebugMenuDtor(void *self) { FEMenuDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x001DE4E0 ReloadPanel__9HelpbarFE
class PanelFile { public: void Reload(); };
__asm__(".equ Reload__9PanelFile, 0x00152838");
struct helpbar_reload_layout {
    char padding[0x80];
    PanelFile panel;
};
extern "C" void reload_helpbar(helpbar_reload_layout *self)
    __asm__("ReloadPanel__9HelpbarFE");
void reload_helpbar(helpbar_reload_layout *self) {
    self->panel.Reload();
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x001DE2E0 OnStart__13LegalFrontEndi
struct frontend_vtable { char padding[0x128]; short adjustment; short padding2; void (*call)(void *, void *); };
class LegalFrontEnd { char padding[0x74]; frontend_vtable *vtable; public: void OnStart(int controller); };
void LegalFrontEnd::OnStart(int controller) { frontend_vtable *table = vtable; table->call((char *)this + table->adjustment, 0); }

// 0x001DE310 OnCross__13LegalFrontEndi
struct frontend_vtable { char padding[0x128]; short adjustment; short padding2; void (*call)(void *, void *); };
class LegalFrontEnd { char padding[0x74]; frontend_vtable *vtable; public: void OnCross(int controller); };
void LegalFrontEnd::OnCross(int controller) { frontend_vtable *table = vtable; table->call((char *)this + table->adjustment, 0); }

// 0x001DE340 OnStart__13TitleFrontEndi
struct frontend_vtable { char padding[0x128]; short adjustment; short padding2; void (*call)(void *, void *); };
struct TitleFrontEndLayout { char padding[0x74]; frontend_vtable *vtable; };
extern "C" void title_start(TitleFrontEndLayout *self,int controller)__asm__("OnStart__13TitleFrontEndi");
void title_start(TitleFrontEndLayout *self,int controller) { frontend_vtable *table = self->vtable; table->call((char *)self + table->adjustment, 0); }

// 0x001DE370 OnCross__13TitleFrontEndi
struct frontend_vtable { char padding[0x128]; short adjustment; short padding2; void (*call)(void *, void *); };
struct TitleFrontEndLayout { char padding[0x74]; frontend_vtable *vtable; };
extern "C" void title_cross(TitleFrontEndLayout *self,int controller)__asm__("OnCross__13TitleFrontEndi");
void title_cross(TitleFrontEndLayout *self,int controller) { frontend_vtable *table = self->vtable; table->call((char *)self + table->adjustment, 0); }

// 0x001DE2B0 OnCross__11FEDebugMenui
struct menu_vtable {
    char padding[0x128];
    short adjustment;
    short padding2;
    void (*select)(void *self, int entry);
};

struct menu_entry {
    int entry_num;
};

struct menu_layout {
    char padding0[0x4c];
    menu_entry *highlighted;
    char padding1[0x24];
    menu_vtable *vtable;
};

extern "C" void HighlightSelector(void *self, int unused)
    __asm__("OnCross__11FEDebugMenui");

void HighlightSelector(void *self, int unused) {
    menu_layout *menu = (menu_layout *)self;
    menu_vtable *table = menu->vtable;
    table->select(
        (char *)self + table->adjustment,
        menu->highlighted->entry_num
    );
}

// 0x001DE5B8 Select__19GraphicalMenuSystemii
struct menu_vtable {
    char padding[0x128];
    short adjustment;
    short unused;
    void (*select)(void *self, int entry_index);
};
class FEMenu {
    char padding[0x74];
    menu_vtable *vtable;
public:
    void Select(int entry_index) {
        menu_vtable *table = vtable;
        table->select((char *)this + table->adjustment, entry_index);
    }
};
class GraphicalMenuSystem {
    char padding[0x74];
    FEMenu **menus;
public:
    void Select(int menu_index, int entry_index);
};
void GraphicalMenuSystem::Select(int menu_index, int entry_index)
{
    menus[menu_index]->Select(entry_index);
}
