# SetPQIndices__16SaveLoadFrontEnd

- Address: `0x0019B678`
- Size: `0x74` (116 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 65.5172 | 20.6897 | `candidate.cpp` |
| 2 | different | 96.5517 | 93.1034 | `candidate.cpp` |
| 3 | different | 73.2759 | 62.069 | `candidate.cpp` |
| 4 | different | 91.3793 | 89.6552 | `candidate.cpp` |
| 5 | different | 96.5517 | 93.1034 | `candidate.cpp` |

## Outcome

Deferred save/load panel-index setup after five source-level attempts; all three released virtual calls reproduced, but the target return-address and callee-save ordering did not.
