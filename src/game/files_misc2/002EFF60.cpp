struct GlobalBeach { bool unlocked; char trailing[0x370]; };
class GlobalDataClass { char padding[0xACC]; GlobalBeach beaches[32]; public: bool isBeachUnlocked(int index) const; };
bool GlobalDataClass::isBeachUnlocked(int index) const { return beaches[index].unlocked; }
