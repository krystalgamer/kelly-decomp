# _$_9PanelGeom

- Address: `0x0014FAC8`
- Size: `0xA0` (160 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.4286 | 4.0816 | `candidate.cpp` |
| 2 | different | 25.0 | 10.0 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 28.2609 | 10.8696 | `candidate.cpp` |
| 5 | different | 17.3469 | 4.0816 | `candidate.cpp` |

## Outcome

Five released-source and explicit destruction variants reproduced panel child and string cleanup, but GCC2 deleting-destructor register allocation did not match.
