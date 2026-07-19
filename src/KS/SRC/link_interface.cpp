// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00122890)
// 0x00122890 remove_child__14link_interfaceP4bone
class link_interface { public: void clear_parent(); void remove_child(class bone* child); };
__asm__(".equ clear_parent__14link_interface, 0x001228B0");
class bone { char padding[0x68]; public: link_interface* link; };
void link_interface::remove_child(bone* child) { child->link->clear_parent(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
