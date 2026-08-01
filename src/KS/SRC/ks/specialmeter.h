#ifndef KELLY_DECOMP_SPECIALMETER_H
#define KELLY_DECOMP_SPECIALMETER_H

#include "KS/SRC/ks/eventmanager.h"

class SpecialMeter : public EventRecipient {
private:
    int playerIdx;
    float fillage;
    bool isEnabled;
    float specialTime;
    int trickRegion;
    bool isDoingTrick;
    int faceLink;
    float faceLinkTimer;
    float current_special_time;
    int numPerfects;

public:
    void Initialize(int player_index);
    void SetUpSpecialTimer();
    float GetFillage() const { return fillage; }
    bool CanRegionLink() const;
};

#endif
