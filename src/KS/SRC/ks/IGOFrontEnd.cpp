// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0016EE38)
// 0x0016EE38 clear__13IGOPrintQueue
class IGOPrintQueue { char padding[0xC0]; int start; int end; unsigned char size; public: void clear(); };
void IGOPrintQueue::clear() { start = end = size = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017C1A8)
// 0x0017C1A8 OnScoreChange__11IGOFrontEndi
class IGOFrontEnd {
public:
    void OnScoreChange(int player_index);
};

void IGOFrontEnd::OnScoreChange(int player_index) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017CEB0)
// 0x0017CEB0 IsPhotoShown__C11IGOFrontEnd
class PhotoWidget { char padding[0x18]; int shown; public: bool IsShown() const { return shown; } };
class IGOFrontEnd { char padding[0x5ac]; PhotoWidget *photoWidget; public: bool IsPhotoShown() const; };
bool IGOFrontEnd::IsPhotoShown() const { return photoWidget && photoWidget->IsShown(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017CE68)
// 0x0017CE68 GetCameraReticleFade__C11IGOFrontEnd
class CameraWidget { char padding[0x78]; float fade; public: float GetFade() const { return fade; } };
class IGOFrontEnd { char padding[0x5a8]; CameraWidget *cameraWidget; public: float GetCameraReticleFade() const; };
float IGOFrontEnd::GetCameraReticleFade() const { if (!cameraWidget) return 0.0f; return cameraWidget->GetFade(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017DF78)
// 0x0017DF78 GetProceedButtonState__11IGOFrontEnd
int getButtonState(int command);
__asm__(".equ getButtonState__Fi, 0x00159150");
class IGOFrontEnd { public: bool GetProceedButtonState(); };
bool IGOFrontEnd::GetProceedButtonState() { return getButtonState(6); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017DF98)
// 0x0017DF98 GetProceedButtonState__11IGOFrontEndi
int getButtonState(int command, int controller);
__asm__(".equ getButtonState__Fii, 0x00159270");
class IGOFrontEnd { public: bool GetProceedButtonState(int controller); };
bool IGOFrontEnd::GetProceedButtonState(int controller) { return getButtonState(6, controller); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017CB40)
// 0x0017CB40 OnSurferStandUp__11IGOFrontEnd
class WaveIndicatorWidget { public: void Hide(bool immediate); };
__asm__(".equ Hide__19WaveIndicatorWidgetb, 0x00168180");
class IGOFrontEnd { char padding[0x5a0]; WaveIndicatorWidget *waveIndicatorWidget; public: void OnSurferStandUp(); };
void IGOFrontEnd::OnSurferStandUp() { if (waveIndicatorWidget) { waveIndicatorWidget->Hide(true); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017CE18)
// 0x0017CE18 ShowCameraReticle__11IGOFrontEndf
class CameraWidget { public: void Show(float time); };
__asm__(".equ Show__12CameraWidgetf, 0x00169FC8");
class IGOFrontEnd { char padding[0x5a8]; CameraWidget *cameraWidget; public: void ShowCameraReticle(float time); };
void IGOFrontEnd::ShowCameraReticle(float time) { if (cameraWidget) { cameraWidget->Show(time); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017CE40)
// 0x0017CE40 HideCameraReticle__11IGOFrontEnd
class CameraWidget { public: void Hide(); };
__asm__(".equ Hide__12CameraWidget, 0x00169FF0");
class IGOFrontEnd { char padding[0x5a8]; CameraWidget *cameraWidget; public: void HideCameraReticle(); };
void IGOFrontEnd::HideCameraReticle() { if (cameraWidget) { cameraWidget->Hide(); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017CE88)
// 0x0017CE88 ShowPhoto__11IGOFrontEndP10nglTexturePii
struct nglTexture;
class PhotoWidget { public: void Show(nglTexture *texture, int *score, int photo); };
__asm__(".equ Show__11PhotoWidgetP10nglTexturePii, 0x0016AE98");
class IGOFrontEnd { char padding[0x5ac]; PhotoWidget *photoWidget; public: void ShowPhoto(nglTexture *texture, int *score, int photo); };
void IGOFrontEnd::ShowPhoto(nglTexture *texture, int *score, int photo) { if (photoWidget) { photoWidget->Show(texture, score, photo); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017CED0)
// 0x0017CED0 ShowMenuBackground__11IGOFrontEndb
struct widget_vtable {
    char padding[0x38];
    short adjustment;
    short padding2;
    void (*show)(void *self, bool enabled);
};

struct simple_widget_layout {
    char padding[4];
    widget_vtable *vtable;
};

class IGOFrontEnd {
    char padding[0x584];
    simple_widget_layout *menuBGWidget;

public:
    void ShowMenuBackground(bool enabled);
};

void IGOFrontEnd::ShowMenuBackground(bool enabled)
{
    simple_widget_layout *widget = menuBGWidget;
    if (widget) {
        widget_vtable *table = widget->vtable;
        table->show((char *)widget + table->adjustment, enabled);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017CF08)
// 0x0017CF08 IsMenuBGShown__C11IGOFrontEnd
class IGOWidget {
    bool display;

public:
    virtual ~IGOWidget();
    virtual void SetDisplay(bool);
    virtual void Update(float);
    virtual void Draw();
    virtual bool GetDisplay() const;
};

class SimpleWidget : public IGOWidget {
    int numPQs;
    void **pqs;

public:
    virtual ~SimpleWidget();
    virtual void Init(void *, const void *);
    virtual void Draw();
    virtual void Show(bool);
    virtual bool IsShown() const;
};

class IGOFrontEnd {
    char padding[0x584];
    SimpleWidget *menuBGWidget;

public:
    bool IsMenuBGShown() const;
};

bool IGOFrontEnd::IsMenuBGShown(void) const
{
    return menuBGWidget && menuBGWidget->IsShown();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016ECF8)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017CB68)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017CBC0)
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

class IGOFrontEnd {
    char padding[0x124];
    igo_player *players;

public:
    void SetBalanceMeter(int playerIdx, bool vertical, float value);
};

void IGOFrontEnd::SetBalanceMeter(
    int playerIdx,
    bool vertical,
    float value
)
{
    if (playerIdx && g_game_ptr->get_num_ai_players())
        return;

    if (players[playerIdx].horizBalanceWidget)
        players[playerIdx].horizBalanceWidget->SetArrow(value);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017CC18)
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

class IGOFrontEnd {
    char padding[0x124];
    igo_player *players;

public:
    void SetTubeDepthMeter(int playerIdx, float value);
};

void IGOFrontEnd::SetTubeDepthMeter(int playerIdx, float value)
{
    if (playerIdx && g_game_ptr->get_num_ai_players())
        return;

    if (players[playerIdx].horizBalanceWidget)
        players[playerIdx].horizBalanceWidget->SetFillage(value);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0017CDB8)
// 0x0017CDB8 TurnOnTubeIndicator__11IGOFrontEndib
struct TextString { char padding[0x48]; unsigned int color; };
struct player_info { char padding[0x34]; TextString *tubeTimer; char tail[4]; };
struct game_layout { char padding[0xb4]; int num_ai_players; };
extern game_layout *g_game_ptr;
extern unsigned int COLOR_POINTS_MAIN;
__asm__(".equ g_game_ptr, 0x0046AC64");
__asm__(".equ COLOR_POINTS_MAIN, 0x003E76E8");
class IGOFrontEnd {
    char padding[0x124];
    player_info *players;
    char padding2[0x448];
    unsigned int COLOR_STANDARD;
public:
    void TurnOnTubeIndicator(int player,bool on);
};
void IGOFrontEnd::TurnOnTubeIndicator(int player,bool on) {
    if (player && g_game_ptr->num_ai_players) return;
    TextString *timer=players[player].tubeTimer;
    if (timer) {
        if (on) timer->color=COLOR_POINTS_MAIN;
        else timer->color=COLOR_STANDARD;
    }
}
#endif
