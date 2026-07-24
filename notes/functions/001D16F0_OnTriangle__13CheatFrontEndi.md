# OnTriangle__13CheatFrontEndi

- Address: `0x001D16F0`
- Size: `0x8C` (140 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.5714 | 25.7143 | `candidate.cpp` |
| 2 | different | 97.8571 | 91.4286 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released cheat back-navigation matched after preserving the menu-call argument registers and blocking the final sound-event tail call.

## Outcome

The released cheat frontend triangle handler matched exactly on the third attempt.
