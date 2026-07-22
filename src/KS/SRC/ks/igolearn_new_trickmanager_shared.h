#ifndef KELLY_DECOMP_IGOLEARN_NEW_TRICKMANAGER_SHARED_H
#define KELLY_DECOMP_IGOLEARN_NEW_TRICKMANAGER_SHARED_H

class EventRecipient {
public:
    virtual void OnEvent(int event, int param1 = 0, int param2 = 0);
};

class IGOLearnNewTrickManager : public EventRecipient {
    void *buttonTexture[8];
    int numIconResources;
    void *iconResources;
    void *current_icon;
    bool icon_active;
    int iconCounter;
    int prev_iconCounter;
    int current_trickIdx;
    float addIconDelay;
    float addIconTimer;

public:
    void Reset();
    void PopFront(bool complete = false);
};

#endif
