#ifndef UNLOCK_MANAGER_H
#define UNLOCK_MANAGER_H

class UnlockingManager {
public:
    bool isLocationBoardUnlocked(int location) const;
    bool isLocationMovieUnlocked(int location) const;
    bool isSurferMovieUnlocked(int surfer) const;
    bool isBailsMovieUnlocked() const;
    bool isEspnMovieUnlocked() const;
};

extern UnlockingManager unlockManager;

#endif
