class item { char padding[0x20C]; int usage_type; public: bool is_health() const; };
bool item::is_health() const { return usage_type == 7; }
