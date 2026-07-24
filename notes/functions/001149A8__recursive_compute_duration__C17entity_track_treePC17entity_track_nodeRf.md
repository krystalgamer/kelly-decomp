# _recursive_compute_duration__C17entity_track_treePC17entity_track_nodeRf

- Address: `0x001149A8`
- Size: `0x8C` (140 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 77.8571 | 68.5714 | `candidate.cpp` |
| 2 | different | 74.2857 | 62.8571 | `candidate.cpp` |
| 3 | different | 77.8571 | 68.5714 | `candidate.cpp` |
| 4 | different | 77.8571 | 68.5714 | `candidate.cpp` |
| 5 | different | 74.2857 | 62.8571 | `candidate.cpp` |

## Outcome

Five released-body variants could not reproduce the target-only integer load hazard nop after the sibling load; the best candidate otherwise preserved the recursive traversal and matched 24/35 instructions at 77.86% byte score.
