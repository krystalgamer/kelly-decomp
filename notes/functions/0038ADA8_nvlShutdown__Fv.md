# nvlShutdown__Fv

- Address: `0x0038ADA8`
- Size: `0x94` (148 bytes)
- Object: `nvl/nvl_ps2`
- Debug source: `C:/NVL/ps2/nvl_ps2.cpp`
- Reference source: `NVL/PS2/nvl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.2973 | 97.2973 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The exact released movie shutdown and DMA handler teardown matched after correcting the negative-low initialization global and exact nvlStopAllMovies symbol.

## Outcome

Matched NVL shutdown
