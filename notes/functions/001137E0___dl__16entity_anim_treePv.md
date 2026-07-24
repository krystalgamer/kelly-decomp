# __dl__16entity_anim_treePv

- Address: `0x001137E0`
- Size: `0x7C` (124 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 10.4839 | 0.0 | `candidate.cpp` |
| 2 | different | 22.7273 | 3.0303 | `candidate.cpp` |
| 3 | different | 90.3226 | 80.6452 | `candidate.cpp` |
| 4 | different | 76.6129 | 58.0645 | `candidate.cpp` |
| 5 | different | 90.3226 | 80.6452 | `candidate.cpp` |

## Outcome

Deferred entity_anim_tree pool operator delete after five source-level attempts; the released null guard, pool scan, occupancy clear, and failure print reproduced at 90%, but the target global register and add scheduling did not.
