// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0023E538)
// 0x0023E538 ClearMenu__4Menu
class Menu { public: void Resize(int size); void ClearMenu(); };
__asm__(".equ Resize__4Menui, 0x0023E2B0");
void Menu::ClearMenu() { Resize(0); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
