# compute_radius__7cg_mesh

- Address: `0x002DB408`
- Size: `0xC0` (192 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colgeom.cpp`
- Reference source: `KS/SRC/colgeom.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.1818 | 7.2727 | `candidate.cpp` |
| 2 | different | 43.2292 | 25.0 | `candidate.cpp` |
| 3 | different | 78.125 | 72.9167 | `candidate.cpp` |
| 4 | different | 79.6875 | 77.0833 | `candidate.cpp` |
| 5 | different | 79.6875 | 77.0833 | `candidate.cpp` |

### Attempt 4 notes

Hoisting the vertex count and binding the raw-vertex pointer matched 37 of 48
instructions, but the reciprocal-size and loop registers remained different.

### Attempt 5 notes

Index and count binding combinations could not recover the target schedule.

## Outcome

The collision radius loop matched 37 of 48 instructions, but five source forms retained divergent reciprocal-size and traversal registers.
