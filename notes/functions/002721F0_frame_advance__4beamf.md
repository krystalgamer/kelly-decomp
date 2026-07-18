# frame_advance__4beamf

- Address: `0x002721F0`
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

The released implementation is gated by the disabled `BEAMCULL` configuration.

## Outcome

The configuration-empty `beam::frame_advance` method matched exactly on the first attempt.
