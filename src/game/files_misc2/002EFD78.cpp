struct GlobalSurfer { bool unlocked; char trailing[0x74]; };
class GlobalDataClass { char padding[0x134]; GlobalSurfer surfers[16]; public: bool isSurferUnlocked(int index) const; };
bool GlobalDataClass::isSurferUnlocked(int index) const { return surfers[index].unlocked; }
