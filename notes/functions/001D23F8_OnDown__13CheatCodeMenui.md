# OnDown__13CheatCodeMenui

- Address: `0x001D23F8`
- Size: `0xBC` (188 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.0 | 8.5106 | `candidate.cpp` |
| 2 | different | 72.449 | 63.2653 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Reordering navigation before sound selection and preventing the final event
tail call reproduces the target exactly.

## Outcome

Released cheat pagination and post-navigation sound selection reproduce the target exactly.
