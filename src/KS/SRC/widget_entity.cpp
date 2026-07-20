// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002BA5B0)
// 0x002BA5B0 update_pos__13entity_widget
class widget { public: void update_pos(); };
__asm__(".equ update_pos__6widget, 0x0033E650");
class entity_widget : public widget { public: void update_pos(); void update_entity_po(); };
__asm__(".equ update_entity_po__13entity_widget, 0x002BAA98");
void entity_widget::update_pos() { widget::update_pos(); update_entity_po(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002BA5E0)
// 0x002BA5E0 update_scale__13entity_widget
class widget { public: void update_scale(); };
__asm__(".equ update_scale__6widget, 0x0033E710");
class entity_widget : public widget { public: void update_scale(); void update_entity_po(); };
__asm__(".equ update_entity_po__13entity_widget, 0x002BAA98");
void entity_widget::update_scale() { widget::update_scale(); update_entity_po(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
