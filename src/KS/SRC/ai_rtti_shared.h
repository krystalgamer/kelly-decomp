#ifndef KELLY_DECOMP_AI_RTTI_SHARED_H
#define KELLY_DECOMP_AI_RTTI_SHARED_H

#include "KS/SRC/entity_interface_shared.h"

class input_device {
public:
    virtual ~input_device();
};

class AISurferController : public input_device {
public:
    virtual ~AISurferController();
};

class ai_interface : public entity_interface {
public:
    virtual ~ai_interface();
};

#endif
