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

class EventRecipient {
public:
    EventRecipient();
    virtual ~EventRecipient();
    virtual void OnEvent(
        EVENT event,
        int param1 = 0,
        int param2 = 0) = 0;
};

#endif
