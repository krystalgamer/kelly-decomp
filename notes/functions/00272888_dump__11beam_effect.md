# dump__11beam_effect

- Address: `0x00272888`
- Size: `0x44` (68 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.cpp`
- Reference source: `KS/SRC/beam.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released null guard, delete expression, and pointer reset with the released virtual destructor shape; it matched on attempt one.

## Outcome

The released beam effect dump matches exactly.
