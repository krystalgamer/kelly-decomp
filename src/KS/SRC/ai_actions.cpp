// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00105E40)
// 0x00105E40 going_out_of_service__9ai_action
class ai_action { char padding[0x4]; int flags; public: void going_out_of_service(); };
void ai_action::going_out_of_service() { flags &= -2; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00105E58)
// 0x00105E58 going_into_service__9ai_action
class ai_action {
    char padding[0x4];
    unsigned int flags;
public:
    void going_into_service();
};
void ai_action::going_into_service() { flags |= 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00105E68)
// 0x00105E68 get_ai_interface__C9ai_action
class ai_interface {
    ai_interface* self;
public:
    ai_interface* get_ai_interface() {
        return self;
    }
};

class ai_action {
    ai_interface* owner;
public:
    ai_interface* get_ai_interface() const;
};

ai_interface* ai_action::get_ai_interface() const {
    return owner->get_ai_interface();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00105E78)
// 0x00105E78 get_my_entity__C9ai_action
class entity;
// Keep the owner call out of line to preserve the released wrapper.
class ai_goal { public: entity* get_my_entity() const; };
__asm__(".equ get_my_entity__C7ai_goal, 0x00106608");
class ai_action { ai_goal* owner; public: entity* get_my_entity() const; };
entity* ai_action::get_my_entity() const { return owner->get_my_entity(); }
#endif
