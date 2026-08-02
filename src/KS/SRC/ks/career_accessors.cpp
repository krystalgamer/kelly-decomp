#include "KS/SRC/ks/career.h"

// 0x0025A7C0 GetSurferIdx__6Career
int Career::GetSurferIdx()
{
    return my_id;
}

// 0x0025AF20 UnlockMovie__Q26Career8Location
void Career::Location::UnlockMovie() {
    movie_unlocked = true;
}

// 0x0025AF30 SetMovieShown__Q26Career8Location
void Career::Location::SetMovieShown() {
    movie_shown = true;
}

// 0x0025C4A0 Reset__Q26Career5Beach
void Career::Beach::Reset() {
    unlocked = false;
    shown = false;
}

// 0x0025B918 Reset__Q26Career8Location
void Career::Location::Reset() {
    movie_unlocked = false;
    movie_shown = false;
    board_unlocked = false;
}

// 0x0025C418 IsGoalDone__CQ26Career5Leveli
bool Career::Level::IsGoalDone(int index) const {
    return goals[index];
}

// 0x0025C5E8 IsBoardUnlocked__C6Careeri
bool Career::IsBoardUnlocked(int index) const {
    return boards[index];
}
