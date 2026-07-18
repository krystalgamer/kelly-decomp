struct GlobalSurfer { bool unlocked; char trailing[0x74]; };
class GlobalDataClass { char padding[0x134]; GlobalSurfer surfers[16]; public: void unlockSurfer(int index); };
void GlobalDataClass::unlockSurfer(int index) { surfers[index].unlocked = true; }
