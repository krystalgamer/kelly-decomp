# spawn__15floating_object

- Address: `0x001FD948`
- Size: `0x3C` (60 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.0 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released field checks/resets and base spawn call were reconstructed with exact offsets, but EE GCC converted the final base call into a sibling tail call and emitted a 48-byte leaf form.

### Attempt 2 notes

Added a narrowly scoped empty barrier after the base spawn call to prevent only the demonstrated sibling-call optimization. It emits no instructions and restored the exact 60-byte framed form; integration normalizes it to `KELLY_DECOMP_COMPILER_BARRIER()`.

## Outcome

The released floating-object spawn exactly matches the spawn-limit check, state resets, and base spawn call; a documented empty barrier prevents only sibling-call conversion.
