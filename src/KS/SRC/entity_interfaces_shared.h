#ifndef KELLY_DECOMP_ENTITY_INTERFACES_SHARED_H
#define KELLY_DECOMP_ENTITY_INTERFACES_SHARED_H

#include "KS/SRC/animation_interface.h"
#include "KS/SRC/entity_interface.h"
#include "KS/SRC/physical_interface.h"
#include "KS/SRC/render_interface.h"
#include "KS/SRC/skeleton_interface.h"
#include "KS/SRC/soft_attrib_interface.h"
#include "KS/SRC/vector3d_shared.h"

class script_data_interface : public entity_interface {
    float numbers[8];

public:
    explicit inline script_data_interface(entity *value) : entity_interface(value) {}
    virtual ~script_data_interface();
};

#endif
