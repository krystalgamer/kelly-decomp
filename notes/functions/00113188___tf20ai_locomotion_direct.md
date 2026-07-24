# __tf20ai_locomotion_direct

- Address: `0x00113188`
- Size: `0x78` (120 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_locomotion_direct.h`
- Reference source: `KS/SRC/ai_locomotion_direct.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 2 | different | 22.5 | 3.3333 | `candidate.cpp` |
| 3 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 4 | different | 14.1667 | 0.0 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Deferred ai_locomotion_direct RTTI generation after five source-level attempts; the released base/derived type records, names, and RTTI calls reproduced, but the target global-address register allocation did not.
