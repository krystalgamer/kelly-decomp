#ifndef _AI_INTERFACE_H_
#define _AI_INTERFACE_H_

#pragma interface

#include "KS/SRC/entity_interface.h"

class ai_interface : public entity_interface {
    char data_to_disable_count[
        0x30 - sizeof(entity_interface)];
    int disable_count;

public:
    static void push_disable_all(bool value);
    static void pop_disable_all(bool value);
    virtual ~ai_interface();
    inline entity *get_my_entity() const { return my_entity; }
    void render(char level);
    bool get_ifc_str(
        const pstring &attribute,
        stringx &value);
    bool set_ifc_str(
        const pstring &attribute,
        const stringx &value);
    void pop_disable();
};

#endif
