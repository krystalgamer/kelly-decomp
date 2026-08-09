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
| 1 | matched | 100.0 | 100.0 | `size48-ai-core.cpp` |

### Attempt 1 notes

The shared linear-key and quaternion declarations pass both key values to the
released `slerp` helper and preserve the hidden return.

## Outcome

The local hidden-return bridge was removed.
