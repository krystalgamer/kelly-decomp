#ifndef MODE_HEADTOHEAD_H
#define MODE_HEADTOHEAD_H

class kellyslater_controller;

class HeadToHeadMode {
public:
    HeadToHeadMode();
    ~HeadToHeadMode();
    void Initialize(kellyslater_controller **controllers);
    void Reset();
    void Update(float time_inc);
};

#endif
