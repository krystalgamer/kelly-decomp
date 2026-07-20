# interpolate__Ct10linear_key1Z10quaternionRCt10linear_key1Z10quaternionf

- Address: `0x001133A8`
- Size: `0x30` (48 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/anim_user.cpp`
- Reference source: `KS/SRC/anim_user.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A symbol-preserving explicit hidden-return bridge passes each key's quaternion at offset 0x4 to the released `slerp` helper and returns the output object.

## Outcome

The released quaternion linear-key interpolation matched exactly on the first attempt.
