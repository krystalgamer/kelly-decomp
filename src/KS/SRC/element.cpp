// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_002CA428)
// 0x002CA428 do_event__11color_eventRCf
#include "KS/SRC/color_event_shared.h"

void color_event::do_event(const float &lerp)
{
    for (int index = 0; index < 4; ++index)
    {
        owner->colors[index].red +=
            (target.red - owner->colors[index].red) * lerp;
        owner->colors[index].green +=
            (target.green - owner->colors[index].green) * lerp;
        owner->colors[index].blue +=
            (target.blue - owner->colors[index].blue) * lerp;
        owner->colors[index].alpha +=
            (target.alpha - owner->colors[index].alpha) * lerp;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002CA4F0)
// 0x002CA4F0 do_event__10move_eventRCf
class element { public: char pad[0x30]; float T[2]; };
class move_event { public: char pad[4]; element *owner; char pad2[16]; float x,y; void do_event(const float&); };
void move_event::do_event(const float& lerp){owner->T[0]+=(x-owner->T[0])*lerp;owner->T[1]+=(y-owner->T[1])*lerp;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002CA5C0)
// 0x002CA5C0 do_event__11scale_eventRCf
class element { public: char pad[0x38]; float S[2]; };
class scale_event { public: char pad[4]; element *owner; char pad2[16]; float sx,sy; void do_event(const float&); };
void scale_event::do_event(const float& lerp){owner->S[0]+=(sx-owner->S[0])*lerp;owner->S[1]+=(sy-owner->S[1])*lerp;}
#endif
