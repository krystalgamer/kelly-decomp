// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002434B0)
// 0x002434B0 ButtonRecord__12TrickManagerUcb
struct ButtonEvent{unsigned char Button;char pad[3];bool Pressed;float Time;};struct TrickManager{ButtonEvent queue[32];char pad0[160];bool CurrentButtonState[20];float time;char pad1[8];int mEventQueuePos;char pad2[20];bool button_pressed_this_frame;void ButtonRecord(unsigned char,bool)__asm__("ButtonRecord__12TrickManagerUcb");};void TrickManager::ButtonRecord(unsigned char button,bool pressed){if(pressed)button_pressed_this_frame=true;if(CurrentButtonState[button]==pressed)return;CurrentButtonState[button]=pressed;queue[mEventQueuePos].Button=button;queue[mEventQueuePos].Pressed=pressed;queue[mEventQueuePos].Time=time;mEventQueuePos++;if(mEventQueuePos==32)mEventQueuePos=0;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00244370)
// 0x00244370 SetInternalVars__12CarveManager
struct vector3d{float x,y,z;vector3d&operator=(const vector3d&o){x=o.x;y=o.y;z=o.z;return *this;}};struct po{vector3d non_affine_slow_xform(const vector3d&)const __asm__("non_affine_slow_xform__C2poRC8vector3d");};struct Board{char p[80];po*my_po;};struct Controller{char p[3408];Board*board;};extern vector3d forward;class CarveManager{public:char p0[4];vector3d cur_board_vec;vector3d last_board_vec;float angle;int field32,field36,TurnType,field44,field48;char p1[4];Controller*ksctrl;void SetInternalVars()__asm__("SetInternalVars__12CarveManager");};__asm__(".equ forward,0x00554468");__asm__(".equ non_affine_slow_xform__C2poRC8vector3d,0x003483A8");void CarveManager::SetInternalVars(){field36=0;field32=0;field44=0;field48=0;if(ksctrl){cur_board_vec=ksctrl->board->my_po->non_affine_slow_xform(forward);last_board_vec=cur_board_vec;}TurnType=0;asm volatile("" : : : "memory");angle=0.0f;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002437B0)
// 0x002437B0 GetPreviousPressedEvent__12TrickManageriUcfUcb
typedef unsigned char uint8;struct ButtonEvent{uint8 Button;char pad[3];int Pressed;float Time;};struct TrickEvent{void*trick;uint8 Button;char pad[3];float EventTime;float Time;};class TrickManager{ButtonEvent mEventQueue[32];TrickEvent mTrickQueue[10];int CurrentButtonState[20];float time;public:int GetPreviousPressedEvent(int,uint8,float,uint8,bool);};int TrickManager::GetPreviousPressedEvent(int Event,uint8 Skip,float Time,uint8 Top,bool IgnoreDiagonals){Event-=Skip;if(Event<0)Event+=32;while(1){if(mEventQueue[Event].Button){if(!IgnoreDiagonals||(mEventQueue[Event].Button!=5&&mEventQueue[Event].Button!=6&&mEventQueue[Event].Button!=7&&mEventQueue[Event].Button!=8)){if(time-mEventQueue[Event].Time>Time)return-1;if(mEventQueue[Event].Pressed)return Event;}}Event--;if(Event<0)Event=31;if(Event==Top)return-1;}}
#endif
