class widget { char padding[0x14]; int flags; public: void obey_parent_showing(); };
void widget::obey_parent_showing() { flags &= -9; }
