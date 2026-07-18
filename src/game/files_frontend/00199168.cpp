struct FEManagerState { char padding[0x1567C]; bool fe_done_loading; };
extern FEManagerState frontendmanager;
__asm__(".equ frontendmanager, 0x003E7728");
bool FEDoneLoading() { return frontendmanager.fe_done_loading; }
