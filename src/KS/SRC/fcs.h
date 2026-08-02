#ifndef FCS_H
#define FCS_H

#pragma interface

#include "KS/SRC/mobject.h"

class force_control_system : public motion_object {
protected:
    bool locked;
    bool reset_locked;

public:
    force_control_system();
    virtual ~force_control_system();
    virtual void frame_advance(float time_inc);
    virtual void reset_targets();
};

#endif
