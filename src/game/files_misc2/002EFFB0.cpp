struct GlobalLocation { char padding[0x8]; bool board_unlocked; };
class GlobalDataClass { GlobalLocation locations[32]; public: void unlockLocationBoard(int index); };
void GlobalDataClass::unlockLocationBoard(int index) { locations[index].board_unlocked = true; }
