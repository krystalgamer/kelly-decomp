class item { char padding[0x218]; int count; public: void dec_count(); };
void item::dec_count() { --count; }
