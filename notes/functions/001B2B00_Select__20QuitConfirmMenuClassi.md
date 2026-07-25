# Select__20QuitConfirmMenuClassi

- Address: `0x001B2B00`
- Size: `0x90` (144 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 56.7073 | 48.7805 | `candidate.cpp` |
| 2 | different | 94.4444 | 94.4444 | `candidate.cpp` |
| 3 | different | 94.4444 | 94.4444 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released quit-confirm selection matched after fixing the sound-event argument registers and blocking both terminal switch calls.

## Outcome

The released quit-confirm selection matched exactly on the fourth attempt.
