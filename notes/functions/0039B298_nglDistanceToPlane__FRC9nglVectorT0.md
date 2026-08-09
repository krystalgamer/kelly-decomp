# nglDistanceToPlane__FRC9nglVectorT0

- Address: `0x0039B298`
- Size: `0x38` (56 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released function uses shared `nglVector` indexing to compute the
normalized plane dot product and distance term.

## Outcome

The local vector declaration was removed.
