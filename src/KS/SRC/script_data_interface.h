#ifndef SCRIPT_DATA_INTERFACE_H
#define SCRIPT_DATA_INTERFACE_H

#include "KS/SRC/entity_interface.h"
#include "KS/SRC/stringx.h"

class script_data_interface : public entity_interface {
    float numbers[8];
    stringx strings[4];

public:
    explicit inline script_data_interface(entity *value)
        : entity_interface(value) {}
    virtual ~script_data_interface();
};

#endif
