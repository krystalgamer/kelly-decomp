class widget { char padding[0x14]; unsigned int flags; public: void ignore_parent(); };
void widget::ignore_parent() { flags |= 4; }
