#ifndef KELLY_DECOMP_SPECIALMETER_H
#define KELLY_DECOMP_SPECIALMETER_H

class EventRecipient {
public:
    virtual ~EventRecipient();
};

class SpecialMeter : public EventRecipient {
private:
    int playerIdx;
    float fillage;

public:
    float GetFillage() const { return fillage; }
};

#endif
