#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H

enum EVENT {
    EVT_SURFER_LAND,
    EVT_SURFER_WIPEOUT,
    EVT_SURFER_DUCK_DIVE,
    EVT_TRICK_REGION_CHANGE,
    EVT_TRICK_FACE_BEGIN,
    EVT_TRICK_FACE_END,
    EVT_SCORING_SERIES_END,
    EVT_SCORING_CHAIN_END
};

const int MAX_EVENT_RECIPIENTS = 50;

class EventRecipient {
    friend class EventManager;

public:
    EventRecipient();
    virtual ~EventRecipient();
    virtual void OnEvent(
        EVENT event,
        int param1 = 0,
        int param2 = 0) = 0;
};

class EventManager {
protected:
    int numRecipients;
    EventRecipient *recipients[MAX_EVENT_RECIPIENTS];

public:
    EventManager();
    ~EventManager();
    void RegisterRecipient(EventRecipient *recipient);
    void UnregisterRecipient(EventRecipient *recipient);
    void DispatchEvent(
        EVENT event,
        int param1 = 0,
        int param2 = 0);
};

extern EventManager g_eventManager;

#endif
