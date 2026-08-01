# KSCriticalError__FPCc

- Address: `0x001E3100`
- Size: `0x2C` (44 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/ps2main.cpp`
- Reference source: `KS/SRC/ps2main.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 50.0 | 45.4545 | `critical-1.cpp` |
| 2 | different | 50.0 | 45.4545 | `critical-2.cpp` |
| 3 | different | 18.3333 | 0.0 | `critical-3.cpp` |

## Outcome

Released two-call body tail-calls the final error call under isolated native compilation; three ordinary C++ forms did not reproduce the target without a compiler barrier.
