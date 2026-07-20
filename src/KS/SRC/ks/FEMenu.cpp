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

#if defined(KELLY_DECOMP_FUNCTION_00157B10)
// 0x00157B10 Draw__8FrontEnd
class PanelFile { public: void Draw(int layer); };
__asm__(".equ Draw__9PanelFilei, 0x001530B8");
class FrontEnd { char padding[0x80]; PanelFile panel; public: void Draw(); };
void FrontEnd::Draw() { panel.Draw(0); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00156258)
// 0x00156258 AddEntity__11FEMenuEntryP6entityG7color32T2
struct color32 { unsigned int value; };
struct entity { char padding[0x1d8]; color32 render_color; };
class FEMenuEntry { char padding0[0x10]; void *text; char padding1[4]; entity *attached_entity; color32 highlight_color; color32 normal_color; public: void AddEntity(entity *value, color32 highlighted, color32 normal); };
void FEMenuEntry::AddEntity(entity *value, color32 highlighted, color32 normal) { attached_entity = value; highlight_color = highlighted; normal_color = normal; if (text) value->render_color = highlighted; else value->render_color = normal; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00157B78)
// 0x00157B78 Load__20FEGraphicalMenuEntryP9PanelQuadT1
class PanelQuad { char padding[0x110]; bool added; public: void AddedToMenu() { added = true; } };
class FEGraphicalMenuEntry { char padding[0x64]; PanelQuad *pq; PanelQuad *pq_high; public: void Load(PanelQuad *normal, PanelQuad *highlighted); };
void FEGraphicalMenuEntry::Load(PanelQuad *normal, PanelQuad *highlighted) { pq = normal; pq_high = highlighted; pq->AddedToMenu(); if (pq_high) pq_high->AddedToMenu(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00157BA0)
// 0x00157BA0 Load__20FEGraphicalMenuEntryP9PanelQuadP13PanelAnimFileP16PanelAnimManagerT1
class PanelQuad { char padding[0x110]; bool added; public: void AddedToMenu() { added = true; } };
class PanelAnimFile;
class PanelAnimManager;
class FEGraphicalMenuEntry { char padding[0x64]; PanelQuad *pq; PanelQuad *pq_high; PanelAnimFile *highlight_paf; PanelAnimManager *pam; public: void Load(PanelQuad *normal, PanelAnimFile *animation, PanelAnimManager *manager, PanelQuad *highlighted); };
void FEGraphicalMenuEntry::Load(PanelQuad *normal, PanelAnimFile *animation, PanelAnimManager *manager, PanelQuad *highlighted) { pq = normal; pq->AddedToMenu(); pq_high = highlighted; if (pq_high) pq_high->AddedToMenu(); highlight_paf = animation; pam = manager; }
#endif
