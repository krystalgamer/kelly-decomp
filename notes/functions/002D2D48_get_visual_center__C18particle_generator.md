# get_visual_center__C18particle_generator

- Address: `0x002D2D48`
- Size: `0x24` (36 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/particle.cpp`
- Reference source: `KS/SRC/particle.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.4444 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The POD vector return used an aggregate copy instead of the target scalar copy constructor.

### Attempt 2 notes

A minimal layout places the absolute visual center at offset 0x29c and preserves the by-value copy.

## Outcome

The released particle-generator visual-center accessor matched exactly.
