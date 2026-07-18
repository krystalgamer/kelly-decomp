struct GlobalSurfer { bool unlocked; bool movie_unlocked; char trailing[0x70]; };
class GlobalDataClass { char padding[0x134]; GlobalSurfer surfers[16]; public: bool isSurferMovieUnlocked(int index) const; };
bool GlobalDataClass::isSurferMovieUnlocked(int index) const { return surfers[index].movie_unlocked; }
