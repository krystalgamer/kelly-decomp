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
