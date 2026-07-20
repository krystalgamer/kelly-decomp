# remove_from_terrain__6entity

- Address: `0x0012FF48`
- Size: `0x2C` (44 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.4545 | 81.8182 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

EE GCC reordered the two independent null stores; the target clears `center_region` before `my_sector`.

### Attempt 2 notes

A minimal layout preserves the sector/center-region pointers and the released clear order after region removal.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `entity::remove_from_terrain` implementation matched exactly.
