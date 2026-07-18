# terrain_radius__C12light_source

- Address: `0x002CDD80`
- Size: `0x18` (24 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/light.cpp`
- Reference source: `KS/SRC/light.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.8333 | 83.3333 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The target loads cutoff range at property offset `0x28` through pointer `0x200` and multiplies by `0.5f`; correcting the operation matched on attempt two.

## Outcome

The target `light_source::terrain_radius` load-and-scale matched on attempt two.
