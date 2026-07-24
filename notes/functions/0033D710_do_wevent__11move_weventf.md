# do_wevent__11move_weventf

- Address: `0x0033D710`
- Size: `0x8C` (140 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 38.5714 | 20.0 | `candidate.cpp` |
| 2 | different | 30.0 | 5.7143 | `candidate.cpp` |
| 3 | different | 15.7609 | 4.3478 | `candidate.cpp` |
| 4 | different | 38.5714 | 20.0 | `candidate.cpp` |
| 5 | different | 24.2857 | 5.7143 | `candidate.cpp` |

## Outcome

Five source-faithful interpolation candidates could not reproduce the two target-only integer-to-float hazard nops; the best otherwise retained the released movement calculation and virtual call.
