# CheckGrindPathEnd__22kellyslater_controller

- Address: `0x00213300`
- Size: `0xE8` (232 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.6724 | 87.931 | `candidate-round1.cpp` |
| 2 | different | 92.6724 | 87.931 | `candidate-round2.cpp` |
| 3 | different | 96.5517 | 93.1034 | `candidate-round3.cpp` |
| 4 | different | 85.3448 | 77.5862 | `candidate-round4.cpp` |
| 5 | different | 95.2586 | 82.7586 | `candidate-round5.cpp` |

## Outcome

Deferred after five source-level attempts. The released grind-path end test reaches exact size and 96.5517%, with all offsets, calls, arithmetic, branch lowering, and epilogue exact; only four independent marker-coordinate loads are scheduled in the opposite order.
