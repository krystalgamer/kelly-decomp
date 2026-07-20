# onscreenerror__FRC7stringx

- Address: `0x001DFA58`
- Size: `0x2C` (44 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_errmsg.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_errmsg.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 29.5455 | 18.1818 | `candidate.cpp` |
| 2 | different | 79.5455 | 63.6364 | `candidate.cpp` |
| 3 | different | 41.6667 | 33.3333 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first faithful source shape exposed an isolated scheduling, layout, or sibling-call mismatch.

### Attempt 2 notes

The second source shape improved part of the layout or call form but retained a distinct target scheduling mismatch.

### Attempt 3 notes

The third source shape retained a distinct scheduling mismatch.

### Attempt 4 notes

A minimal string layout forwards its character pointer to the console format, then flushes.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released string `onscreenerror` implementation matched exactly.
