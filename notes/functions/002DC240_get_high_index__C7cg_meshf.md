# get_high_index__C7cg_meshf

- Address: `0x002DC240`
- Size: `0x3C` (60 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colgeom.cpp`
- Reference source: `KS/SRC/colgeom.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 37.5 | 25.0 | `candidate.cpp` |
| 2 | different | 39.0625 | 25.0 | `candidate.cpp` |
| 3 | different | 37.5 | 18.75 | `candidate.cpp` |
| 4 | different | 78.3333 | 73.3333 | `candidate.cpp` |
| 5 | different | 38.2353 | 17.6471 | `candidate.cpp` |

### Attempt 1 notes

The authentic intvector clamp matched the released structure but inserted one extra post-mfc1 hazard nop.

### Attempt 2 notes

A direct high-lookup pointer retained the 64-byte hazard-nop mismatch and changed result registers.

### Attempt 3 notes

Caching lookup_size did not remove the hazard nop and reduced instruction agreement.

### Attempt 4 notes

Reversing the clamp produced 60 bytes but different branch control flow and retained the nop.

### Attempt 5 notes

An early-return clamp expanded to 68 bytes without recovering the target schedule.

## Outcome

Five source-authentic clamp forms could not reproduce the target omission of the post-mfc1 hazard nop, mirroring the adjacent low-index function.
