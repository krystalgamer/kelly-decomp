#ifndef KELLY_DECOMP_BONE_SHARED_H
#define KELLY_DECOMP_BONE_SHARED_H

#include "KS/SRC/link_interface_shared.h"
#include "KS/SRC/po_shared.h"
#include "KS/SRC/signals_shared.h"

class sector;

class bone : public signaller {
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
