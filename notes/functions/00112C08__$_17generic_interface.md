# _$_17generic_interface

- Address: `0x00112C08`
- Size: `0x30` (48 bytes)
- Object: `game/files_ai`
- Debug source: `entity_interface.h`
- Reference source: `KS/SRC/entity_interface.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.3333 | 25.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released generated destructor restores the base vtable and conditionally calls `__builtin_delete`. The carried vtable alias reproduces the negative low half, and the trailing empty barrier prevents a sibling delete call.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `generic_interface` destructor matched exactly on attempt two.
