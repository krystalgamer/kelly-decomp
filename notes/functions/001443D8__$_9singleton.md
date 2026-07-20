# _$_9singleton

- Address: `0x001443D8`
- Size: `0x30` (48 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/singleton.h`
- Reference source: `KS/SRC/singleton.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released empty destructor restores its vtable and conditionally calls `__builtin_delete`; the carried vtable alias and trailing barrier reproduce the generated frame.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `singleton` destructor matched exactly on the first attempt.
