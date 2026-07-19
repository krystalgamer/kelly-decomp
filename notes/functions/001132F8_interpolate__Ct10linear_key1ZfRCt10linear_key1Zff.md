# interpolate__Ct10linear_key1ZfRCt10linear_key1Zff

- Address: `0x001132F8`
- Size: `0x24` (36 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/anim_user.cpp`
- Reference source: `KS/SRC/anim_user.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The float specialization linearly blends the value fields at offset four.

## Outcome

The `linear_key<float>::interpolate` specialization matched exactly.
