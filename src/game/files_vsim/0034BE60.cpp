class stringx {};
struct script_instance { char padding[0xC]; stringx function_name; };
class script_callback { char padding[0x18]; script_instance* instance; public: const stringx& get_func_name(); };
const stringx& script_callback::get_func_name() { return instance->function_name; }
