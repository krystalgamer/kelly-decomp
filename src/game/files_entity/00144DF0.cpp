class entity { char padding[0x78]; int flags; public: bool is_motion_trailed() const; };
bool entity::is_motion_trailed() const { return (flags >> 11) & 1; }
