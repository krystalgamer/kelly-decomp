# get_item__C6entityUi

- Address: `0x00137BA0`
- Size: `0x3C` (60 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.6667 | 60.0 | `candidate.cpp` |
| 2 | different | 78.3333 | 40.0 | `candidate.cpp` |
| 3 | different | 22.0588 | 11.7647 | `candidate.cpp` |
| 4 | different | 80.0 | 40.0 | `candidate.cpp` |
| 5 | different | 78.3333 | 46.6667 | `candidate.cpp` |

### Attempt 1 notes

Used the released inline container/vector abstractions. Control flow and offsets matched, but the compiler copied the index from a1 to v1 in the first branch delay slot and used different registers for vector begin and indexing.

### Attempt 2 notes

Flattened the vector operations into source-level pointer arithmetic. This made the compiler overwrite a0 with the container pointer too early, still copied the index to v1, and reversed the begin/end load order.

### Attempt 3 notes

Inserted an empty barrier after the null guard to reproduce the target nop delay slot. It overconstrained scheduling, expanded the function to 68 bytes, and substantially changed the register plan, so it is unsuitable.

### Attempt 4 notes

Bound the index and begin pointer to their ABI registers. This recovered the target's nop delay slot and a0 begin pointer, but the compiler loaded the container directly into a0, reversed begin/end loads, and used a1 as the final address.

### Attempt 5 notes

Also bound the container pointer to v0. The null path and initial load now matched, but EE GCC still loaded vector end before begin and chose v1/a1 for the remaining arithmetic rather than the target v0/v1 plan. Five source-only candidates were exhausted.

## Outcome

The released container bounds check and vector indexing were reconstructed with correct behavior and offsets, but five source-only variants could not reproduce the target old-GCC register allocation and begin/end load schedule.
