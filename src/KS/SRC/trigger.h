// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00314300)
// 0x00314300 __tf15trigger_manager
#include "KS/SRC/rtti_shared.h"
extern "C" void **TriggerManagerBaseRtti() __asm__("__tf9singleton");
extern "C" void *trigger_manager_type[] __asm__("__ti15trigger_manager");
extern "C" const char trigger_manager_name[];
extern "C" void *trigger_manager_base_type[] __asm__("__ti9singleton");
__asm__(".equ __tf9singleton, 0x00144398");
__asm__(".equ __ti15trigger_manager, 0x005A4230");
__asm__(".equ trigger_manager_name, 0x00508BD8");
__asm__(".equ __ti9singleton, 0x00511FF8");
extern "C" void **TriggerManagerRtti() __asm__("__tf15trigger_manager");
void **TriggerManagerRtti()
{
    if (!trigger_manager_type[0]) {
        TriggerManagerBaseRtti();
        __rtti_si(trigger_manager_type, trigger_manager_name, trigger_manager_base_type);
    }
    return trigger_manager_type;
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_002B8D08)
// 0x002B8D08 read__7triggerR10chunk_file
class chunk_file;

class trigger {
public:
    void read(chunk_file& file);
};

void trigger::read(chunk_file& file) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8D10)
// 0x002B8D10 triggered__7triggerP6entity
class entity;

class trigger {
public:
    bool triggered(entity* value);
};

bool trigger::triggered(entity* value) {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8D18)
// 0x002B8D18 update_region__7trigger
class trigger {
public:
    void update_region();
};

void trigger::update_region() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8D20)
// 0x002B8D20 is_a_trigger__C7trigger
class trigger {
public:
    bool is_a_trigger() const;
};

bool trigger::is_a_trigger() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8D28)
// 0x002B8D28 get_abs_position__C7trigger
class vector3d {
    float x;
    float y;
    float z;
};

extern const vector3d trigger_zero_vector;
__asm__(".equ trigger_zero_vector, 0x00570198");

class trigger {
public:
    const vector3d& get_abs_position() const;
};

const vector3d& trigger::get_abs_position() const {
    return trigger_zero_vector;
}
#endif
#if defined(KELLY_DECOMP_FUNCTION_002B8CB8)
#include "KS/SRC/rtti_shared.h"
#include "KS/SRC/trigger_shared.h"

extern "C" void **trigger_base_rtti() __asm__("__tf9signaller");
extern "C" void *trigger_type[] __asm__("__ti7trigger");
extern "C" const char trigger_name[];
extern "C" void *trigger_base_type[] __asm__("__ti9signaller");

__asm__(".equ __tf9signaller, 0x0035FBA8");
__asm__(".equ __ti7trigger, 0x005A3E20");
__asm__(".equ trigger_name, 0x004FE568");
__asm__(".equ __ti9signaller, 0x00512028");

// 0x002B8CB8 __tf7trigger
extern "C" void **trigger_rtti() __asm__("__tf7trigger");
void **trigger_rtti()
{
    if (!trigger_type[0]) {
        trigger_base_rtti();
        __rtti_si(trigger_type, trigger_name, trigger_base_type);
    }
    return trigger_type;
}
#endif
