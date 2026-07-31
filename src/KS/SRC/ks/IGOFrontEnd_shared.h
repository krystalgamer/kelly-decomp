#ifndef KELLY_DECOMP_IGO_FRONT_END_SHARED_H
#define KELLY_DECOMP_IGO_FRONT_END_SHARED_H

#include "KS/SRC/ks/igo_widget_grid.h"
#include "KS/SRC/ks/igo_widget_photo.h"

class PanelFile;
class stringx;

class WaveIndicatorWidget {
public:
    void Hide(bool immediate);
};

class CameraWidget : public IGOWidget {
    enum {
        NUM_RETICLE_PQS = 28
    };

    PanelQuad *reticlePQs[NUM_RETICLE_PQS];
    float fade;
    float showTimer;
    float showTime;

public:
    void Show(float time);
    void Hide();
    float GetFade() const { return fade; }
};

class SimpleWidget : public IGOWidget {
    int numPQs;
    PanelQuad **pqs;

public:
    explicit SimpleWidget(int size);
    virtual ~SimpleWidget();
    virtual void Init(PanelFile &panel, const stringx *names);
    virtual void Draw();
    virtual void Show(bool enabled = true);
    virtual bool IsShown() const;
};

class IGOFrontEnd {
    char data_before_menu_background[0x584];
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
    void ShowAccompBackground(
        bool background_enabled,
        int horizontal_flags,
        int vertical_flags);
};

#endif
