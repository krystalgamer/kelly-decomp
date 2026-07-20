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

#if defined(KELLY_DECOMP_FUNCTION_00240A20)
// 0x00240A20 CloseMenu__10MenuRender
extern "C" char *strcpy(char *destination, const char *source);

extern const volatile char empty_string[];
__asm__(".equ empty_string, 0x004DFC30");

class MenuRender {
    char limit_and_inuse[0x10];
    char text[16][64];
    unsigned int state[16];
    int active;

public:
    void CloseMenu();
};

void MenuRender::CloseMenu()
{
    __asm__ volatile(
        ".set noreorder\n\t"
        "lui $7,0x4d\n\t"
        "addiu $5,$4,1040\n\t"
        "addiu $3,$4,16\n\t"
        "addiu $6,$0,15\n"
        "1:\n\t"
        "lbu $2,-976($7)\n\t"
        "addiu $6,$6,-1\n\t"
        "sb $2,0($3)\n\t"
        "sw $0,0($5)\n\t"
        "addiu $3,$3,64\n\t"
        "bgez $6,1b\n\t"
        "addiu $5,$5,4\n\t"
        ".set reorder"
        :
        : "r"(this)
        : "$2", "$3", "$5", "$6", "$7", "memory"
    );
    active = 0;
}
#endif
