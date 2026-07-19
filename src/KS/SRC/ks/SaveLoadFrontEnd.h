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
