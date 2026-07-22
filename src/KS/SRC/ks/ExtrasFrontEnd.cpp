// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001BB850)
// 0x001BB850 OnButtonRelease__15CreditsFrontEndii
class CreditsFrontEnd { char padding[0x170]; bool up_pressed; bool down_pressed; public: void OnButtonRelease(int controller, int button); };
void CreditsFrontEnd::OnButtonRelease(int controller, int button) { if (button == 2) up_pressed = false; else if (button == 3) down_pressed = false; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001BB7B0)
// 0x001BB7B0 OnCross__15CreditsFrontEndi
struct CreditsVTable { char padding[0xc0]; short adjustment; short padding2; void (*OnTriangle)(void *self, int command); };
class CreditsFrontEnd { char padding[0x74]; CreditsVTable *vtable; public: void OnCross(int command); };
void CreditsFrontEnd::OnCross(int command) { CreditsVTable *table = vtable; table->OnTriangle((char *)this + table->adjustment, command); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001BB7D8)
// 0x001BB7D8 OnStart__15CreditsFrontEndi
struct CreditsVTable { char padding[0xc0]; short adjustment; short padding2; void (*OnTriangle)(void *self, int command); };
class CreditsFrontEnd { char padding[0x74]; CreditsVTable *vtable; public: void OnStart(int command); };
void CreditsFrontEnd::OnStart(int command) { CreditsVTable *table = vtable; table->OnTriangle((char *)this + table->adjustment, command); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001BB778)
// 0x001BB778 OnTriangle__15CreditsFrontEndi
struct menu_system_vtable {
    char padding[0x20];
    short adjustment;
    short padding2;
    void (*make_active)(void *self, int menu, int submenu, bool notify);
};

struct graphical_menu_system {
    char padding[0x8c];
    menu_system_vtable *vtable;
};

class CreditsFrontEnd {
    char padding[0x164];
    graphical_menu_system *sys;

public:
    void OnTriangle(int controller);
};

void CreditsFrontEnd::OnTriangle(int controller)
{
    menu_system_vtable *table = sys->vtable;
    table->make_active(
        (char *)sys + table->adjustment,
        1,
        1,
        true
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001BB800)
// 0x001BB800 OnActivate__15CreditsFrontEnd
#include "KS/SRC/ks/ExtrasFrontEnd_shared.h"
__asm__(".equ OnActivate__15FEGraphicalMenu, 0x001581E8");

void CreditsFrontEnd::OnActivate()
/* inline helpbar layout */
{
    FEMultiMenu::OnActivate();
    up_pressed = false;
    down_pressed = false;
    first_line_y = 320;
    manager->helpbar->DisableHelpbar();
}
#endif
