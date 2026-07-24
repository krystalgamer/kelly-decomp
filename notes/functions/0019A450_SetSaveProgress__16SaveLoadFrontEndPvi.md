# SetSaveProgress__16SaveLoadFrontEndPvi

- Address: `0x0019A450`
- Size: `0x88` (136 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.2857 | 20.0 | `candidate.cpp` |
| 2 | different | 34.5588 | 20.5882 | `candidate.cpp` |
| 3 | different | 34.5588 | 20.5882 | `candidate.cpp` |
| 4 | different | 34.5588 | 20.5882 | `candidate.cpp` |
| 5 | different | 31.4286 | 5.7143 | `candidate.cpp` |

## Outcome

Deferred the released save-progress callback after five source-level attempts; progress scaling, state transition, and error handling were reconstructed, but the target retained an extra integer-to-float hazard nop.
