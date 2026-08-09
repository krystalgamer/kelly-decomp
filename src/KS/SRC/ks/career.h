#ifndef CAREER_H
#define CAREER_H

#include "KS/SRC/stringx.h"
#include "KS/SRC/ks/compressedphoto.h"

void* operator new(unsigned int size, unsigned int alignment, const char* file, int line);

class Career {
public:
    enum {
        MAX_GOALS_PER_LEVEL = 5,
        MAX_BOARDS = 9,
        TRICK_COUNT = 16
    };

    class Level {
        int my_id;
        bool is_new;
        bool advanced;
        bool unlocked;
        bool goals[MAX_GOALS_PER_LEVEL];

    public:
        Level();
        void Reset();
        void ResetGoals();
        bool IsGoalDone(int goal) const;
    };

    class Beach {
        int my_id;
        bool unlocked;
        bool shown;

    public:
        Beach();
        void Reset();
    };

    class Location {
        int my_id;
        bool movie_unlocked;
        bool movie_shown;
        bool board_unlocked;

    public:
        Location();
        void Reset();
        void UnlockMovie();
        void UnlockBoard();
        void SetMovieShown();
        bool CheckShowMovie();
    };

private:
    int spin;
    int speed;
    int jump;
    int balance;
    int current_beach;
    int my_id;
    int my_board_id;
    char myInitials[4];
    int num_special_challenges_completed;
    bool using_personality_suit;
    int num_earned_tricks;
    bool learned_tricks[TRICK_COUNT];

public:
    CompressedPhoto *GetPhotoForLevel(int level);
    bool PhotoExistsForLevel(int level);
    bool new_goal_passed[5];
    bool goal_passed[5];
    bool boards[MAX_BOARDS];
    int totalStatPointsIncreased;
    char remaining_data[0x1098C];

public:
    Career();
    int GetSurferIdx();
    void OnGoalReDone(int level, int goal);
    bool IsBoardUnlocked(int board) const;
    stringx GetInitials();
    void SetInitials(stringx initials);
    void EarnNextTrick();
    void UnlockTrick(int trick);
    bool WasNewGoalPassed(int goalIdx = -1);
    bool WasAnyGoalPassed(int goalIdx = -1);
};

extern Career* g_career;
extern const char career_source_path[];

__asm__(".equ __nw__FUiUiPCci, 0x002AC578");
__asm__(".equ __6Career, 0x0025A350");
__asm__(".equ g_career, 0x00427C9C");
__asm__(".equ career_source_path, 0x004D4828");

#endif
