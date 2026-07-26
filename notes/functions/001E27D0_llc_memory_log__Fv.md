# llc_memory_log__Fv

- Address: `0x001E27D0`
- Size: `0xC0` (192 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_rasterize.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_rasterize.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.1042 | 87.5 | `candidate.cpp` |
| 2 | different | 91.6667 | 87.5 | `candidate.cpp` |
| 3 | different | 89.5833 | 87.5 | `candidate.cpp` |
| 4 | different | 14.7959 | 0.0 | `candidate.cpp` |
| 5 | different | 91.6667 | 87.5 | `candidate.cpp` |

### Attempt 2 notes

Correcting the variadic format pointer mangling matched 42 of 48 instructions;
only the mallinfo-call prologue save schedule differed.

### Attempt 5 notes

Function barriers, explicit rounded division, and an explicit unused
mallinfo expression could not reproduce those six prologue instructions.

## Outcome

The memory log body matched 42 of 48 instructions, but five source forms could not reproduce the mallinfo-call prologue save schedule.
