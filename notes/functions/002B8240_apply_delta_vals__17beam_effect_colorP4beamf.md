# apply_delta_vals__17beam_effect_colorP4beamf

- Address: `0x002B8240`
- Size: `0xB8` (184 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.h`
- Reference source: `KS/SRC/beam.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released delta-color body matched on the first attempt after expanding the existing beam shared header with the source-faithful B,G,R,A color layout, beam color accessors, and beam-effect inheritance/fields.

## Outcome

Matched the released beam color-delta application with shared beam and color declarations.
