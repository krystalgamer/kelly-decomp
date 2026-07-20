# _$_10anim_maker

- Address: `0x0011DDE8`
- Size: `0x30` (48 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/anim_maker.cpp`
- Reference source: `KS/SRC/anim_maker.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released empty destructor restores its vtable and conditionally calls `__builtin_delete`; the carried vtable alias and trailing barrier reproduce the generated frame exactly.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `anim_maker` destructor matched exactly on the first attempt.
