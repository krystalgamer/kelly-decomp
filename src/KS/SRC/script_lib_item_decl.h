#ifndef SCRIPT_LIB_ITEM_DECL_H
#define SCRIPT_LIB_ITEM_DECL_H

#pragma interface

#include "KS/SRC/item.h"
#include "KS/SRC/script_library_class.h"

class slf_item_set_count_t :
    public script_library_class::function {
public:
    struct parms_t {
        item *me;
        vm_num_t count;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

#endif
