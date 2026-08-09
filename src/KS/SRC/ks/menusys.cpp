// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00240F88)
#include "KS/SRC/ks/menusys.h"
// 0x00240F88 InitButtonStates__9MenuInput
void MenuInput::InitButtonStates()
{
    for (int i = 0; i < MAXMENUCMD; i++) {
        int state = MENU_GetButtonState(i);
        bstate[i] = state;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00241130)
// 0x00241130 TotalEntries__10MenuSystem
#include "KS/SRC/ks/menu.h"

int MenuSystem::TotalEntries() { if (!curmenu) return 0; return curmenu->NumEntries(); }
#endif

// 0x00241098 ButtonPress__10MenuSystemi
#include "KS/SRC/ks/menu.h"

void menu_button_press(Menu *menu, int button) __asm__("ButtonPress__4Menui");
__asm__(".equ ButtonPress__4Menui, 0x0023E9F0");
void MenuSystem::ButtonPress(int button) { if (curmenu) { void (*press)(Menu *, int) = menu_button_press; press(curmenu, button); } }

// 0x002410C0 ButtonRelease__10MenuSystemi
#include "KS/SRC/ks/menu.h"

void menu_button_release(Menu *menu, int button) __asm__("ButtonRelease__4Menui");
__asm__(".equ ButtonRelease__4Menui, 0x0023EA30");
void MenuSystem::ButtonRelease(int button) { if (curmenu) { void (*release)(Menu *, int) = menu_button_release; release(curmenu, button); } }

// 0x00241108 Closing__10MenuSystemP4Menu
#include "KS/SRC/ks/menu.h"

__asm__(".equ Clear__10MenuRender, 0x002408B0");
void MenuSystem::Closing(Menu *menu) { Clear(); curmenu = 0; }

// 0x00241150 GetElementState__10MenuSystemi
#include "KS/SRC/ks/menu.h"

__asm__(".equ GetElementFlags__4Menui, 0x0023E688");
unsigned int MenuSystem::GetElementState(int index) { unsigned int result = 0; if (curmenu) result = curmenu->GetElementFlags(index); return result; }

// 0x002408B0 Clear__10MenuRender
#include "KS/SRC/ks/menusys.h"

void MENU_ClearRect(int x0, int y0, int x1, int y1);
__asm__(".equ MENU_ClearRect__Fiiii, 0x00240488");
void MenuRender::Clear() {
    void (*clear_rect)(int, int, int, int) = MENU_ClearRect;
    clear_rect(limit.x0, limit.y0, limit.x1, limit.y1);
}


#if defined(KELLY_DECOMP_FUNCTION_00241060)
// 0x00241060 CloseAllMenus__10MenuSystem
#include "KS/SRC/ks/menu.h"

void MenuSystem::CloseAllMenus()
{
    if (curmenu)
        curmenu->CloseAll();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00241178)
// 0x00241178 GetElementText__10MenuSystemiPci
#include "KS/SRC/ks/menu.h"

extern const char empty_string[];
__asm__(".equ empty_string, 0x004DFC30");

__asm__(".equ GetElementText__4MenuiPci, 0x0023E6C8");
extern "C" void get_menu_element_text(
    Menu *menu,
    int index,
    char *text,
    int length
) __asm__("GetElementText__4MenuiPci");

void MenuSystem::GetElementText(int index, char *text, int length)
{
    if (curmenu) {
        void (*get_text)(Menu *, int, char *, int) =
            get_menu_element_text;
        get_text(curmenu, index, text, length);
    } else {
        text[0] = empty_string[0];
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00241020)
// 0x00241020 CloseMenu__10MenuSystem
#include "KS/SRC/ks/menu.h"

asm(".equ Close__4Menub, 0x0023E470");
asm(".equ CloseMenu__10MenuRender, 0x00240A20");
extern "C" void close_menu_render(MenuRender *renderer)
    __asm__("CloseMenu__10MenuRender");

void MenuSystem::CloseMenu()
{
    if (curmenu)
        curmenu->Close();
    void (*close_renderer)(MenuRender *) = close_menu_render;
    close_renderer(this);
}
#endif
