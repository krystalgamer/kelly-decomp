# isBailsMovieUnlocked__C16UnlockingManager

- Address: `0x002F08C0`
- Size: `0x3C` (60 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/unlock_manager.cpp`
- Reference source: `KS/SRC/ks/unlock_manager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 91.6667 | 73.3333 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Indexing from the released g_session_cheats array matched behavior but selected the array base rather than the target mega-cheat-relative address materialization.

### Attempt 2 notes

Representing the same two released Cheat records from the mega-cheat object recovers the target common base, both short circuits, and global bails flag exactly.

## Outcome

The released mega/bails cheat short circuits and persistent bails flag lookup match exactly.
