# get_low_index__C7cg_meshf

- Address: `0x002DC200`
- Size: `0x3C` (60 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colgeom.cpp`
- Reference source: `KS/SRC/colgeom.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 39.0625 | 25.0 | `candidate.cpp` |
| 2 | different | 37.5 | 25.0 | `candidate.cpp` |
| 3 | different | 37.5 | 25.0 | `candidate.cpp` |
| 4 | different | 78.3333 | 73.3333 | `candidate.cpp` |
| 5 | different | 38.2353 | 17.6471 | `candidate.cpp` |

### Attempt 1 notes

The released clamp using a direct lookup pointer emitted one extra post-mfc1 hazard nop and different result registers.

### Attempt 2 notes

An initial authentic intvector layout had an incorrect lookup_size offset and retained the hazard nop.

### Attempt 3 notes

The corrected intvector layout matched every target instruction but inserted one extra nop after mfc1, yielding 64 bytes.

### Attempt 4 notes

Reversing the source clamp reduced the function to 60 bytes but produced different branch control flow and retained the hazard nop.

### Attempt 5 notes

An early-return clamp expanded to 68 bytes and did not recover the released schedule.

## Outcome

Five source-authentic clamp forms could not reproduce the target omission of the post-mfc1 hazard nop; the literal vector form otherwise matched instruction-for-instruction.
