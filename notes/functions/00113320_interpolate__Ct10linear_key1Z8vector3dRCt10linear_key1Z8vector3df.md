# interpolate__Ct10linear_key1Z8vector3dRCt10linear_key1Z8vector3df

- Address: `0x00113320`
- Size: `0x84` (132 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/anim_user.cpp`
- Reference source: `KS/SRC/anim_user.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 62.1212 | 21.2121 | `candidate.cpp` |
| 2 | different | 46.7949 | 10.2564 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released vector-key interpolation matched after using the exact PS2 vector constructor and scalar-multiplication operand order.

## Outcome

The released vector linear-key interpolation matched exactly on the third attempt.
