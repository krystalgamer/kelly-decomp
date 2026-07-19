# nvlStreamSetLoopSkip__FP9nvlStreamii

- Address: `0x00386DD8`
- Size: `0x20` (32 bytes)
- Object: `nvl/nvlstream_ps2`
- Debug source: `C:/NVL/ps2/nvlstream_ps2.cpp`
- Reference source: `NVL/PS2/nvlstream_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 81.25 | 62.5 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate exposed a helper-symbol, independent-store, or call-delay scheduling mismatch.

### Attempt 2 notes

A minimal stream layout preserves the loop flag, skip, and rewind fields and the released negative-skip branch behavior.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `nvlStreamSetLoopSkip` implementation matched exactly.
