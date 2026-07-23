# _$_12entity_maker

- Address: `0x003082B0`
- Size: `0x58` (88 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/entity_maker.cpp`
- Reference source: `KS/SRC/entity_maker.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released entity_maker empty destructor, vtable/entity_pool_set offsets, pool-set destructor, and deleting-mode behavior. The generated sequence matched byte-exactly.

## Outcome

Matched generated entity_maker destructor
