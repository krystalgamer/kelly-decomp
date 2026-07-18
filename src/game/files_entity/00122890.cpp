class link_interface { public: void clear_parent(); void remove_child(class bone* child); };
__asm__(".equ clear_parent__14link_interface, 0x001228B0");
class bone { char padding[0x68]; public: link_interface* link; };
void link_interface::remove_child(bone* child) { child->link->clear_parent(); __asm__ volatile(""); }
