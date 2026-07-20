// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0025A7C0)
// 0x0025A7C0 GetSurferIdx__6Career
class Career {
    char padding[0x14];
    int my_id;
public:
    int GetSurferIdx();
};

int Career::GetSurferIdx() {
    return my_id;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025AED0)
// 0x0025AED0 OnGoalReDone__6Careerii
class Career { char padding[0x80]; bool goal_passed[8]; public: void OnGoalReDone(int level, int goal); };
void Career::OnGoalReDone(int level, int goal) { goal_passed[goal] = true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025AF20)
// 0x0025AF20 UnlockMovie__Q26Career8Location
class Career {
public:
    class Location {
        char padding[0x4];
        bool movie_unlocked;
    public:
        void UnlockMovie();
    };
};

void Career::Location::UnlockMovie() {
    movie_unlocked = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025AF30)
// 0x0025AF30 SetMovieShown__Q26Career8Location
class Career {
public:
    class Location {
        char padding[0x8];
        bool movie_shown;
    public:
        void SetMovieShown();
    };
};

void Career::Location::SetMovieShown() {
    movie_shown = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025B918)
// 0x0025B918 Reset__Q26Career8Location
class Career { public: class Location { char padding[0x4]; bool movie_unlocked; bool movie_shown; bool board_unlocked; public: void Reset(); }; };
void Career::Location::Reset() { movie_unlocked = false; movie_shown = false; board_unlocked = false; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025C418)
// 0x0025C418 IsGoalDone__CQ26Career5Leveli
class Career { public: class Level { char padding[0x10]; bool goals[8]; public: bool IsGoalDone(int index) const; }; };
bool Career::Level::IsGoalDone(int index) const { return goals[index]; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025C4A0)
// 0x0025C4A0 Reset__Q26Career5Beach
class Career {
public:
    class Beach {
        char padding[0x4];
        bool unlocked;
        bool shown;
    public:
        void Reset();
    };
};

void Career::Beach::Reset() {
    unlocked = false;
    shown = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025C5E8)
// 0x0025C5E8 IsBoardUnlocked__C6Careeri
class Career { char padding[0x94]; bool boards[16]; public: bool IsBoardUnlocked(int index) const; };
bool Career::IsBoardUnlocked(int index) const { return boards[index]; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025B8F0)
// 0x0025B8F0 __Q26Career8Location
class Career { public: class Location { public: Location(); void Reset(); }; };
__asm__(".equ Reset__Q26Career8Location, 0x0025B918");
Career::Location::Location() { Reset(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025C318)
// 0x0025C318 __Q26Career5Level
class Career { public: class Level { public: Level(); void Reset(); }; };
__asm__(".equ Reset__Q26Career5Level, 0x0025C340");
Career::Level::Level() { Reset(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025C478)
// 0x0025C478 __Q26Career5Beach
class Career { public: class Beach { public: Beach(); void Reset(); }; };
__asm__(".equ Reset__Q26Career5Beach, 0x0025C4A0");
Career::Beach::Beach() { Reset(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025B928)
// 0x0025B928 CheckShowMovie__Q26Career8Location
class Career { public: class Location { char padding[8]; int movie_shown; public: bool CheckShowMovie(); void SetMovieShown(); }; };
__asm__(".equ SetMovieShown__Q26Career8Location, 0x0025AF30");
bool Career::Location::CheckShowMovie() { if (movie_shown) return false; SetMovieShown(); return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025C378)
// 0x0025C378 ResetGoals__Q26Career5Level
class Career { public: class Level { char padding[0x10]; int goals[5]; public: void ResetGoals(); }; };
void Career::Level::ResetGoals() { int index = 4; int *goal = &goals[4]; loop: *goal = 0; --index; KELLY_DECOMP_COMPILER_BARRIER(); KELLY_DECOMP_COMPILER_BARRIER(); if (index >= 0) { --goal; goto loop; } --goal; }
#endif
