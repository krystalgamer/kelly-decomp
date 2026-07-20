# set_blend_mode__7mat_facUii

- Address: `0x002BD1D8`
- Size: `0x34` (52 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/matfac.cpp`
- Reference source: `KS/SRC/matfac.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released map blend-mode store and NGLMAT_ALPHA toggle matched exactly with Flags at offset 0 and MapBlendMode at 0x38.

## Outcome

The released material blend-mode setter matched exactly on the first attempt.
