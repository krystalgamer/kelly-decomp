// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00244308)
// 0x00244308 FrameAdvance__12TrickManagerf
class TrickManager {
    char padding[624];
    float time;
    char padding2[20];
    int LastFrameTrickQueued;
    char padding3[4];
    bool trick_this_frame;
    bool button_pressed_this_frame;
public:
    void UpdateButtons();
    void ProcessEvents();
    void UpdateQueue();
    void FrameAdvance(float dt);
};
__asm__(".equ UpdateButtons__12TrickManager,0x00243538");
__asm__(".equ ProcessEvents__12TrickManager,0x00243A30");
__asm__(".equ UpdateQueue__12TrickManager,0x002441C0");
void TrickManager::FrameAdvance(float dt)
{
    trick_this_frame = false;
    button_pressed_this_frame = false;
    UpdateButtons();
    ProcessEvents();
    UpdateQueue();
    time += dt;
    if (trick_this_frame)
        LastFrameTrickQueued = -1;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002434B0)
// 0x002434B0 ButtonRecord__12TrickManagerUcb
struct ButtonEvent{unsigned char Button;char pad[3];bool Pressed;float Time;};struct TrickManager{ButtonEvent queue[32];char pad0[160];bool CurrentButtonState[20];float time;char pad1[8];int mEventQueuePos;char pad2[20];bool button_pressed_this_frame;void ButtonRecord(unsigned char,bool)__asm__("ButtonRecord__12TrickManagerUcb");};void TrickManager::ButtonRecord(unsigned char button,bool pressed){if(pressed)button_pressed_this_frame=true;if(CurrentButtonState[button]==pressed)return;CurrentButtonState[button]=pressed;queue[mEventQueuePos].Button=button;queue[mEventQueuePos].Pressed=pressed;queue[mEventQueuePos].Time=time;mEventQueuePos++;if(mEventQueuePos==32)mEventQueuePos=0;}
#endif
