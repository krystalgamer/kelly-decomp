# isSurferBoardUnlocked__C16UnlockingManagerii

- Address: `0x002F0758`
- Size: `0x90` (144 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/unlock_manager.cpp`
- Reference source: `KS/SRC/ks/unlock_manager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 12.5 | 0.0 | `candidate.cpp` |
| 2 | different | 99.3056 | 97.2222 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released board-unlock logic matched after grouping adjacent cheat flags behind their shared base and using the nominal high-adjusted address.

## Outcome

The released surfer-board unlock query matched exactly on the third attempt.
