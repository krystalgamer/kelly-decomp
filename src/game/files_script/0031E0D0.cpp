struct vm_stack { char padding[0x8]; char* stack_ptr; };
class script_library_class { public: class function { public: enum entry_t { FIRST_ENTRY }; }; };
class slf_localize_thread_to_character_t { public: bool operator()(vm_stack&, script_library_class::function::entry_t); };
bool slf_localize_thread_to_character_t::operator()(vm_stack& stack, script_library_class::function::entry_t entry) { stack.stack_ptr -= 1; return true; }
