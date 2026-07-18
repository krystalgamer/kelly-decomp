# get_near_range__C12light_source

- Address: `0x002FF9C0`
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

The released accessor loads `properties` at offset `0x200` and `near_range` at property offset `0x24`.

## Outcome

The released `light_source::get_near_range` nested load matched exactly on the first attempt.
