# SetScale__10FloatingPQf

- Address: `0x0014F4F8`
- Size: `0xAC` (172 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 10.4651 | 0.0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 43.4783 | 36.9565 | `candidate.cpp` |
| 4 | different | 42.0213 | 36.1702 | `candidate.cpp` |
| 5 | different | 98.2558 | 95.3488 | `candidate.cpp` |

## Outcome

Five released floating-quad scale variants reproduced all geometry; the best differed in two branch scheduling instructions.
