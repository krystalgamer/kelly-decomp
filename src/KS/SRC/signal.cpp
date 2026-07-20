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

#if defined(KELLY_DECOMP_FUNCTION_0034C510)
// 0x0034C510 raise_input__6signalP6signalP9signaller
class signaller;
class signal { public: void raise(); void raise_input(signal *input, signaller *source); };
__asm__(".equ raise__6signal, 0x0034C428");
void signal::raise_input(signal *input, signaller *source) { raise(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034CC70)
// 0x0034CC70 __9signaller
class signaller { unsigned int flags; void *signals; public: signaller(); virtual ~signaller(); };
__asm__(".equ _vt$9signaller, 0x005050B0");
signaller::signaller() : flags(0), signals(0) {}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034CC48)
// 0x0034CC48 refresh__12gated_signal
extern "C" void SignalRefresh(void *self) __asm__("refresh__6signal");
__asm__(".equ refresh__6signal, 0x0034C530");
class gated_signal { char padding[0x1e]; unsigned short flags; public: void refresh(); };
void gated_signal::refresh() { SignalRefresh(this); flags = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034CC18)
// 0x0034CC18 match__C12gated_signalQ212gated_signal6type_tPC6signal
class signal;

class gated_signal {
public:
    enum type_t {
        AND,
        OR
    };

private:
    char padding[0x1c];
    unsigned short type;
    unsigned short flags;
    signal *input_a;
    signal *input_b;

public:
    bool match(type_t value, const signal *input) const;
};

bool gated_signal::match(type_t value, const signal *input) const {
    return value == type && (input == input_b || input == input_a);
}
#endif
