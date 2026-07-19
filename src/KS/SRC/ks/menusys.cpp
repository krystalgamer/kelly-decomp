// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002410E8)
// 0x002410E8 Opening__10MenuSystemP4Menu
class Menu;
extern "C" void MenuRenderClear(void *self) __asm__("Clear__10MenuRender");
__asm__(".equ Clear__10MenuRender, 0x002408B0");
class MenuSystem { char padding[0x470]; Menu *curmenu; public: void Opening(Menu *menu); };
void MenuSystem::Opening(Menu *menu) { curmenu = menu; MenuRenderClear(this); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00241130)
// 0x00241130 TotalEntries__10MenuSystem
class Menu { char padding[4]; int entries; public: int NumEntries() const { return entries; } };
class MenuSystem { char padding[0x470]; Menu *curmenu; public: int TotalEntries(); };
int MenuSystem::TotalEntries() { if (!curmenu) return 0; return curmenu->NumEntries(); }
#endif
