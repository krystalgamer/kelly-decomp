// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_0025A7C0) || \
    defined(KELLY_DECOMP_FUNCTION_0025AB80) || \
    defined(KELLY_DECOMP_FUNCTION_0025AED0) || \
    defined(KELLY_DECOMP_FUNCTION_0025AF20) || \
    defined(KELLY_DECOMP_FUNCTION_0025AF30) || \
    defined(KELLY_DECOMP_FUNCTION_0025B8F0) || \
    defined(KELLY_DECOMP_FUNCTION_0025B918) || \
    defined(KELLY_DECOMP_FUNCTION_0025B928) || \
    defined(KELLY_DECOMP_FUNCTION_0025C318) || \
    defined(KELLY_DECOMP_FUNCTION_0025C418) || \
    defined(KELLY_DECOMP_FUNCTION_0025C478) || \
    defined(KELLY_DECOMP_FUNCTION_0025C4A0) || \
    defined(KELLY_DECOMP_FUNCTION_0025C5E8)
#include "KS/SRC/ks/career.h"
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025AED0)
// 0x0025AED0 OnGoalReDone__6Careerii
void Career::OnGoalReDone(int level, int goal) { goal_passed[goal] = true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025B918)
// 0x0025B918 Reset__Q26Career8Location
void Career::Location::Reset() { movie_unlocked = false; movie_shown = false; board_unlocked = false; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025C418)
// 0x0025C418 IsGoalDone__CQ26Career5Leveli
bool Career::Level::IsGoalDone(int index) const { return goals[index]; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025C5E8)
// 0x0025C5E8 IsBoardUnlocked__C6Careeri
bool Career::IsBoardUnlocked(int index) const { return boards[index]; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025B8F0)
// 0x0025B8F0 __Q26Career8Location
__asm__(".equ Reset__Q26Career8Location, 0x0025B918");
Career::Location::Location() { Reset(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025C318)
// 0x0025C318 __Q26Career5Level
__asm__(".equ Reset__Q26Career5Level, 0x0025C340");
Career::Level::Level() { Reset(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025C478)
// 0x0025C478 __Q26Career5Beach
__asm__(".equ Reset__Q26Career5Beach, 0x0025C4A0");
Career::Beach::Beach() { Reset(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025B928)
// 0x0025B928 CheckShowMovie__Q26Career8Location
__asm__(".equ SetMovieShown__Q26Career8Location, 0x0025AF30");
bool Career::Location::CheckShowMovie() { if (movie_shown) return false; SetMovieShown(); return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025C378)
// 0x0025C378 ResetGoals__Q26Career5Level
class Career { public: class Level { char padding[0x10]; int goals[5]; public: void ResetGoals(); }; };
void Career::Level::ResetGoals() { int index = 4; int *goal = &goals[4]; loop: *goal = 0; --index; KELLY_DECOMP_COMPILER_BARRIER(); KELLY_DECOMP_COMPILER_BARRIER(); if (index >= 0) { --goal; goto loop; } --goal; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025AB80)
// 0x0025AB80 GetInitials__6Career
__asm__(".equ __7stringxPCci, 0x0034D438");

stringx Career::GetInitials() {
    return stringx(myInitials);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025AF98)
// 0x0025AF98 PhotoExistsForLevel__6Careeri
class CompressedPhoto {
    char padding[0x2004];
    void *data;

public:
    bool IsValid() const {
        return data != 0;
    }
};

class Career {
public:
    CompressedPhoto *GetPhotoForLevel(int level);
    bool PhotoExistsForLevel(int level);
};

__asm__(".equ GetPhotoForLevel__6Careeri, 0x0025AF40");

bool Career::PhotoExistsForLevel(int level) {
    CompressedPhoto *photo = GetPhotoForLevel(level);
    return photo != 0 && photo->IsValid();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025AF40)
// 0x0025AF40 GetPhotoForLevel__6Careeri
enum
{
    LEVEL_LAST = 32,
    GOAL_PHOTO_1 = 7,
    GOAL_PHOTO_2 = 8,
    GOAL_PHOTO_3 = 9
};

struct CareerData
{
    char prefix[0x70];
    int goal[5];
    char suffix[0x58];
};

extern CareerData CareerDataArray[];
__asm__(".equ CareerDataArray, 0x0042ECA0");

class CompressedPhoto
{
    char data[0x2008];
};

class Career
{
    char prefix[0xbc];
    CompressedPhoto compressedPhotos[8];

public:
    CompressedPhoto *GetPhotoForLevel(int level);
};

CompressedPhoto *Career::GetPhotoForLevel(int level)
{
    int index = 0;
    for (int i = 0; i < LEVEL_LAST; i++)
    {
        if (CareerDataArray[i].goal[0] == GOAL_PHOTO_1 ||
            CareerDataArray[i].goal[0] == GOAL_PHOTO_2 ||
            CareerDataArray[i].goal[0] == GOAL_PHOTO_3)
        {
            index++;
            if (level == i)
                return &compressedPhotos[index];
        }
    }
    return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025C3A8)
// 0x0025C3A8 Unlock__Q26Career5Level
struct Level{int my_id,unlocked;char p0[4];int is_new;};struct career_data{int beach;char p0[216];};extern career_data CareerDataArray[];extern char*g_career;__asm__(".equ CareerDataArray,0x0042ECA0");__asm__(".equ g_career,0x00427C9C");extern "C" void unlock_beach(void*) __asm__("Unlock__Q26Career5Beach");__asm__(".equ Unlock__Q26Career5Beach,0x0025C4B0");extern "C" void unlock_level(Level*self) __asm__("Unlock__Q26Career5Level");void unlock_level(Level*self){if(!self->is_new){self->unlocked=true;__asm__ __volatile__("" : : : "memory");self->is_new=true;}int beach=CareerDataArray[self->my_id].beach;unlock_beach(g_career+0x10628+beach*12);int dead;__asm__("" : "=r"(dead));}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025AA70)
// 0x0025AA70 IncreaseSpin__6Careeri
struct GlobalDataClass{int getMaxHandicap(int);void setMaxHandicap(int,int);};extern GlobalDataClass globalCareerData;__asm__(".equ globalCareerData,0x004349B8");__asm__(".equ getMaxHandicap__15GlobalDataClassi,0x002EFCC8");__asm__(".equ setMaxHandicap__15GlobalDataClassii,0x002EFD58");struct Career{int spin,speed,jump,balance;char pad0[4];int my_id;char pad1[160];int totalStatPointsIncreased;void IncreaseSpin(int)__asm__("IncreaseSpin__6Careeri");};void Career::IncreaseSpin(int inc){spin+=inc;totalStatPointsIncreased+=inc;if(globalCareerData.getMaxHandicap(my_id)<totalStatPointsIncreased/4){globalCareerData.setMaxHandicap(my_id,totalStatPointsIncreased/4);asm volatile("");}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025AAF8)
// 0x0025AAF8 IncreaseSpeed__6Careeri
struct GlobalDataClass{int getMaxHandicap(int);void setMaxHandicap(int,int);};extern GlobalDataClass globalCareerData;__asm__(".equ globalCareerData,0x004349B8");__asm__(".equ getMaxHandicap__15GlobalDataClassi,0x002EFCC8");__asm__(".equ setMaxHandicap__15GlobalDataClassii,0x002EFD58");struct Career{int spin,speed,jump,balance;char pad0[4];int my_id;char pad1[160];int totalStatPointsIncreased;void IncreaseSpeed(int)__asm__("IncreaseSpeed__6Careeri");};void Career::IncreaseSpeed(int inc){speed+=inc;totalStatPointsIncreased+=inc;if(globalCareerData.getMaxHandicap(my_id)<totalStatPointsIncreased/4){globalCareerData.setMaxHandicap(my_id,totalStatPointsIncreased/4);asm volatile("");}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025ABE8)
// 0x0025ABE8 IncreaseJump__6Careeri
struct GlobalDataClass{int getMaxHandicap(int);void setMaxHandicap(int,int);};extern GlobalDataClass globalCareerData;__asm__(".equ globalCareerData,0x004349B8");__asm__(".equ getMaxHandicap__15GlobalDataClassi,0x002EFCC8");__asm__(".equ setMaxHandicap__15GlobalDataClassii,0x002EFD58");struct Career{int spin,speed,jump,balance;char pad0[4];int my_id;char pad1[160];int totalStatPointsIncreased;void IncreaseJump(int)__asm__("IncreaseJump__6Careeri");};void Career::IncreaseJump(int inc){jump+=inc;totalStatPointsIncreased+=inc;if(globalCareerData.getMaxHandicap(my_id)<totalStatPointsIncreased/4){globalCareerData.setMaxHandicap(my_id,totalStatPointsIncreased/4);asm volatile("");}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025AC70)
// 0x0025AC70 IncreaseBalance__6Careeri
struct GlobalDataClass{int getMaxHandicap(int);void setMaxHandicap(int,int);};extern GlobalDataClass globalCareerData;__asm__(".equ globalCareerData,0x004349B8");__asm__(".equ getMaxHandicap__15GlobalDataClassi,0x002EFCC8");__asm__(".equ setMaxHandicap__15GlobalDataClassii,0x002EFD58");struct Career{int spin,speed,jump,balance;char pad0[4];int my_id;char pad1[160];int totalStatPointsIncreased;void IncreaseBalance(int)__asm__("IncreaseBalance__6Careeri");};void Career::IncreaseBalance(int inc){balance+=inc;totalStatPointsIncreased+=inc;if(globalCareerData.getMaxHandicap(my_id)<totalStatPointsIncreased/4){globalCareerData.setMaxHandicap(my_id,totalStatPointsIncreased/4);asm volatile("");}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0025B9E8)
// 0x0025B9E8 WasNewLevelUnlocked__6Career
struct game_layout{char padding[548];int level_id;};struct career_data{char padding[188];int next_levels[2];char tail[24];};struct level_status{char padding[12];int unlocked;char tail[20];bool IsUnlocked()const{return unlocked;}};extern game_layout*g_game_ptr;extern career_data CareerDataArray[];asm(".equ g_game_ptr,0x0046AC64");asm(".equ CareerDataArray,0x0042ECA0");class Career{char padding[65960];level_status levels[1];public:int WasNewGoalPassed(int);int WasNewLevelUnlocked();};asm(".equ WasNewGoalPassed__6Careeri,0x0025B958");int Career::WasNewLevelUnlocked(){int i,num_new_levels=0;if(WasNewGoalPassed(0)){for(i=0;i<2;i++){int next=CareerDataArray[g_game_ptr->level_id].next_levels[i];if(next!=-1&&levels[next].IsUnlocked())num_new_levels++;}}return num_new_levels;}
#endif
