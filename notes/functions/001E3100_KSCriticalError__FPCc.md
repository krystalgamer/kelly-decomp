# KSCriticalError__FPCc

- Address: `0x001E3100`
- Size: `0x2C` (44 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/ps2main.cpp`
- Reference source: `KS/SRC/ps2main.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 52.2727 | 45.4545 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first faithful source shape exposed an isolated scheduling, layout, or sibling-call mismatch.

### Attempt 2 notes

The released critical-error path forwards the same text to the onscreen and fatal error handlers.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `KSCriticalError` implementation matched exactly.
