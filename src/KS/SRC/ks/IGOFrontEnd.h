#ifndef IGO_FRONT_END_H
#define IGO_FRONT_END_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"
#include "KS/SRC/ks/SoundScript.h"
#include "KS/SRC/stringx.h"
#include "KS/SRC/ks/igo_widget_camera.h"
#include "KS/SRC/ks/igo_widget_grid.h"
#include "KS/SRC/ks/igo_widget_photo.h"
#include "KS/SRC/ks/igo_widget_simple.h"
#include "KS/SRC/ks/igo_widget_waveindicator.h"

enum {
    MAX_IGO_PRINT_QUEUE_SIZE = 16
};

class HorizBalanceWidget;

struct soundMessageObject {
    stringx str;
    EventType event;
};

class IGOPrintQueue {
    soundMessageObject strings[MAX_IGO_PRINT_QUEUE_SIZE];
    int start;
    int end;
    unsigned char size;

public:
    void clear();
    soundMessageObject *pop();
};

class IGOFrontEnd : public FrontEnd {
public:
    struct PLAYER {
        char data_before_horiz_balance[0x14];
        HorizBalanceWidget *horizBalanceWidget;
        char data_before_tube_timer[0x1C];
        TextString *tubeTimer;
        char remaining_data[4];
    };

private:
    char data_before_players[
        0x124 - sizeof(FrontEnd)];
    PLAYER *players;
    char data_before_replay_text[0x558 - 0x128];
    TextString *replayText;
    char data_before_color_standard[0x570 - 0x55C];
    color32 COLOR_STANDARD;
    char data_before_menu_background[0x584 - 0x574];
    SimpleWidget *menuBGWidget;
    SimpleWidget *accompWidget;
    char data_before_wave_indicator[0x14];
    WaveIndicatorWidget *waveIndicatorWidget;
    char data_before_camera_widget[4];
    CameraWidget *cameraWidget;
    PhotoWidget *photoWidget;
    char data_before_grid_widget[0x20];
    GridWidget *gridWidget;

public:
    void OnScoreChange(int player_index);
    void SetReplayText(const stringx &text);
    void OnSurferStandUp();
    void ShowCameraReticle(float time);
    void HideCameraReticle();
    float GetCameraReticleFade() const;
    void ShowPhoto(
        nglTexture *texture,
        int *score,
        int photo);
    bool IsPhotoShown() const;
    void ShowMenuBackground(bool enabled);
    bool IsMenuBGShown() const;
    bool GetProceedButtonState();
    bool GetProceedButtonState(int controller);
    void TurnBalanceMeterOn(
        int player,
        bool vertical,
        bool enabled);
    void SetBalanceMeter(
        int player,
        bool vertical,
        float value);
    void SetTubeDepthMeter(int player, float value);
    void TurnOnTubeIndicator(int player, bool enabled);
    void ShowAccompBackground(
        bool background_enabled,
        int horizontal_flags,
        int vertical_flags);
};

extern IGOFrontEnd *frontend_igo;

#endif
