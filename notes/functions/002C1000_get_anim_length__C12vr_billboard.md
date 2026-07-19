# get_anim_length__C12vr_billboard

- Address: `0x002C1000`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/billboard.cpp`
- Reference source: `KS/SRC/billboard.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal layout places `my_material` at offset 0x18; retaining the result across a barrier preserves the wrapper.

## Outcome

The released `vr_billboard::get_anim_length` wrapper matched exactly on the first attempt.
