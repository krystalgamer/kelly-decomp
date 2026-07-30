#ifndef TIME_INTERFACE_H
#define TIME_INTERFACE_H

#include "KS/SRC/entity_interface.h"

class time_interface : public entity_interface {
    float time_dilation;
    int time_mode;

public:
    explicit inline time_interface(entity *value)
        : entity_interface(value), time_dilation(1.0f), time_mode(0) {}
    virtual ~time_interface();
};

#endif
