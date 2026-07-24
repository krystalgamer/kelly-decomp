// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_0015AA88)
#include "KS/SRC/ks/igolearn_new_trickmanager_shared.h"

__asm__(".equ PopFront__23IGOLearnNewTrickManagerb, 0x0015B418");

// 0x0015AA88 Reset__23IGOLearnNewTrickManager
void IGOLearnNewTrickManager::Reset()
{
    addIconDelay = 6.0f;
    addIconTimer = 4.0f;

    if (icon_active)
        PopFront();

    iconCounter = 0;
    prev_iconCounter = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0015B650)
// 0x0015B650 __Q223IGOLearnNewTrickManager12IconResource
class IGOLearnNewTrickManager { public: class IconResource { void* texture; int trickIdx; public: IconResource(); }; };
IGOLearnNewTrickManager::IconResource::IconResource() { texture = 0; trickIdx = -1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0015B708)
// 0x0015B708 __Q223IGOLearnNewTrickManager4Icon
class IGOLearnNewTrickManager { public: class Icon { char padding[0x64]; void* resource; bool show; public: Icon(); }; };
IGOLearnNewTrickManager::Icon::Icon() { show = true; resource = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0015B828)
// 0x0015B828 SetShow__Q223IGOLearnNewTrickManager4Iconb
class IGOLearnNewTrickManager {
public:
    class Icon {
        char padding[0x68];
        bool show;

    public:
        void SetShow(bool visible);
    };
};

void IGOLearnNewTrickManager::Icon::SetShow(bool visible) {
    show = visible;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0015B668)
// 0x0015B668 _$_Q223IGOLearnNewTrickManager12IconResource
extern "C" void builtin_delete(void *pointer) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");
extern "C" void IconResourceDtor(void *self, int deleting) __asm__("_$_Q223IGOLearnNewTrickManager12IconResource");
void IconResourceDtor(void *self, int deleting) { if (deleting & 1) builtin_delete(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0015B720)
// 0x0015B720 _$_Q223IGOLearnNewTrickManager4Icon
extern "C" void builtin_delete(void *pointer) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");
extern "C" void IconDtor(void *self, int deleting) __asm__("_$_Q223IGOLearnNewTrickManager4Icon");
void IconDtor(void *self, int deleting) { if (deleting & 1) builtin_delete(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0015B418)
// 0x0015B418 PopFront__23IGOLearnNewTrickManagerb
extern float max_trick_available_time;
extern float fade_in_time;
__asm__(".equ max_trick_available_time, 0x003E7600");
__asm__(".equ fade_in_time, 0x003E7608");
class IGOLearnNewTrickManager {
    char padding[0x30];
    int icon_active;
    int iconCounter;
    char padding2[8];
    float addIconDelay;
    char padding3[12];
    float trick_available_time;
public:
    void PopFront(bool complete);
};
void IGOLearnNewTrickManager::PopFront(bool complete) {
    if (!icon_active) return;
    if (complete) {
        iconCounter++;
        trick_available_time=max_trick_available_time-2.0f*fade_in_time;
    }
    icon_active=false;
    addIconDelay*=0.97f;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0015B518)
// 0x0015B518 OnEvent__23IGOLearnNewTrickManager5EVENTii
struct game_layout { char padding[0xbc]; int active_player; };
enum EVENT { EVT_SURFER_LAND=0, EVT_SURFER_WIPEOUT=1 };
extern game_layout *g_game_ptr;
__asm__(".equ g_game_ptr, 0x0046AC64");
class IGOLearnNewTrickManager {
    char padding[0x58];
    bool got_one_currently;
public:
    void PopFront(bool complete);
    void OnEvent(EVENT event,int player,int param2);
};
__asm__(".equ PopFront__23IGOLearnNewTrickManagerb, 0x0015B418");
void IGOLearnNewTrickManager::OnEvent(EVENT event,int player,int) {
    if (got_one_currently && player==g_game_ptr->active_player) {
        if (event==EVT_SURFER_LAND) {
            PopFront(true);
            got_one_currently=false;
        } else if (event==EVT_SURFER_WIPEOUT) {
            got_one_currently=false;
        }
    }
}
#endif
