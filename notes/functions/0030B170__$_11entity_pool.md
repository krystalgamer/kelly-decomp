# _$_11entity_pool

- Address: `0x0030B170`
- Size: `0x58` (88 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/entity_maker.cpp`
- Reference source: `KS/SRC/entity_maker.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 62.5 | 53.8462 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released entity_pool destructor and list/allocator declarations. Reconstructed list clear, sentinel return to the allocator free list, and deleting mode; adding a non-emitting post-delete continuation matched on attempt 2.

## Outcome

Matched generated entity_pool destructor
