#include "KS/SRC/script_library_class.h"

class slf_wait_frame_t {
public:
    bool operator()(
        vm_stack &stack,
        script_library_class::function::entry_t entry);
};

class slf_letterbox_on_t {
public:
    bool operator()(
        vm_stack &stack,
        script_library_class::function::entry_t entry);
};

class slf_letterbox_off_t {
public:
    bool operator()(
        vm_stack &stack,
        script_library_class::function::entry_t entry);
};

class slf_fade_out_t {
public:
    bool operator()(
        vm_stack &stack,
        script_library_class::function::entry_t entry);
};

class slf_fade_in_t {
public:
    bool operator()(
        vm_stack &stack,
        script_library_class::function::entry_t entry);
};

// 0x0031EB90 __cl__16slf_wait_frame_tR8vm_stackQ320script_library_class8function7entry_t
bool slf_wait_frame_t::operator()(
    vm_stack &stack,
    script_library_class::function::entry_t entry)
{
    return entry != script_library_class::function::FIRST_ENTRY;
}

// 0x003201B0 __cl__18slf_letterbox_on_tR8vm_stackQ320script_library_class8function7entry_t
bool slf_letterbox_on_t::operator()(
    vm_stack &stack,
    script_library_class::function::entry_t entry)
{
    return true;
}

// 0x00320228 __cl__19slf_letterbox_off_tR8vm_stackQ320script_library_class8function7entry_t
bool slf_letterbox_off_t::operator()(
    vm_stack &stack,
    script_library_class::function::entry_t entry)
{
    return true;
}

// 0x00320328 __cl__14slf_fade_out_tR8vm_stackQ320script_library_class8function7entry_t
bool slf_fade_out_t::operator()(
    vm_stack &stack,
    script_library_class::function::entry_t entry)
{
    return true;
}

// 0x003203A0 __cl__13slf_fade_in_tR8vm_stackQ320script_library_class8function7entry_t
bool slf_fade_in_t::operator()(
    vm_stack &stack,
    script_library_class::function::entry_t entry)
{
    return true;
}
