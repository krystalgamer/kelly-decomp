class FEMenu;
class SaveLoadFrontEnd { char padding_to_active[0x60]; FEMenu* active; char padding_to_dialog[0x3298]; FEMenu* dialogMenu; public: bool DialogActive(); };
bool SaveLoadFrontEnd::DialogActive() { return active == dialogMenu; }
