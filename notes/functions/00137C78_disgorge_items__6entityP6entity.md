# disgorge_items__6entityP6entity

- Address: `0x00137C78`
- Size: `0x20` (32 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.875 | 87.5 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate used the effective string address without the `%hi` carry required by its negative low half.

### Attempt 2 notes

The disabled inventory path leaves only the released diagnostic call using the target string address.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `entity::disgorge_items` diagnostic stub matched exactly.
