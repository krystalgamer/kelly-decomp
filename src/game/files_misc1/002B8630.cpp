class item { char padding[0x20C]; int usage_type; public: bool is_armor() const; };
bool item::is_armor() const { return usage_type == 8; }
