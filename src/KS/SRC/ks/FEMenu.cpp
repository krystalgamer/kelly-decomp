// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001561D8)
// 0x001561D8 SetSpecialColor__11FEMenuEntryG7color32T1
class color32 { public: unsigned int value; };
class FEMenuEntry { char padding[0x34]; color32 special_color; color32 special_color_high; bool has_special_color; public: void SetSpecialColor(color32 color, color32 high); };
void FEMenuEntry::SetSpecialColor(color32 color, color32 high) { special_color = color; special_color_high = high; has_special_color = true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001575E8)
// 0x001575E8 AddSubmenu__6FEMenuP6FEMenu
class FEMenu { char padding_to_submenus[0x5C]; FEMenu* submenus; char padding_to_parent[0x4]; FEMenu* parent; char padding_to_next[0x8]; FEMenu* next_sub; public: void AddSubmenu(FEMenu* sub); };
void FEMenu::AddSubmenu(FEMenu* sub) { sub->next_sub = submenus; submenus = sub; sub->parent = this; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001577B0)
// 0x001577B0 OnSelect__6FEMenui
class FEMenu {
public:
    void OnSelect(int controller);
};

void FEMenu::OnSelect(int controller) {
}
#endif
