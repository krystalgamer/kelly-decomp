#ifndef _AI_INTERFACE_H_
#define _AI_INTERFACE_H_

#pragma interface

#include "KS/SRC/entity_interface.h"

class ai_interface : public entity_interface {
public:
    virtual ~ai_interface();
    inline entity *get_my_entity() const { return my_entity; }
    void render(char level);
    bool get_ifc_str(
        const pstring &attribute,
        stringx &value);
    bool set_ifc_str(
        const pstring &attribute,
        const stringx &value);
};

#endif
