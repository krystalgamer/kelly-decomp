# IsLevelBoardUnlocked__13BoardFrontEndi

- Address: `0x001B7250`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/BoardFrontEnd.cpp`
- Reference source: `KS/SRC/ks/BoardFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released NOWHERE/INDOOR rejection and UnlockingManager query matched exactly. The manager alias uses the HI16-adjusted address required to reproduce the target access to the real 0x0043a820 global.

## Outcome

The released level-board unlock query matched exactly on the first attempt.
