# nslAddSound__FUi

- Address: `0x0038CAF8`
- Size: `0x20` (32 bytes)
- Object: `nsl/nsl_ps2_sound`
- Debug source: `C:/NSL/PS2/nsl_ps2_sound.cpp`
- Reference source: `NSL/PS2/nsl_ps2_sound.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released convenience overload forwards the source id with zero stream offset/sample arguments.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `nslAddSound` convenience wrapper matched exactly.
