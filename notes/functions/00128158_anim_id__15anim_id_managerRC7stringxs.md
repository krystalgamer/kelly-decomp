# anim_id__15anim_id_managerRC7stringxs

- Address: `0x00128158`
- Size: `0x98` (152 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 8.3333 | 2.0833 | `candidate.cpp` |
| 2 | different | 28.2051 | 7.6923 | `candidate.cpp` |
| 3 | different | 14.6739 | 4.3478 | `candidate.cpp` |
| 4 | different | 18.9024 | 2.439 | `candidate.cpp` |
| 5 | different | 20.3488 | 0.0 | `candidate.cpp` |

## Outcome

Five released-source and explicit RB-tree ABI variants reproduced lookup/insert semantics, but exact iterator/pair stack placement and register allocation did not match.
