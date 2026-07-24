# set_conglom_texture__FP6entityi

- Address: `0x001FEE08`
- Size: `0x78` (120 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 70.8333 | 56.6667 | `candidate.cpp` |
| 2 | different | 70.8333 | 56.6667 | `candidate.cpp` |
| 3 | different | 70.8333 | 56.6667 | `candidate.cpp` |
| 4 | different | 70.8333 | 56.6667 | `candidate.cpp` |
| 5 | different | 69.1667 | 50.0 | `candidate.cpp` |

## Outcome

Deferred set_conglom_texture after five source-level attempts; the released recursive child traversal, link offsets, and texture write reproduced, but the target-only link load hazard nop did not.
