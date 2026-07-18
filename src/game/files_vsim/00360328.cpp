class widget { char padding[0x14]; unsigned int flags; public: void ignore_parent_showing(); };
void widget::ignore_parent_showing() { flags |= 8; }
