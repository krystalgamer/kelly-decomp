#ifndef BEACH_FRONT_END_H
#define BEACH_FRONT_END_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"

class BeachFrontEnd : public FEMultiMenu {
public:
    FEMenuSystem *sys;

private:
    char data_to_bio_mode[
        0x924 - sizeof(FEMultiMenu) - sizeof(FEMenuSystem *)];
    int in_bio_mode;
    char data_to_bio_buttons[0xEC4 - 0x928];
    int bio_up_pressed;
    int bio_down_pressed;
    char data_to_sliding_in[0xF18 - 0xECC];
    bool sliding_in;
    char data_to_exiting_without_select[0xF20 - 0xF1C];
    bool exitingWithoutSelect;

public:
    bool Realistic(bool press_build_only);
    void ReturnToFE();
    void OnButtonRelease(int controller, int button);
    virtual void ReloadMap();
    virtual void DrawMap(float loading_progress);
    virtual void OnLevelLoaded();
    virtual void OnLevelEnding();
    void OnUnactivate();
};

#endif
