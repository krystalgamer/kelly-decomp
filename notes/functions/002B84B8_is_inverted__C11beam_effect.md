# is_inverted__C11beam_effect

- Address: `0x002B84B8`
- Size: `0x14` (20 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.h`
- Reference source: `KS/SRC/beam.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released predicate recognizes encoded inverted modes `-2` and `-1` by adding two in unsigned-byte space.

## Outcome

The released `beam_effect::is_inverted` byte-range predicate matched exactly on the first attempt.
