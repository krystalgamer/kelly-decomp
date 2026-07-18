struct vm_stack { char padding[0x8]; char* stack_ptr; };
class script_library_class { public: class function { public: enum entry_t { FIRST_ENTRY }; }; };
class slf_post_message_t { public: bool operator()(vm_stack&, script_library_class::function::entry_t); };
bool slf_post_message_t::operator()(vm_stack& stack, script_library_class::function::entry_t entry) { stack.stack_ptr -= 8; return true; }
