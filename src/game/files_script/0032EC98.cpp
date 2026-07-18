class vm_stack;
class script_library_class { public: class function { public: enum entry_t { FIRST_ENTRY }; }; };
class slf_show_clues_while_letterboxed_t { public: bool operator()(vm_stack&, script_library_class::function::entry_t); };
bool slf_show_clues_while_letterboxed_t::operator()(vm_stack& stack, script_library_class::function::entry_t entry) { return true; }
