# __tf14anim_ai_action

- Address: `0x00113110`
- Size: `0x78` (120 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_actions.h`
- Reference source: `KS/SRC/ai_actions.h`
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

Deferred anim_ai_action RTTI generation after five source-level attempts; the released base/derived type records, names, and RTTI calls reproduced, but the target global-address register allocation did not.
