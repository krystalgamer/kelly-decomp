// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002CA4F0)
// 0x002CA4F0 do_event__10move_eventRCf
class element { public: char pad[0x30]; float T[2]; };
class move_event { public: char pad[4]; element *owner; char pad2[16]; float x,y; void do_event(const float&); };
void move_event::do_event(const float& lerp){owner->T[0]+=(x-owner->T[0])*lerp;owner->T[1]+=(y-owner->T[1])*lerp;}
#endif
