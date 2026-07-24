# __tf15anim_id_manager

- Address: `0x001445B8`
- Size: `0x78` (120 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 2 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 3 | different | 15.0 | 0.0 | `candidate.cpp` |
| 4 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 5 | different | 17.5 | 3.3333 | `candidate.cpp` |

## Outcome

Deferred anim_id_manager RTTI generation after five source-level attempts; the released base/derived type records, names, and RTTI calls reproduced, but the target global-address register allocation did not.
