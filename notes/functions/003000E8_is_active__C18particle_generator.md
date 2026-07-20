# is_active__C18particle_generator

- Address: `0x003000E8`
- Size: `0x28` (40 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/particle.h`
- Reference source: `KS/SRC/particle.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal old-GCC vtable layout preserves the virtual visibility adjustment and function slots.

## Outcome

The released `particle_generator::is_active` wrapper matched exactly.
