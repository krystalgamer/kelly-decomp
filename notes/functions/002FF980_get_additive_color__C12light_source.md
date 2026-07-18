# get_additive_color__C12light_source

- Address: `0x002FF980`
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

The released accessor loads `properties` at offset `0x200` and returns `additive_color` at property offset `0x14`.

## Outcome

The released `light_source::get_additive_color` nested address calculation matched exactly on the first attempt.
