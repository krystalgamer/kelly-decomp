# preload__4item

- Address: `0x0028A648`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/item.cpp`
- Reference source: `KS/SRC/item.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 52.2727 | 45.4545 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first source shape exposed a layout, loop-backedge, or sibling-call mismatch.

### Attempt 2 notes

The second attempt either exposed a candidate-generation syntax error or retained the loop branch schedule mismatch.

### Attempt 3 notes

The released item preload runs the base entity preload before its script preload.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `item::preload` implementation matched exactly.
