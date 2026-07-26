# get_value__Ct8key_anim3Z8vector3dZt10linear_key1Z8vector3dZt12linear_track1Z8vector3dRC14anim_control_tP8vector3d

- Address: `0x001212D8`
- Size: `0xDC` (220 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/anim.h`
- Reference source: `KS/SRC/anim.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released `key_anim::get_value(const anim_control_t&, animatable_t*)`
template body with concrete `vector3d`, `linear_key<vector3d>`,
`linear_track<vector3d>`, `anim_control_t`, and polymorphic `anim` declarations.
Reused the established vector linear-key interpolation address
`0x00113320`. The first candidate matched all 220 bytes and all 55
instructions exactly.

## Outcome

Matched the exact released vector key-animation lookup using consolidated animation, linear-key, track, and vector declarations.
