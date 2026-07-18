struct GlobalSurfer { bool unlocked; bool movie_unlocked; char trailing[0x70]; };
class GlobalDataClass { char padding[0x134]; GlobalSurfer surfers[16]; public: void unlockSurferMovie(int index); };
void GlobalDataClass::unlockSurferMovie(int index) { surfers[index].movie_unlocked = true; }
