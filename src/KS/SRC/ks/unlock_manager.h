#ifndef UNLOCK_MANAGER_H
#define UNLOCK_MANAGER_H

class UnlockingManager {
public:
    bool isLevelUnlocked(int level) const;
    bool isLocationBoardUnlocked(int location) const;
    bool isLocationMovieUnlocked(int location) const;
    bool isSurferMovieUnlocked(int surfer) const;
    bool isBailsMovieUnlocked() const;
    bool isEspnMovieUnlocked() const;
};

extern UnlockingManager unlockManager;

#endif
