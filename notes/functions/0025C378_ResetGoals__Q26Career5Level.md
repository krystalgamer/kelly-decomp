# ResetGoals__Q26Career5Level

- Address: `0x0025C378`
- Size: `0x2C` (44 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/career.cpp`
- Reference source: `KS/SRC/ks/career.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 79.5455 | 33.3333 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first source shape exposed a layout, loop-backedge, or sibling-call mismatch.

### Attempt 2 notes

The released helper clears all five word-sized goal flags.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `Career::Level::ResetGoals` implementation matched exactly.
