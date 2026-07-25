# __Q2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeRCQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4node

- Address: `0x002FFC10`
- Size: `0x9C` (156 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/graph.h`
- Reference source: `KS/SRC/graph.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 60.2564 | 51.2821 | `candidate.cpp` |
| 2 | different | 92.3077 | 84.6154 | `candidate.cpp` |
| 3 | different | 78.2051 | 71.7949 | `candidate.cpp` |
| 4 | different | 95.5128 | 92.3077 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

Reconstructed the implicit graph node copy: allocate and initialize the edge-list sentinel, copy edges, then copy node data. Empty constraints preserve the released iterator argument schedule without emitting instructions.

## Outcome

Matched graph node copy construction
