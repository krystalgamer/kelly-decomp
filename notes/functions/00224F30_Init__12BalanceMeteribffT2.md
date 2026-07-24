# Init__12BalanceMeteribffT2

- Address: `0x00224F30`
- Size: `0x8C` (140 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 28.4722 | 13.8889 | `candidate.cpp` |
| 2 | different | 67.3611 | 61.1111 | `candidate.cpp` |
| 3 | different | 94.2857 | 94.2857 | `candidate.cpp` |
| 4 | different | 93.5714 | 91.4286 | `candidate.cpp` |
| 5 | different | 94.2857 | 94.2857 | `candidate.cpp` |

## Outcome

Five released-body candidates reproduced all balance initialization semantics, but the best remained two instructions short because the first IGO virtual-call argument setup was scheduled in the opposite order (94.29% byte score).
