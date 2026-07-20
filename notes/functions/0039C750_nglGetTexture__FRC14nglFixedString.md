# nglGetTexture__FRC14nglFixedString

- Address: `0x0039C750`
- Size: `0x30` (48 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 81.25 | 75.0 | `candidate.cpp` |
| 2 | different | 61.5385 | 53.8462 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released positive `Search` condition and immediate return. EE GCC emitted an equivalent `beqzl` with zero in the delay slot, while the target uses `bnezl` with the instance value load in its delay slot (81.25%).

### Attempt 2 notes

Introduced a zero-initialized result variable and assigned it when the instance exists. This prevented branch-likely selection, added a result-register move, and grew the function to 52 bytes.

### Attempt 3 notes

The released texture-bank lookup matched exactly when expressed as the equivalent null guard, preserving the target `bnezl` value-load schedule. The bank alias uses `0x004BBFF8` so isolated absolute assembly reproduces the target's HI16 relocation carry while the signed LO16 addresses the real `0x004ABFF8` object.

## Outcome

The released NGL texture-bank lookup matched exactly with the recovered instance value offset.
