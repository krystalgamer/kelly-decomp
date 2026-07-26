#ifndef KELLY_DECOMP_COLOR_EVENT_SHARED_H
#define KELLY_DECOMP_COLOR_EVENT_SHARED_H

#pragma interface

struct event_color {
    float red;
    float green;
    float blue;
    float alpha;
};

class element {
    char state[84];

public:
    event_color colors[4];
};

class event {
protected:
    int type;
    element *owner;
    float wait_time;
    float duration;
    float elapsed;

public:
    virtual void do_event(const float &lerp) = 0;
};

class color_event : public event {
    event_color target;

public:
    void do_event(const float &lerp);
};

#endif
