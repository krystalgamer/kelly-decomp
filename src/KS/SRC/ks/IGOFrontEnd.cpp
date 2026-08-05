// Matching decompilation blocks selected by generated build shims.

// 0x0017CC88 ShowAccompBackground__11IGOFrontEndbii
#include "KS/SRC/ks/IGOFrontEnd.h"

void IGOFrontEnd::ShowAccompBackground(
    const bool background_enabled,
    const int horizontal_flags,
    const int vertical_flags)
{
    if (accompWidget)
        accompWidget->Show(background_enabled);
    if (gridWidget)
    {
        if (background_enabled)
        {
            gridWidget->ShowHLines(horizontal_flags);
            gridWidget->ShowVLines(vertical_flags);
        }
        else
        {
            gridWidget->Hide();
        }
    }
}


// 0x0016EE38 clear__13IGOPrintQueue
#include "KS/SRC/ks/IGOFrontEnd.h"

void IGOPrintQueue::clear() { start = end = size = 0; }

// 0x0017C1A8 OnScoreChange__11IGOFrontEndi
#include "KS/SRC/ks/IGOFrontEnd.h"
void IGOFrontEnd::OnScoreChange(int player_index) {
}

// 0x0017CEB0 IsPhotoShown__C11IGOFrontEnd
#include "KS/SRC/ks/IGOFrontEnd.h"
bool IGOFrontEnd::IsPhotoShown() const { return photoWidget && photoWidget->IsShown(); }

// 0x0017CE68 GetCameraReticleFade__C11IGOFrontEnd
#include "KS/SRC/ks/IGOFrontEnd.h"
float IGOFrontEnd::GetCameraReticleFade() const { if (!cameraWidget) return 0.0f; return cameraWidget->GetFade(); }

// 0x0017DF78 GetProceedButtonState__11IGOFrontEnd
#include "KS/SRC/ks/IGOFrontEnd.h"
int getButtonState(int command);
__asm__(".equ getButtonState__Fi, 0x00159150");
bool IGOFrontEnd::GetProceedButtonState() { return getButtonState(6); }

// 0x0017DF98 GetProceedButtonState__11IGOFrontEndi
#include "KS/SRC/ks/IGOFrontEnd.h"
int getButtonState(int command, int controller);
__asm__(".equ getButtonState__Fii, 0x00159270");
bool IGOFrontEnd::GetProceedButtonState(int controller) { return getButtonState(6, controller); }

// 0x0017CED0 ShowMenuBackground__11IGOFrontEndb
#include "KS/SRC/ks/IGOFrontEnd.h"
void IGOFrontEnd::ShowMenuBackground(bool enabled)
{
    if (menuBGWidget)
        menuBGWidget->Show(enabled);
}

// 0x0017CF08 IsMenuBGShown__C11IGOFrontEnd
#include "KS/SRC/ks/IGOFrontEnd.h"
bool IGOFrontEnd::IsMenuBGShown(void) const
{
    return menuBGWidget && menuBGWidget->IsShown();
}

// 0x0016ECF8 pop__13IGOPrintQueue
struct soundMessageObject {
    char data[12];
};

class IGOPrintQueue {
    soundMessageObject messages[16];
    int start;
    int end;
    unsigned char size;

public:
    soundMessageObject *pop();
};

soundMessageObject *IGOPrintQueue::pop()
{
    if (size == 0)
        return 0;

    int return_idx = start;

    size--;
    if (size != 0)
    {
        start++;
        if (start == 16)
            start = 0;
    }
    else
        start = end = 0;

    return &messages[return_idx];
}

// 0x0017CB68 TurnBalanceMeterOn__11IGOFrontEndibT2
class game {
    char padding[0xB4];
    int num_ai_players;

public:
    int get_num_ai_players() const { return num_ai_players; }
};

extern game *g_game_ptr;
__asm__(".equ g_game_ptr, 0x0046AC64");

class HorizBalanceWidget {
public:
    void Show(bool enabled);
};
__asm__(".equ Show__18HorizBalanceWidgetb, 0x001685D8");

struct igo_player {
    char padding[0x14];
    HorizBalanceWidget *horizBalanceWidget;
    char tail[0x24];
};

struct igo_front_end_layout {
    char padding[0x124];
    igo_player *players;
};

extern "C" void TurnBalanceMeterOn(
    igo_front_end_layout *self,
    int playerIdx,
    bool vertical,
    bool enabled
) __asm__("TurnBalanceMeterOn__11IGOFrontEndibT2");

void TurnBalanceMeterOn(
    igo_front_end_layout *self,
    int playerIdx,
    bool vertical,
    bool enabled
)
{
    if (playerIdx && g_game_ptr->get_num_ai_players())
        return;

    if (self->players[playerIdx].horizBalanceWidget)
        self->players[playerIdx].horizBalanceWidget->Show(enabled);
}

// 0x0017CBC0 SetBalanceMeter__11IGOFrontEndibf
class game {
    char padding[0xB4];
    int num_ai_players;

public:
    int get_num_ai_players() const { return num_ai_players; }
};

extern game *g_game_ptr;
__asm__(".equ g_game_ptr, 0x0046AC64");

class HorizBalanceWidget {
public:
    void SetArrow(float value);
};
__asm__(".equ SetArrow__18HorizBalanceWidgetf, 0x001686E0");

struct igo_player {
    char padding[0x14];
    HorizBalanceWidget *horizBalanceWidget;
    char tail[0x24];
};

struct igo_balance_layout {
    char padding[0x124];
    igo_player *players;
};

extern "C" void set_balance_meter(
    igo_balance_layout *self,
    int playerIdx,
    bool vertical,
    float value
) __asm__("SetBalanceMeter__11IGOFrontEndibf");
void set_balance_meter(
    igo_balance_layout *self,
    int playerIdx,
    bool vertical,
    float value)
{
    if (playerIdx && g_game_ptr->get_num_ai_players())
        return;

    if (self->players[playerIdx].horizBalanceWidget)
        self->players[playerIdx].horizBalanceWidget->SetArrow(value);
}

// 0x0017CC18 SetTubeDepthMeter__11IGOFrontEndif
class game {
    char padding[0xB4];
    int num_ai_players;

public:
    int get_num_ai_players() const { return num_ai_players; }
};

extern game *g_game_ptr;
__asm__(".equ g_game_ptr, 0x0046AC64");

class HorizBalanceWidget {
public:
    void SetFillage(float value);
};
__asm__(".equ SetFillage__18HorizBalanceWidgetf, 0x001688B8");

struct igo_player {
    char padding[0x14];
    HorizBalanceWidget *horizBalanceWidget;
    char tail[0x24];
};

struct igo_balance_layout {
    char padding[0x124];
    igo_player *players;
};

extern "C" void set_tube_depth(
    igo_balance_layout *self,
    int playerIdx,
    float value
) __asm__("SetTubeDepthMeter__11IGOFrontEndif");
void set_tube_depth(
    igo_balance_layout *self,
    int playerIdx,
    float value)
{
    if (playerIdx && g_game_ptr->get_num_ai_players())
        return;

    if (self->players[playerIdx].horizBalanceWidget)
        self->players[playerIdx].horizBalanceWidget->SetFillage(value);
}

// 0x0017CDB8 TurnOnTubeIndicator__11IGOFrontEndib
struct TextString { char padding[0x48]; unsigned int color; };
struct player_info { char padding[0x34]; TextString *tubeTimer; char tail[4]; };
struct game_layout { char padding[0xb4]; int num_ai_players; };
extern game_layout *g_game_ptr;
extern unsigned int COLOR_POINTS_MAIN;
__asm__(".equ g_game_ptr, 0x0046AC64");
__asm__(".equ COLOR_POINTS_MAIN, 0x003E76E8");
struct igo_indicator_layout {
    char padding[0x124];
    player_info *players;
    char padding2[0x448];
    unsigned int COLOR_STANDARD;
};
extern "C" void turn_tube_indicator(
    igo_indicator_layout *self,
    int player,
    bool on
) __asm__("TurnOnTubeIndicator__11IGOFrontEndib");
void turn_tube_indicator(igo_indicator_layout *self,int player,bool on) {
    if (player && g_game_ptr->num_ai_players) return;
    TextString *timer=self->players[player].tubeTimer;
    if (timer) {
        if (on) timer->color=COLOR_POINTS_MAIN;
        else timer->color=self->COLOR_STANDARD;
    }
}

// 0x0017BCA0 SetReplayText__11IGOFrontEndRC7stringx
struct stringx { char *data; void *buffer; };
extern "C" void copy_string(stringx *, const stringx *) __asm__("__7stringxRC7stringx");
__asm__(".equ __7stringxRC7stringx,0x0034D4D0");
struct text_vtable { char padding[72]; short adjustment; short reserved; void (*change_text)(void *, stringx *); };
struct TextString { char padding[60]; int checkTime; char padding2[12]; text_vtable *vtable; };
struct igo_replay_text_layout {
    char padding[1368];
    TextString *replayText;
};
extern "C" void set_replay_text(
    igo_replay_text_layout *self,
    const stringx &text
) __asm__("SetReplayText__11IGOFrontEndRC7stringx");
void set_replay_text(igo_replay_text_layout *self,const stringx &text)
{
    if (text.data[0] != 0 && self->replayText) {
        stringx temporary;
        copy_string(&temporary, &text);
        text_vtable *table = self->replayText->vtable;
        table->change_text((char *)self->replayText + table->adjustment, &temporary);
        self->replayText->checkTime = false;
    }
}

// 0x0017CD48 TurnOnTubeTimer__11IGOFrontEndib
struct game { char padding[180]; int num_ai_players; }; extern game *g_game_ptr; __asm__(".equ g_game_ptr,0x0046AC64");
struct TextString { char padding[68]; int no_color; unsigned int color; };
struct player_info { char padding[52]; TextString *tubeTimer; int drawTubeTimer; };
struct igo_layout { char padding[292]; player_info *players; char padding2[1096]; unsigned int standard_color; };
extern "C" void turn_tube_timer(igo_layout *self,int player,bool on) __asm__("TurnOnTubeTimer__11IGOFrontEndib");
void turn_tube_timer(igo_layout *self,int player,bool on)
{
    if(player && g_game_ptr->num_ai_players) return;
    if(self->players[player].tubeTimer) {
        self->players[player].drawTubeTimer=on;
        self->players[player].tubeTimer->no_color=false;
        self->players[player].tubeTimer->color=self->standard_color;
    }
}

// 0x00175508 OnModeReset__11IGOFrontEnd
struct game{char pad[116];int mode;};extern game*g_game_ptr;struct PhotoWidget{void Reset();};struct CameraWidget{void Reset();};__asm__(".equ g_game_ptr,0x0046AC64");__asm__(".equ Reset__11PhotoWidget,0x0016AB70");__asm__(".equ Reset__12CameraWidget,0x00169EA0");struct IGOFrontEndLayout{char pad0[256];bool firstTimeAttackState;bool firstMeterAttackState;char pad1[32];int runState;char pad2[1148];CameraWidget*cameraWidget;PhotoWidget*photoWidget;};extern "C" void reset_igo_mode(IGOFrontEndLayout*self)__asm__("OnModeReset__11IGOFrontEnd");void reset_igo_mode(IGOFrontEndLayout*self){int mode=g_game_ptr->mode;if(mode==5){self->firstTimeAttackState=true;self->runState=11;}else if(mode==6){self->firstMeterAttackState=true;self->runState=12;}if(self->photoWidget)self->photoWidget->Reset();if(self->cameraWidget){self->cameraWidget->Reset();asm volatile("");}}

// 0x0017A528 OnEvent__11IGOFrontEnd5EVENTii
enum EVENT{EVT_SURFER_LAND,EVT_SURFER_WIPEOUT,EVT_SURFER_DUCK_DIVE};struct clock_vtable{char padding[64];short adjustment;short reserved;void(*show)(void*,float);};struct AnalogClockWidget{char padding[4];clock_vtable*vtable;};struct ObjectAlertWidget{};extern "C" void hide_alert(ObjectAlertWidget*,bool)__asm__("Hide__17ObjectAlertWidgetb");extern const float wipeout_time,duck_time;asm(".equ Hide__17ObjectAlertWidgetb,0x0016A6D0");asm(".equ wipeout_time,0x004D06D8");asm(".equ duck_time,0x004D14B4");struct IGOFrontEndEventLayout{char padding0[1428];AnalogClockWidget*analogClockWidget;char padding1[52];ObjectAlertWidget*objectAlertWidget;};inline void show_time(AnalogClockWidget*w,float t){clock_vtable*v=w->vtable;v->show((char*)w+v->adjustment,t);}extern "C" void igo_event(IGOFrontEndEventLayout*self,EVENT event,int param1,int param2)__asm__("OnEvent__11IGOFrontEnd5EVENTii");void igo_event(IGOFrontEndEventLayout*self,const EVENT event,const int param1,const int param2){if(event==EVT_SURFER_WIPEOUT){if(self->analogClockWidget&&param2==0)show_time(self->analogClockWidget,wipeout_time);if(self->objectAlertWidget){hide_alert(self->objectAlertWidget,false);asm volatile("");}}else if(event==EVT_SURFER_DUCK_DIVE){if(self->analogClockWidget)show_time(self->analogClockWidget,duck_time);}}
