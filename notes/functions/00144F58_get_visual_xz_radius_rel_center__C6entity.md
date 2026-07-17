# get_visual_xz_radius_rel_center__C6entity

- Address: `0x00144F58`
- Size: `0x8` (8 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The cached visual XZ radius is stored at entity offset `0x144`. Returning
that float matched the target load immediately.

## Outcome

The cached visual XZ radius is stored at entity offset 0x144. The first layout candidate matched exactly and retained the byte-identical full ROM.
