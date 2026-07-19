// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002EEAF8)
// 0x002EEAF8 OnOpen__9MenuSoundP4MenuP10MenuSystem
class MenuSystem;
class Menu { public: void OnOpen(Menu *previous, MenuSystem *system); };
__asm__(".equ OnOpen__4MenuP4MenuP10MenuSystem, 0x0023EAE0");
class MenuSound : public Menu { public: void OnOpen(Menu *previous, MenuSystem *system); };
void MenuSound::OnOpen(Menu *previous, MenuSystem *system) { Menu::OnOpen(previous, system); __asm__ volatile(""); }
#endif
