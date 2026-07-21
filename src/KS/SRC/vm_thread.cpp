// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00356640)
// 0x00356640 set_camera_priority__9vm_threadf
class vm_thread {
    char padding[0x38];
    float camera_priority;
public:
    void set_camera_priority(float value);
};

void vm_thread::set_camera_priority(float value) {
    camera_priority = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00356200)
// 0x00356200 remove_from_local_region__9vm_thread
class vm_thread;

class region {
public:
    void remove_local_thread(vm_thread *thread);
};

__asm__(".equ remove_local_thread__6regionP9vm_thread, 0x002E80E8");

class vm_thread {
    char padding[0x34];
    region *local_region;

public:
    void remove_from_local_region();
};

void vm_thread::remove_from_local_region() {
    region *local = local_region;
    if (!local) {
        return;
    }
    local->remove_local_thread(this);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00354658)
// 0x00354658 set_suspended__9vm_threadb
class vm_thread {
    char padding[8];
    unsigned int flags;

    enum flags_t {
        SUSPENDED = 0x0001,
        SUSPENDABLE = 0x0002
    };

public:
    void set_flag(flags_t flag, bool value) {
        flags = value ? (flags | flag) : (flags & ~flag);
    }
    bool is_flagged(flags_t flag) const { return flags & flag; }
    bool is_suspendable() const { return is_flagged(SUSPENDABLE); }
    void set_suspended(bool value);
};

void vm_thread::set_suspended(bool value)
{
    if (!value || is_suspendable())
        set_flag(SUSPENDED, value);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003561C8)
// 0x003561C8 pop_PC__9vm_thread
struct pc_vector {
    const unsigned short **begin_pointer;
    const unsigned short **end_pointer;

    bool empty() const {
        return begin_pointer == end_pointer;
    }

    const unsigned short *back() const {
        return end_pointer[-1];
    }

    void pop_back() {
        --end_pointer;
    }
};

class vm_thread {
    char padding[0x1C];
    const unsigned short *PC;
    pc_vector PC_stack;

public:
    void pop_PC();
};

void vm_thread::pop_PC()
{
    if (!PC_stack.empty()) {
        PC = PC_stack.back();
        PC_stack.pop_back();
    } else {
        PC = 0;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00354688)
// 0x00354688 set_suspendable__9vm_threadb
class vm_thread {
    char padding[8];
    int flags;
public:
    void set_suspended(bool value);
    void set_suspendable(bool value);
};
__asm__(".equ set_suspended__9vm_threadb, 0x00354658");
void vm_thread::set_suspendable(bool value)
{
    int result;
    if (value)
        result = flags | 2;
    else
        result = flags & -3;
    flags = result;
    if (!value) {
        set_suspended(false);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00356230)
// 0x00356230 remove_from_local_character__9vm_thread
extern "C" void debug_print(const char *format, ...) __asm__("debug_print__FPCce");
extern int once_flag;
extern const char stub_format[];
extern const char stub_name[];
__asm__(".equ debug_print__FPCce, 0x00120790");
__asm__(".equ once_flag, 0x0046DC58");
__asm__(".equ stub_format, 0x00503DD8");
__asm__(".equ stub_name, 0x00503E08");
class vm_thread { public: void remove_from_local_character(); };
void vm_thread::remove_from_local_character()
{
    if (once_flag) {
        debug_print(stub_format, stub_name);
        once_flag = 0;
    }
}
#endif
