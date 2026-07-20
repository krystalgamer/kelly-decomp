# set_created_entity_default_active_status__18particle_generator

- Address: `0x002D2DF0`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/particle.cpp`
- Reference source: `KS/SRC/particle.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal vtable layout preserves the virtual active-status slot and released false value.

## Outcome

The released particle default-active setter matched exactly.
