# set_ext_flag_recursive__6entityUib

- Address: `0x00144AC0`
- Size: `0x24` (36 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal layout places `ext_flags` at offset 0x198 and preserves the released set/clear branch.

## Outcome

The inline `entity::set_ext_flag_recursive` implementation matched exactly.
