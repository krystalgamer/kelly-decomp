// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DCDF0)
// 0x001DCDF0 OnTriangle__10DialogMenui
class DialogMenu {
public:
    void OnTriangle(int arg0);
};

void DialogMenu::OnTriangle(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DCDF8)
// 0x001DCDF8 OnUnactivate__10DialogMenuP6FEMenu
class FEMenu;
class DialogMenu { public: void TurnPQ(bool value); void OnUnactivate(FEMenu *menu); };
__asm__(".equ TurnPQ__10DialogMenub, 0x0019DA00");
void DialogMenu::OnUnactivate(FEMenu *menu) { TurnPQ(false); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DCE70)
// 0x001DCE70 OnTriangle__12KeyboardMenui
class KeyboardMenu { public: void go_to_previous_menu(); void OnTriangle(int command); };
__asm__(".equ go_to_previous_menu__12KeyboardMenu, 0x001A2420");
void KeyboardMenu::OnTriangle(int command) { go_to_previous_menu(); __asm__ volatile(""); }
#endif
