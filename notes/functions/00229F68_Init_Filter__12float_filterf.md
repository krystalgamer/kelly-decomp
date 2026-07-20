# Init_Filter__12float_filterf

- Address: `0x00229F68`
- Size: `0x2C` (44 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.0 | 0.0 | `candidate.cpp` |
| 2 | different | 86.3636 | 54.5455 | `candidate.cpp` |
| 3 | different | 29.5455 | 55.5556 | `candidate.cpp` |
| 4 | different | 29.5455 | 11.1111 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first faithful source shape exposed an isolated scheduling, layout, or sibling-call mismatch.

### Attempt 2 notes

The second source shape improved part of the layout or call form but retained a distinct target scheduling mismatch.

### Attempt 3 notes

The third source shape retained a distinct scheduling mismatch.

### Attempt 4 notes

The fourth source shape isolated the remaining target schedule but did not match it exactly.

### Attempt 5 notes

The released two-element filter initialization fills position history and clears error history.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `float_filter::Init_Filter` implementation matched exactly.
