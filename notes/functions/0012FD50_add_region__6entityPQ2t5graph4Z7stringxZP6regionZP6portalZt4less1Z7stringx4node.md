# add_region__6entityPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4node

- Address: `0x0012FD50`
- Size: `0x74` (116 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.3448 | 10.3448 | `candidate.cpp` |
| 2 | different | 45.8333 | 30.0 | `candidate.cpp` |
| 3 | different | 88.7931 | 79.3103 | `candidate.cpp` |
| 4 | different | 95.6897 | 82.7586 | `candidate.cpp` |
| 5 | different | 93.1034 | 86.2069 | `candidate.cpp` |

## Outcome

Deferred entity region insertion after five source-level attempts; the released tree insertion and virtual region add reproduced, but the generated pair-copy register allocation did not.
