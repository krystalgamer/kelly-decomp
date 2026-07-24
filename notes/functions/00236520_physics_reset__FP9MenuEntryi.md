# physics_reset__FP9MenuEntryi

- Address: `0x00236520`
- Size: `0x8C` (140 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksdbmenu.cpp`
- Reference source: `KS/SRC/ks/ksdbmenu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 11.4286 | 0.0 | `candidate.cpp` |
| 2 | different | 72.1429 | 65.7143 | `candidate.cpp` |
| 3 | different | 89.2857 | 74.2857 | `candidate.cpp` |
| 4 | different | 85.7143 | 62.8571 | `candidate.cpp` |
| 5 | different | 67.8571 | 54.2857 | `candidate.cpp` |

## Outcome

Five source-level candidates reproduced the controller reset loop but could not match the target global-base register allocation and load scheduling; the best reached 89.29% byte score.
