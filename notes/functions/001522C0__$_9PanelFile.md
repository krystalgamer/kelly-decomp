# _$_9PanelFile

- Address: `0x001522C0`
- Size: `0xA0` (160 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.6667 | 3.7037 | `candidate.cpp` |
| 2 | different | 22.7273 | 9.0909 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 23.5 | 10.0 | `candidate.cpp` |
| 5 | different | 15.7407 | 3.7037 | `candidate.cpp` |

## Outcome

Five released-source and explicit destruction variants reproduced panel object and string cleanup, but GCC2 deleting-destructor register allocation did not match.
