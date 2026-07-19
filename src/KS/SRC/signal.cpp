// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0034BE60)
// 0x0034BE60 get_func_name__15script_callback
class stringx {};
struct script_instance { char padding[0xC]; stringx function_name; };
class script_callback { char padding[0x18]; script_instance* instance; public: const stringx& get_func_name(); };
const stringx& script_callback::get_func_name() { return instance->function_name; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034C530)
// 0x0034C530 refresh__6signal
class signal { char padding[0x4]; unsigned int flags; public: void refresh(); };
void signal::refresh() { flags &= 0xFFFFFFFCu; }
#endif
