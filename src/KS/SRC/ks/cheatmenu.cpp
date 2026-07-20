// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002EF390)
// 0x002EF390 CompleteGoal0Button__FP9MenuEntryi
class MenuEntry; class beach { public: void complete_goal(int goal); };
extern beach *beach_ptr;
__asm__(".equ beach_ptr, 0x0043F710");
__asm__(".equ complete_goal__5beachi, 0x001ED340");
bool CompleteGoal0Button(MenuEntry *entry, int button) { if (beach_ptr) beach_ptr->complete_goal(0); return true; }
#endif
