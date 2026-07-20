// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00259840)
// 0x00259840 TakePhoto__FfPPv
bool TakePhoto(float dt, void** data) {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00259788)
// 0x00259788 _$_11player_info
extern "C" void builtin_delete(void *pointer) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");
extern "C" void PlayerInfoDtor(void *self, int deleting) __asm__("_$_11player_info");
void PlayerInfoDtor(void *self, int deleting) { if (deleting & 1) builtin_delete(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002597B0)
// 0x002597B0 AddAccomplishment__11player_infoP6entity
class entity;
class player_info { entity *accomplishments[20]; int numAccomplishments; public: void AddAccomplishment(entity *ent); };
void player_info::AddAccomplishment(entity *ent) { if (numAccomplishments < 20) accomplishments[numAccomplishments++] = ent; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00259810)
// 0x00259810 ClearAccomplishments__11player_info
class entity;
class player_info { entity *accomplishments[20]; int numAccomplishments; public: void ClearAccomplishments(); };
void player_info::ClearAccomplishments() { int index = 19; entity **entry = &accomplishments[19]; loop: *entry = 0; --index; KELLY_DECOMP_COMPILER_BARRIER(); KELLY_DECOMP_COMPILER_BARRIER(); if (index >= 0) { --entry; goto loop; } --entry; numAccomplishments = 0; }
#endif
