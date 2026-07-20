# frame_done__18particle_generator

- Address: `0x00300148`
- Size: `0x28` (40 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/particle.h`
- Reference source: `KS/SRC/particle.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.5 | 10.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The implicit POD assignment used 64-bit aggregate copies instead of the target scalar float sequence.

### Attempt 2 notes

A minimal layout copies the source position at +0x30 into `last_position` at 0x2b8.

## Outcome

The released `particle_generator::frame_done` implementation matched exactly.
