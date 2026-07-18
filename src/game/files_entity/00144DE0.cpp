class entity { char padding[0x78]; int flags; public: bool is_motion_blurred() const; };
bool entity::is_motion_blurred() const { return (flags >> 10) & 1; }
