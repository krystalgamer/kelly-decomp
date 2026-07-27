# __16SplitScoreWidget

- Address: `0x0016C158`
- Size: `0xEC` (236 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_splitscore.cpp`
- Reference source: `KS/SRC/ks/igo_widget_splitscore.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 68.6441 | 62.7119 | `candidate-round1.cpp` |
| 2 | different | 68.6441 | 62.7119 | `candidate-round2.cpp` |
| 3 | different | 68.6441 | 62.7119 | `candidate-round3.cpp` |
| 4 | different | 68.6441 | 62.7119 | `candidate-round4.cpp` |
| 5 | different | 14.2308 | 3.0769 | `candidate-round5.cpp` |

## Outcome

Deferred after five source-faithful attempts. The exact SplitScoreWidget constructor reproduces every operation, call, constant, field offset, and instruction multiset at target size, but twenty-two independent setup/store instructions are scheduled differently.
