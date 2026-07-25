# SetPosition__14SplitterWidgeti

- Address: `0x00168D78`
- Size: `0x98` (152 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_splitter.cpp`
- Reference source: `KS/SRC/ks/igo_widget_splitter.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.5263 | 26.3158 | `candidate.cpp` |
| 2 | different | 28.9474 | 18.4211 | `candidate.cpp` |
| 3 | different | 35.5263 | 26.3158 | `candidate.cpp` |
| 4 | different | 45.3947 | 13.1579 | `candidate.cpp` |
| 5 | different | 27.6316 | 21.0526 | `candidate.cpp` |

## Outcome

Five released-source position/visibility variants reproduced the virtual calls, but the target-only integer-to-float hazard nop and surrounding dispatch scheduling did not match.
