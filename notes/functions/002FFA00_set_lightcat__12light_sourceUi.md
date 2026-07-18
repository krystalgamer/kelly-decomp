# set_lightcat__12light_sourceUi

- Address: `0x002FFA00`
- Size: `0xC` (12 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/light.h`
- Reference source: `KS/SRC/light.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter loads `properties` at offset `0x200` and writes `lightcat` at property offset `0x30`.

## Outcome

The released `light_source::set_lightcat` nested store matched exactly on the first attempt.
