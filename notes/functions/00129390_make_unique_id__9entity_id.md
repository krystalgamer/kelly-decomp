# make_unique_id__9entity_id

- Address: `0x00129390`
- Size: `0xB4` (180 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 9.0426 | 2.1277 | `candidate.cpp` |
| 2 | different | 11.7021 | 6.383 | `candidate.cpp` |
| 3 | different | 65.5556 | 62.2222 | `candidate.cpp` |
| 4 | different | 21.7391 | 8.6957 | `candidate.cpp` |
| 5 | different | 73.8889 | 68.8889 | `candidate.cpp` |

### Attempt 1 notes

The exact released local-static entity_id and string-building body compiled from shared declarations, but relocatable local-static storage changed initialization scheduling and added two instructions.

### Attempt 2 notes

Replacing only the compiler-generated local-static storage with fixed released symbols preserved behavior but still duplicated the return-object high address around the guard branch.

### Attempt 3 notes

Hoisting the shared entity_id return pointer removed the duplicate branch path and restored target size, but computed the full pointer too early and changed fourteen scheduled instructions.

### Attempt 4 notes

Staging the released high addresses around string construction delayed the return-object adjustment correctly, but the guard address was rematerialized for its store.

### Attempt 5 notes

Constraining both released high-address values restored target size and improved the schedule, but the remaining prologue and constructor-delay ordering still differed. No per-function class or vtable surrogate was retained.

## Outcome

Deferred unique entity-id generation after five source-level attempts; local-static guard and constructor scheduling did not reproduce the original translation unit.
