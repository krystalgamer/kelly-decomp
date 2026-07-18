class widget { char padding[0x14]; int flags; public: void obey_parent(); };
void widget::obey_parent() { flags &= -5; }
