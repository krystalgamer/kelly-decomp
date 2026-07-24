# __12vr_billboardRC7stringxUi

- Address: `0x002C0818`
- Size: `0x8C` (140 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/billboard.cpp`
- Reference source: `KS/SRC/billboard.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 85.7143 | 77.1429 | `candidate.cpp` |
| 2 | different | 80.0 | 77.1429 | `candidate.cpp` |
| 3 | different | 80.7143 | 68.5714 | `candidate.cpp` |
| 4 | different | 87.8571 | 85.7143 | `candidate.cpp` |
| 5 | different | 48.6111 | 44.4444 | `candidate.cpp` |

## Outcome

Five source-level constructor candidates reproduced the complete body, but the best still differed in five open/internal-serialization call argument scheduling instructions (87.86% byte score).
