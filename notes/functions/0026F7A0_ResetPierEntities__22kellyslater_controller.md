# ResetPierEntities__22kellyslater_controller

- Address: `0x0026F7A0`
- Size: `0x2C` (44 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/kellyslater_controller.h`
- Reference source: `KS/SRC/ks/kellyslater_controller.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 81.8182 | 44.4444 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first source shape exposed a layout, loop-backedge, or sibling-call mismatch.

### Attempt 2 notes

A minimal layout clears the three pier-entity pointers and their count.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released pier-entity reset matched exactly.
