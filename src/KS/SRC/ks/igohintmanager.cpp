// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00163FC0)
// 0x00163FC0 Draw__14IGOHintManager
#include "KS/SRC/ks/igohintmanager_shared.h"
__asm__(".equ g_game_ptr, 0x0046AC64");
__asm__(".equ is_paused__C4game, 0x0027D968");
void IGOHintManager::Draw() {
    if (!g_game_ptr->is_paused())
        instruction_text->Draw();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00163EC0)
// 0x00163EC0 _$_14IGOHintManager
extern "C" void string_dtor(void*,int) __asm__("_$_7stringx");extern "C" void object_delete(void*) __asm__("__builtin_delete");__asm__(".equ _$_7stringx,0x0034D6E0");__asm__(".equ __builtin_delete,0x002AC6B0");struct text_vtable{char p0[8];short adjustment;short x0;void(*destroy)(void*,int);};struct text_layout{char p0[76];text_vtable*vtable;};struct hint_layout{char hint_text[8];text_layout*instruction_text;};extern "C" void destroy_hint(hint_layout*self,int deleting) __asm__("_$_14IGOHintManager");void destroy_hint(hint_layout*self,int deleting){if(self->instruction_text){text_layout*tobj=self->instruction_text;text_vtable*t=tobj->vtable;t->destroy((char*)tobj+t->adjustment,3);}string_dtor(self,2);if(deleting&1){object_delete(self);int dead;__asm__("" : "=r"(dead));}}
#endif
