// Matching decompilation blocks selected by generated build shims.

#include "KS/SRC/ks/igolearn_new_trickmanager.h"

// 0x0015AA88 Reset__23IGOLearnNewTrickManager
__asm__(".equ PopFront__23IGOLearnNewTrickManagerb, 0x0015B418");

void IGOLearnNewTrickManager::Reset()
{
    addIconDelay = 6.0f;
    addIconTimer = 4.0f;

    if (icon_active)
        PopFront();

    iconCounter = 0;
    prev_iconCounter = 0;
}

// 0x0015B650 __Q223IGOLearnNewTrickManager12IconResource
IGOLearnNewTrickManager::IconResource::IconResource() { texture = 0; trickIdx = -1; }

// 0x0015B708 __Q223IGOLearnNewTrickManager4Icon
IGOLearnNewTrickManager::Icon::Icon() { show = true; resource = 0; }

// 0x0015B828 SetShow__Q223IGOLearnNewTrickManager4Iconb
void IGOLearnNewTrickManager::Icon::SetShow(bool visible) {
    show = visible;
}

// 0x0015B418 PopFront__23IGOLearnNewTrickManagerb
extern float max_trick_available_time;
extern float fade_in_time;
__asm__(".equ max_trick_available_time, 0x003E7600");
__asm__(".equ fade_in_time, 0x003E7608");
void IGOLearnNewTrickManager::PopFront(bool complete) {
    if (!icon_active) return;
    if (complete) {
        iconCounter++;
        trick_available_time=max_trick_available_time-2.0f*fade_in_time;
    }
    icon_active=false;
    addIconDelay*=0.97f;
}

// 0x0015B518 OnEvent__23IGOLearnNewTrickManager5EVENTii
#include "KS/SRC/game.h"

__asm__(".equ PopFront__23IGOLearnNewTrickManagerb, 0x0015B418");
void IGOLearnNewTrickManager::OnEvent(EVENT event,int player,int) {
    if (got_one_currently && player==g_game_ptr->get_active_player()) {
        if (event==EVT_SURFER_LAND) {
            PopFront(true);
            got_one_currently=false;
        } else if (event==EVT_SURFER_WIPEOUT) {
            got_one_currently=false;
        }
    }
}

// 0x0015B478 TrickChain__23IGOLearnNewTrickManageri
struct IconResource { char padding[4]; int trickIdx; };
struct Icon { char padding[100]; IconResource *resource; };
struct TrickData { char padding[24]; int trick_type; char padding2[60]; };
extern TrickData GTrickList[];
__asm__(".equ GTrickList,0x00427CA8");
__asm__(".equ PopFront__23IGOLearnNewTrickManagerb,0x0015B418");
void IGOLearnNewTrickManager::TrickChain(int trickIdx)
{
    if (current_icon->resource && trickIdx == current_icon->resource->trickIdx) {
        if (GTrickList[trickIdx].trick_type == 0) {
            got_one_currently = true;
            return;
        } else {
            PopFront(true);
            __asm__ __volatile__("" : : : "memory");
        }
    }
}
