# Reset__18IGOTutorialManager

- Address: `0x00159668`
- Size: `0x64` (100 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/tutorialmanager.cpp`
- Reference source: `KS/SRC/ks/tutorialmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 29.0 | 0.0 | `candidate.cpp` |
| 2 | different | 94.0 | 76.0 | `candidate.cpp` |
| 3 | different | 60.5769 | 19.2308 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Read the released reset body, exact manager/game field offsets, invalid IDs, global game pointer, and SetTutorialSection call. Fixed registers and ordered volatile stores matched on attempt 4.

## Outcome

Matched tutorial manager reset
