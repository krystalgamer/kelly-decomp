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
