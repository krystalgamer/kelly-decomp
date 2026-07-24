# set_created_entity_default_active_status__6entity

- Address: `0x00130CB0`
- Size: `0x6C` (108 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 36.1111 | 22.2222 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read all inactive entity flavors and both set_active virtual dispatch paths. Keeping the released switch calls separate matched on attempt 2.

## Outcome

Matched entity default active status
