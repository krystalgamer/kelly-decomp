#ifndef KELLY_DECOMP_SPECIALMETER_H
#define KELLY_DECOMP_SPECIALMETER_H

#include "KS/SRC/ks/eventmanager.h"

class SpecialMeter : public EventRecipient {
private:
    int playerIdx;
    float fillage;
    bool isEnabled;

public:
    float GetFillage() const { return fillage; }
    bool CanRegionLink() const;
};

#endif
