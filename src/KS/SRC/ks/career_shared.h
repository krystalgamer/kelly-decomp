#ifndef KELLY_DECOMP_CAREER_SHARED_H
#define KELLY_DECOMP_CAREER_SHARED_H

void* operator new(unsigned int size, unsigned int alignment, const char* file, int line);

class Career {
    char data_to_new_goal_passed[0x6C];
    bool new_goal_passed[5];
    bool goal_passed[5];
    char remaining_data[0x109B4];

public:
    Career();
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
