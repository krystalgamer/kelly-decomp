// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001D3510)
// 0x001D3510 Select__14EnterCheatMenu
struct cheat_vtable { char padding[0x128]; short adjustment; short padding2; void (*select)(void *self, void *entry); };
class EnterCheatMenu { char padding0[0x74]; cheat_vtable *vtable; char padding1[0xfc]; void *selected; public: void Select(); };
void EnterCheatMenu::Select() { cheat_vtable *table = vtable; table->select((char *)this + table->adjustment, selected); }
#endif
