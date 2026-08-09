#ifndef BONE_H
#define BONE_H

#include "KS/SRC/link_interface.h"
#include "KS/SRC/po.h"
#include "KS/SRC/signals.h"

class sector;

class bone : public signaller {
    friend class skeleton_interface;

protected:
    po my_rel_po;
    po *my_abs_po;
    po *my_handed_abs_po;
    int bone_id;
    sector *my_sector;
    int flip_axis;
    bool is_part_of_skeleton;
    link_interface *my_link_interface;

public:
    virtual ~bone();
    virtual int get_bone_idx();
    virtual void po_changed();
    link_interface *create_link_ifc();
    inline const po &get_rel_po() const {
        return my_rel_po;
    }
    inline void set_part_of_skeleton(bool value) {
        is_part_of_skeleton = value;
    }
    void destroy_link_ifc();

    inline bool has_link_ifc() const {
        return my_link_interface != 0;
    }
    inline link_interface *link_ifc() const {
        return my_link_interface;
    }
    inline bool has_parent() const {
        return has_link_ifc() && link_ifc()->get_parent();
    }
};

#endif
