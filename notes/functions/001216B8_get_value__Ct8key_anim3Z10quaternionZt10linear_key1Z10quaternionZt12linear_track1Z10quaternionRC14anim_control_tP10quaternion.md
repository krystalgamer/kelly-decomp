# get_value__Ct8key_anim3Z10quaternionZt10linear_key1Z10quaternionZt12linear_track1Z10quaternionRC14anim_control_tP10quaternion

- Address: `0x001216B8`
- Size: `0xEC` (236 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/anim.h`
- Reference source: `KS/SRC/anim.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate-round1.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate-2-canonical.cpp` |

### Attempt 2 notes

Revalidated the exact quaternion specialization using the existing canonical key_anim/linear_anim/quaternion context and adjacent explicit-instantiation pattern.

## Outcome

Matched the exact released quaternion key-animation value path by reusing the canonical key_anim, linear key/track, quaternion, and interpolation contexts.
