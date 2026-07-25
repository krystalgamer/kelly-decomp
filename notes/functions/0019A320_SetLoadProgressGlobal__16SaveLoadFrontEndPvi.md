# SetLoadProgressGlobal__16SaveLoadFrontEndPvi

- Address: `0x0019A320`
- Size: `0x90` (144 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.7568 | 18.9189 | `candidate.cpp` |
| 2 | different | 33.3333 | 19.4444 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 33.3333 | 19.4444 | `candidate.cpp` |
| 5 | different | 28.3784 | 8.1081 | `candidate.cpp` |

## Outcome

Five released-body variants could not reproduce the target integer-to-float hazard nop while retaining the shared non-tail error epilogue.
