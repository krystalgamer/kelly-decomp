class entity;
// Keep the owner call out of line to preserve the released wrapper.
class ai_goal { public: entity* get_my_entity() const; };
__asm__(".equ get_my_entity__C7ai_goal, 0x00106608");
class ai_action { ai_goal* owner; public: entity* get_my_entity() const; };
entity* ai_action::get_my_entity() const { return owner->get_my_entity(); }
