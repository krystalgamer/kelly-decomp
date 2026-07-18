class vm_stack;

class script_library_class {
public:
    class function {
    public:
        enum entry_t { FIRST_ENTRY };
        bool operator()(vm_stack& stack, entry_t entry);
    };
};

bool script_library_class::function::operator()(vm_stack& stack, entry_t entry) {
    return true;
}
