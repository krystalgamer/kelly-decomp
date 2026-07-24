# __nw__Q26entity13movement_infoUi

- Address: `0x001277E8`
- Size: `0x88` (136 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released movement-info static allocator matched directly with the generated 16-slot pool registers, four-byte allocation table, and 96-byte stride.

## Outcome

The released entity movement-info allocator matched exactly on the first attempt.
