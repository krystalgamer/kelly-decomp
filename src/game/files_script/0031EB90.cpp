class vm_stack;

class script_library_class {
public:
    class function {
    public:
        enum entry_t {
            FIRST_ENTRY
        };
    };
};

class slf_wait_frame_t {
public:
    bool operator()(vm_stack& stack, script_library_class::function::entry_t entry);
};

bool slf_wait_frame_t::operator()(vm_stack& stack, script_library_class::function::entry_t entry) {
    return entry != script_library_class::function::FIRST_ENTRY;
}
