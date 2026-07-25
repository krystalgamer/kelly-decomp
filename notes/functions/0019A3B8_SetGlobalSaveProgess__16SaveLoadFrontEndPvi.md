# SetGlobalSaveProgess__16SaveLoadFrontEndPvi

- Address: `0x0019A3B8`
- Size: `0x98` (152 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.5 | 6.0 | `candidate.cpp` |
| 2 | different | 34.5238 | 14.2857 | `candidate.cpp` |
| 3 | different | 32.2368 | 18.4211 | `candidate.cpp` |
| 4 | different | 50.0 | 39.4737 | `candidate.cpp` |
| 5 | different | 37.1795 | 10.2564 | `candidate.cpp` |

## Outcome

Five released and target-observed save-progress variants reproduced all state/error calls and arithmetic, but the target-only integer-to-float hazard nop could not be emitted from source.
