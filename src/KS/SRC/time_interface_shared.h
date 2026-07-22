#ifndef KELLY_DECOMP_TIME_INTERFACE_SHARED_H
#define KELLY_DECOMP_TIME_INTERFACE_SHARED_H

#include "KS/SRC/entity_interface_shared.h"

class time_interface : public entity_interface {
    float time_dilation;
    int time_mode;

public:
    explicit time_interface(entity *value) : entity_interface(value) {}
    virtual ~time_interface();
};

#endif
