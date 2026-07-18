class color32 { public: unsigned int value; };
class FEMenuEntry { char padding[0x34]; color32 special_color; color32 special_color_high; bool has_special_color; public: void SetSpecialColor(color32 color, color32 high); };
void FEMenuEntry::SetSpecialColor(color32 color, color32 high) { special_color = color; special_color_high = high; has_special_color = true; }
