#ifndef IGO_FRONT_END_H
#define IGO_FRONT_END_H

#include "KS/SRC/ks/igo_widget_camera.h"
#include "KS/SRC/ks/igo_widget_grid.h"
#include "KS/SRC/ks/igo_widget_photo.h"
#include "KS/SRC/ks/igo_widget_simple.h"
#include "KS/SRC/ks/igo_widget_waveindicator.h"

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
