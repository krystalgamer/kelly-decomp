# _$_18ammo_points_attrib

- Address: `0x00313708`
- Size: `0x30` (48 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/character_soft_attribs.h`
- Reference source: `KS/SRC/character_soft_attribs.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released generated destructor restores its vtable at offset 0xc and conditionally calls `__builtin_delete`; the carried vtable alias and trailing barrier preserve the target frame.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `_$_18ammo_points_attrib` destructor matched exactly on the first attempt.
