class signal { char padding[0x4]; unsigned int flags; public: void refresh(); };
void signal::refresh() { flags &= 0xFFFFFFFCu; }
