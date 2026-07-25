# UpdateInScene__7BoxTextb

- Address: `0x0014A6D8`
- Size: `0xB0` (176 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 94.3182 | 93.1818 | `candidate.cpp` |
| 2 | different | 87.5 | 86.3636 | `candidate.cpp` |
| 3 | different | 95.4545 | 95.4545 | `candidate.cpp` |
| 4 | different | 87.5 | 86.3636 | `candidate.cpp` |
| 5 | different | 94.3182 | 93.1818 | `candidate.cpp` |

## Outcome

Five released BoxText scene-update variants reproduced all behavior; the best differed only in two first-call setup scheduling instructions.
