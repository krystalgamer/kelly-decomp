# set_texture__4beamRC7stringx

- Address: `0x002721E8`
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

The released PS2 branch leaves the string texture setter empty.

## Outcome

The released empty PS2 `beam::set_texture` overload matched exactly on the first attempt.
