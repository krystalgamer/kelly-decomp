class entity { char padding[0x78]; int flags; public: bool is_stationary() const; };
bool entity::is_stationary() const { return !((flags >> 2) & 1); }
