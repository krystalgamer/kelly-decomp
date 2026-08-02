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
