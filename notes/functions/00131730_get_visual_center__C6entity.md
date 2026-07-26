# get_visual_center__C6entity

- Address: `0x00131730`
- Size: `0xBC` (188 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.8085 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released visual-center body matches exactly after resolving the entity age
and po transform calls to their target addresses.

## Outcome

Released entity visual-center fallback, virtual center lookup, and pose transform reproduce the target exactly.
