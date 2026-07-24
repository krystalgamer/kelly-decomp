# __dl__t11linear_anim1ZfPv

- Address: `0x0011A098`
- Size: `0x7C` (124 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/po_anim.cpp`
- Reference source: `KS/SRC/po_anim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 52.4194 | 41.9355 | `candidate.cpp` |
| 2 | different | 79.0323 | 64.5161 | `candidate.cpp` |
| 3 | different | 96.7742 | 87.0968 | `candidate.cpp` |
| 4 | different | 96.7742 | 87.0968 | `candidate.cpp` |
| 5 | different | 96.7742 | 87.0968 | `candidate.cpp` |

## Outcome

Deferred linear_anim<float> pool operator delete after five source-level attempts; the released null guard, pool scan, occupancy clear, and failure print reproduced, but the target loop load and branch-likely schedule did not.
