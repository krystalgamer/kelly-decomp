# KSHeapError__FPCc

- Address: `0x001E30C0`
- Size: `0x3C` (60 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/ps2main.cpp`
- Reference source: `KS/SRC/ps2main.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released onscreen error report, general error report, and intentional infinite halt loop matched all 60 bytes exactly on the first attempt.

## Outcome

The released heap error handler exactly matches its two reporting calls followed by the intentional infinite loop.
