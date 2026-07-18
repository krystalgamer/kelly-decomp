# get_visual_radius__C18particle_generator

- Address: `0x002D2DB8`
- Size: `0xC` (12 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/particle.cpp`
- Reference source: `KS/SRC/particle.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor doubles `visual_radius` from offset `0x2B4` so particles can spawn before visibility.

## Outcome

The released `particle_generator::get_visual_radius` load-and-double matched exactly on the first attempt.
