# Draw__13CheatCodeMenu

- Address: `0x001D2028`
- Size: `0x6C` (108 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 76.8519 | 70.3704 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the two toggle-state entries, TextString draw slot, and graphical-menu base draw. A dead-output barrier prevented the base tail call and matched on attempt 2.

## Outcome

Matched cheat code menu drawing
