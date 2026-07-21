# get_last_position__C18particle_generator

- Address: `0x00300110`
- Size: `0x38` (56 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/particle.h`
- Reference source: `KS/SRC/particle.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released ternary returns the saved generator position when valid and otherwise the inline absolute source position. The recovered member offsets and vector copy behavior match exactly.

## Outcome

The original saved-position-or-absolute-position ternary matches exactly with the recovered particle generator layout and vector copy.
