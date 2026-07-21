# SetTrickRegion__22kellyslater_controller11TRICKREGION

- Address: `0x0021E408`
- Size: `0x3C` (60 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 5.0 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released region update and conditional event dispatch were reconstructed with exact fields and addresses, but EE GCC converted the conditional final dispatch into a sibling tail call and emitted only 48 bytes.

### Attempt 2 notes

Added a narrowly scoped empty barrier after the conditional dispatch to prevent only the demonstrated sibling-call optimization. It emits no instructions and restored the exact 60-byte framed function; integration normalizes it to `KELLY_DECOMP_COMPILER_BARRIER()`.

## Outcome

The released trick-region setter exactly matches the previous/current update and conditional event dispatch; a documented empty barrier prevents only sibling-call conversion.
