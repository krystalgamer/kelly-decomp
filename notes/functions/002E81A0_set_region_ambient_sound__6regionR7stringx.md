# set_region_ambient_sound__6regionR7stringx

- Address: `0x002E81A0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/region.cpp`
- Reference source: `KS/SRC/region.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The old-sound block is empty in the released build, leaving only assignment to the string member at offset 0x124.

## Outcome

The released `region::set_region_ambient_sound` assignment wrapper matched exactly on the first attempt.
