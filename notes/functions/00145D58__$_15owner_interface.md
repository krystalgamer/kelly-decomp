# _$_15owner_interface

- Address: `0x00145D58`
- Size: `0x34` (52 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/owner_interface.h`
- Reference source: `KS/SRC/owner_interface.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released empty derived destructor matched through its inlined base cleanup: restoring the generic-interface vtable, clearing `my_entity`, and conditionally deleting. The adjusted vtable alias reproduces the HI16 carry, and the trailing empty barrier preserves the framed call.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released owner-interface destructor matched exactly on the first attempt.
