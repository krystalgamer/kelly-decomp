# __6portalPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeT1

- Address: `0x002E3B88`
- Size: `0x70` (112 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/portal.cpp`
- Reference source: `KS/SRC/portal.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 64.2857 | 39.2857 | `candidate.cpp` |
| 2 | different | 66.9643 | 50.0 | `candidate.cpp` |
| 3 | different | 88.3929 | 78.5714 | `candidate.cpp` |
| 4 | different | 94.6429 | 85.7143 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

Read the released portal constructor, vr_pmesh inheritance, sphere layout, graph-node fields, and inactive flag. Preserving the generated sphere initialization store order matched on attempt 5.

## Outcome

Matched portal graph-node constructor
