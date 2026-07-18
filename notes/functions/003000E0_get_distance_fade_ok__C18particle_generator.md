# get_distance_fade_ok__C18particle_generator

- Address: `0x003000E0`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/particle.h`
- Reference source: `KS/SRC/particle.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released particle override disables far-plane distance fading.

## Outcome

The released `particle_generator::get_distance_fade_ok` predicate matched exactly on the first attempt.
