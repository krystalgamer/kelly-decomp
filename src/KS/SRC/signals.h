// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0035F9A8)
// 0x0035F9A8 is_code_callback__15signal_callback
class signal_callback {
public:
    bool is_code_callback();
};

bool signal_callback::is_code_callback() {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035F9B0)
// 0x0035F9B0 is_script_callback__15signal_callback
class signal_callback {
public:
    bool is_script_callback();
};

bool signal_callback::is_script_callback() {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035FA30)
// 0x0035FA30 is_script_callback__15script_callback
class script_callback {
public:
    bool is_script_callback();
};

bool script_callback::is_script_callback() {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035FAB0)
// 0x0035FAB0 is_code_callback__13code_callback
class code_callback {
public:
    bool is_code_callback();
};

bool code_callback::is_code_callback() {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035FBF0)
// 0x0035FBF0 is_an_entity__C9signaller
class signaller {
public:
    bool is_an_entity() const;
};

bool signaller::is_an_entity() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035FBF8)
// 0x0035FBF8 is_a_trigger__C9signaller
class signaller {
public:
    bool is_a_trigger() const;
};

bool signaller::is_a_trigger() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0035FD08)
// 0x0035FD08 get_signal_name__C9signallerUs
extern const char signaller_signal_name[];
__asm__(".equ signaller_signal_name, 0x00500D28");
class signaller { public: const char* get_signal_name(unsigned short index) const; };
const char* signaller::get_signal_name(unsigned short index) const { return signaller_signal_name; }
#endif
