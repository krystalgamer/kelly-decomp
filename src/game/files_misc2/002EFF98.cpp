struct GlobalLocation { char padding[0x8]; bool board_unlocked; };
class GlobalDataClass { GlobalLocation locations[32]; public: bool isLocationBoardUnlocked(int index) const; };
bool GlobalDataClass::isLocationBoardUnlocked(int index) const { return locations[index].board_unlocked; }
