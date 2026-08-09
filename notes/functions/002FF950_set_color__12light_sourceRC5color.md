# set_color__12light_sourceRC5color

- Address: `0x002FF950`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/light.h`
- Reference source: `KS/SRC/light.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 38.6364 | 9.0909 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `size44-shared-accessors.cpp` |

### Attempt 2 notes

The shared color and light-property declarations preserve the four scalar
copies into diffuse color at offset 0x4.

## Outcome

The local light layouts were removed.
