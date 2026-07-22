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
