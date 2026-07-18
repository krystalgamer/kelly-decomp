class FEMenu;
class FEMenuSystem { char padding[0x74]; FEMenu** menus; char padding_to_active[0x4]; int active; public: FEMenu* GetActiveMenu(); };
FEMenu* FEMenuSystem::GetActiveMenu() { return menus[active]; }
