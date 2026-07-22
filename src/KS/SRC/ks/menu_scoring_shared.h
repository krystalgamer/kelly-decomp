#ifndef KELLY_DECOMP_MENU_SCORING_SHARED_H
#define KELLY_DECOMP_MENU_SCORING_SHARED_H

class MenuEntry;

class os_file {
    static bool system_locked;

public:
    static inline bool is_system_locked() { return system_locked; }
    static inline void system_unlock() { system_locked = false; }
    static inline void system_lock() { system_locked = true; }
};

void SaveScoringSystem();
bool SaveScoringButton(MenuEntry *entry, int button_id);

__asm__(".equ _7os_file$system_locked, 0x0040E3A0");
__asm__(".equ SaveScoringSystem__Fv, 0x0024ACF0");

#endif
