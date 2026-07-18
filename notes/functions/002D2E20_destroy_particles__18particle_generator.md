# destroy_particles__18particle_generator

- Address: `0x002D2E20`
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

The released method notes that destruction moved to the destructor and has an empty body.

## Outcome

The released empty `particle_generator::destroy_particles` method matched exactly on the first attempt.
