# render_passes_needed__C18particle_generator

- Address: `0x002D1D70`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/particle.cpp`
- Reference source: `KS/SRC/particle.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released particle renderer always requests the translucent pass (`2`).

## Outcome

The released `particle_generator::render_passes_needed` constant matched exactly on the first attempt.
