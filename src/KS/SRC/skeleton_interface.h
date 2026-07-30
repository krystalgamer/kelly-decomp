#ifndef SKELETON_INTERFACE_H
#define SKELETON_INTERFACE_H

#include "KS/SRC/entity_interface.h"

class po;
class bone;

class skeleton_interface : public entity_interface {
    po *abs_po;
    po *handed_abs_po;
    int po_count;

public:
    explicit inline skeleton_interface(entity *value)
        : entity_interface(value),
          abs_po(0),
          handed_abs_po(0),
          po_count(0) {}
    virtual ~skeleton_interface();
    void connect_bone_abs_po(const int &bone_index, bone *value);
};

#endif
