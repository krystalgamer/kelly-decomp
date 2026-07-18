# set_thickness__4beamf

- Address: `0x00271790`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.cpp`
- Reference source: `KS/SRC/beam.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter assigns `thickness` at offset `0x200`.

## Outcome

The released `beam::set_thickness` setter matched exactly on the first attempt.
