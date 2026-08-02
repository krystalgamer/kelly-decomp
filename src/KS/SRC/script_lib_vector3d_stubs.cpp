#include "KS/SRC/script_library_class.h"

class slf_vector3d_construct_t {
public:
    bool operator()(
        vm_stack &stack,
        script_library_class::function::entry_t entry);
};

// 0x00329148 __cl__24slf_vector3d_construct_tR8vm_stackQ320script_library_class8function7entry_t
bool slf_vector3d_construct_t::operator()(
    vm_stack &stack,
    script_library_class::function::entry_t entry)
{
    return true;
}
