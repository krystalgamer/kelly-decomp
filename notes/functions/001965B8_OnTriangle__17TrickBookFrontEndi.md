# OnTriangle__17TrickBookFrontEndi

- Address: `0x001965B8`
- Size: `0x78` (120 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/TrickBookFrontEnd.cpp`
- Reference source: `KS/SRC/ks/TrickBookFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 82.5 | 76.6667 | `candidate.cpp` |
| 2 | different | 96.6667 | 93.3333 | `candidate.cpp` |
| 3 | different | 91.6667 | 90.0 | `candidate.cpp` |
| 4 | different | 96.6667 | 93.3333 | `candidate.cpp` |
| 5 | different | 96.6667 | 93.3333 | `candidate.cpp` |

## Outcome

Deferred trick-book triangle handling after five source-level attempts; all released exit/menu/sound/zoom operations reproduced, but the target return-address and callee-save prologue order did not.
