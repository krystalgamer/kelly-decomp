// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001CD9B0)
// 0x001CD9B0 OnStart__13NameEntryMenui
extern "C" void FEMenuOnStart(void *self, int command) __asm__("OnStart__6FEMenui");
__asm__(".equ OnStart__6FEMenui, 0x001577B8");
class NameEntryMenu { char padding[0x2dc]; bool in_game; public: void OnStart(int command); };
void NameEntryMenu::OnStart(int command) { if (!in_game) { FEMenuOnStart(this, command); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CB0F0)
// 0x001CB0F0 OnUp__17HighScoreFrontEndi
typedef void (*score_handler)(void *, int);
struct score_slot { short adjustment; unsigned short padding; score_handler function; };
struct score_vtable { char padding[0x98]; score_slot up; };
struct ScoreMenu { char padding[0x74]; score_vtable *vtable; };
class HighScoreFrontEnd { char padding[0x60]; ScoreMenu *active; char padding2[0x228]; int in_game; public: void OnUp(int); };
void HighScoreFrontEnd::OnUp(int controller)
{
    if (in_game && active) {
        score_slot &slot = active->vtable->up;
        slot.function((char *)active + slot.adjustment, controller);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CB130)
// 0x001CB130 OnDown__17HighScoreFrontEndi
typedef void (*score_handler)(void *, int);
struct score_slot { short adjustment; unsigned short padding; score_handler function; };
struct score_vtable { char padding[0xa0]; score_slot down; };
struct ScoreMenu { char padding[0x74]; score_vtable *vtable; };
class HighScoreFrontEnd { char padding[0x60]; ScoreMenu *active; char padding2[0x228]; int in_game; public: void OnDown(int); };
void HighScoreFrontEnd::OnDown(int controller)
{
    if (in_game && active) {
        score_slot &slot = active->vtable->down;
        slot.function((char *)active + slot.adjustment, controller);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CB310)
// 0x001CB310 OnStart__17HighScoreFrontEndi
typedef void (*score_handler)(void *, int);
struct score_slot { short adjustment; unsigned short padding; score_handler function; };
struct score_vtable { char padding[0x90]; score_slot start; };
struct ScoreMenu { char padding[0x74]; score_vtable *vtable; };
class HighScoreFrontEnd { char padding[0x60]; ScoreMenu *active; char padding2[0x228]; int in_game; public: void OnStart(int); };
void HighScoreFrontEnd::OnStart(int controller)
{
    if (in_game && active) {
        score_slot &slot = active->vtable->start;
        slot.function((char *)active + slot.adjustment, controller);
    }
}
#endif
