# get_damage_capsule__6entity

- Address: `0x00144E60`
- Size: `0x8` (8 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The base method asserts in non-Final builds, then returns null. With
assertions removed, the null pointer return matches directly.

## Outcome

The base damage-capsule method asserts only outside Final builds and then returns null. The null pointer implementation matched on the first attempt and preserved the exact integrated ROM.
