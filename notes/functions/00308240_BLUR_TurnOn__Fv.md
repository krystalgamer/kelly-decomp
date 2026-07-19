# BLUR_TurnOn__Fv

- Address: `0x00308240`
- Size: `0x20` (32 bytes)
- Object: `game/files_misfits`
- Debug source: `ks/blur.cpp`
- Reference source: `KS/SRC/ks/blur.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.625 | 62.5 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate used effective global addresses without the `%hi` carries required by their negative low halves.

### Attempt 2 notes

The released blur activation stores the active flag and snapshots the inlined total-time global.

## Outcome

The released `BLUR_TurnOn` implementation matched exactly.
