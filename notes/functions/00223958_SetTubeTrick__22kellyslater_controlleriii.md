# SetTubeTrick__22kellyslater_controlleriii

- Address: `0x00223958`
- Size: `0x20` (32 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 93.75 | 75.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate exposed an aggregate-copy, constant-folding, store-order, or call-delay scheduling mismatch.

### Attempt 2 notes

Minimal padding preserves all six released tube-trick state fields and their assignment order.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `kellyslater_controller::SetTubeTrick` reset sequence matched exactly.
