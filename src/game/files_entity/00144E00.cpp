class entity { char padding[0x78]; int flags; public: bool get_externally_controlled() const; };
bool entity::get_externally_controlled() const { return (flags >> 20) & 1; }
