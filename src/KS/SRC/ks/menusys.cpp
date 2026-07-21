// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002410E8)
// 0x002410E8 Opening__10MenuSystemP4Menu
class Menu;
extern "C" void MenuRenderClear(void *self) __asm__("Clear__10MenuRender");
__asm__(".equ Clear__10MenuRender, 0x002408B0");
class MenuSystem { char padding[0x470]; Menu *curmenu; public: void Opening(Menu *menu); };
void MenuSystem::Opening(Menu *menu) { curmenu = menu; MenuRenderClear(this); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00241130)
// 0x00241130 TotalEntries__10MenuSystem
class Menu { char padding[4]; int entries; public: int NumEntries() const { return entries; } };
class MenuSystem { char padding[0x470]; Menu *curmenu; public: int TotalEntries(); };
int MenuSystem::TotalEntries() { if (!curmenu) return 0; return curmenu->NumEntries(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00241098)
// 0x00241098 ButtonPress__10MenuSystemi
class Menu { public: void ButtonPress(int button); };
__asm__(".equ ButtonPress__4Menui, 0x0023E9F0");
class MenuSystem { char padding[0x470]; Menu *curmenu; public: void ButtonPress(int button); };
void MenuSystem::ButtonPress(int button) { if (curmenu) { curmenu->ButtonPress(button); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002410C0)
// 0x002410C0 ButtonRelease__10MenuSystemi
class Menu { public: void ButtonRelease(int button); };
__asm__(".equ ButtonRelease__4Menui, 0x0023EA30");
class MenuSystem { char padding[0x470]; Menu *curmenu; public: void ButtonRelease(int button); };
void MenuSystem::ButtonRelease(int button) { if (curmenu) { curmenu->ButtonRelease(button); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00241108)
// 0x00241108 Closing__10MenuSystemP4Menu
extern "C" void MenuRenderClear(void *self) __asm__("Clear__10MenuRender");
__asm__(".equ Clear__10MenuRender, 0x002408B0");
class Menu;
class MenuSystem { char padding[0x470]; Menu *curmenu; public: void Closing(Menu *menu); };
void MenuSystem::Closing(Menu *menu) { MenuRenderClear(this); curmenu = 0; KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00241150)
// 0x00241150 GetElementState__10MenuSystemi
class Menu { public: unsigned int GetElementFlags(int index); };
__asm__(".equ GetElementFlags__4Menui, 0x0023E688");
class MenuSystem { char padding[0x470]; Menu *curmenu; public: unsigned int GetElementState(int index); };
unsigned int MenuSystem::GetElementState(int index) { if (!curmenu) return 0; unsigned int result = curmenu->GetElementFlags(index); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002408B0)
// 0x002408B0 Clear__10MenuRender
void MENU_ClearRect(int x0, int y0, int x1, int y1);
__asm__(".equ MENU_ClearRect__Fiiii, 0x00240488");
class MenuRender { unsigned short x0; unsigned short y0; unsigned short x1; unsigned short y1; public: void Clear(); };
void MenuRender::Clear() { MENU_ClearRect(x0, y0, x1, y1); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif


#if defined(KELLY_DECOMP_FUNCTION_00241060)
// 0x00241060 CloseAllMenus__10MenuSystem
struct menu_vtable {
    char padding[0x10];
    short adjustment;
    short padding2;
    void (*close_all)(void *self);
};

struct menu_layout {
    char padding[0x1C];
    menu_vtable *vtable;
};

class MenuSystem {
    char padding[0x470];
    menu_layout *curmenu;

public:
    void CloseAllMenus();
};

void MenuSystem::CloseAllMenus()
{
    menu_layout *menu = curmenu;
    if (menu) {
        menu_vtable *table = menu->vtable;
        table->close_all((char *)menu + table->adjustment);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00241178)
// 0x00241178 GetElementText__10MenuSystemiPci
extern const char empty_string[];
__asm__(".equ empty_string, 0x004DFC30");

class Menu {
public:
    void GetElementText(int index, char *text, int length);
};

__asm__(".equ GetElementText__4MenuiPci, 0x0023E6C8");

class MenuSystem {
    char padding[0x470];
    Menu *curmenu;

public:
    void GetElementText(int index, char *text, int length);
};

void MenuSystem::GetElementText(int index, char *text, int length)
{
    if (curmenu) {
        curmenu->GetElementText(index, text, length);
        KELLY_DECOMP_COMPILER_BARRIER();
    } else {
        text[0] = empty_string[0];
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00241020)
// 0x00241020 CloseMenu__10MenuSystem
class Menu { public: void Close(bool toparent = true); };
class MenuRender { char padding[0x470]; public: void CloseMenu(); };
class MenuSystem : public MenuRender {
    Menu *curmenu;
public:
    void CloseMenu();
};
asm(".equ Close__4Menub, 0x0023E470");
asm(".equ CloseMenu__10MenuRender, 0x00240A20");
void MenuSystem::CloseMenu()
{
    if (curmenu)
        curmenu->Close();
    MenuRender::CloseMenu();
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
