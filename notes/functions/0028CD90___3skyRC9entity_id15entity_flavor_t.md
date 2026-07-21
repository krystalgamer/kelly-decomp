# __3skyRC9entity_id15entity_flavor_t

- Address: `0x0028CD90`
- Size: `0x38` (56 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/sky.cpp`
- Reference source: `KS/SRC/sky.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released constructor delegates to the four-argument entity constructor with zero flags and then installs the sky vtable. The recovered base-constructor symbol, vptr offset, and carried vtable alias match directly.

## Outcome

The sky constructor matches with its released entity-base initialization and sky vtable installation.
