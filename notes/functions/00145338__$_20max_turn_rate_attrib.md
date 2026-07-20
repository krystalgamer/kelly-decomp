# _$_20max_turn_rate_attrib

- Address: `0x00145338`
- Size: `0x30` (48 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity_hard_attribs.h`
- Reference source: `KS/SRC/entity_hard_attribs.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released generated destructor restores the shared float-attribute vtable at offset 0x4 and conditionally calls `__builtin_delete`; the carried alias and trailing barrier preserve the target frame.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `max_turn_rate_attrib` destructor matched exactly on the first attempt.
