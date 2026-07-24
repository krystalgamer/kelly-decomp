# Exit__19GraphicalMenuSystem

- Address: `0x001BEB00`
- Size: `0x84` (132 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/GraphicalMenuSystem.cpp`
- Reference source: `KS/SRC/ks/GraphicalMenuSystem.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 79.5455 | 75.7576 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released graphical-menu exit matched after assigning the exact game/manager method symbols and blocking the final ReleaseFE tail call.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released graphical-menu exit matched exactly on the second attempt.
