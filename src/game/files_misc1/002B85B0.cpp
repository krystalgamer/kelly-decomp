class item { char padding[0x218]; int count; public: void inc_count(); };
void item::inc_count() { ++count; }
