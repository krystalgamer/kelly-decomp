struct GlobalBeach { bool unlocked; char trailing[0x370]; };
class GlobalDataClass { char padding[0xACC]; GlobalBeach beaches[32]; public: void unlockBeach(int index); };
void GlobalDataClass::unlockBeach(int index) { beaches[index].unlocked = true; }
