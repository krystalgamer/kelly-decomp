# get_id__C11beam_effect

- Address: `0x002B84D0`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.h`
- Reference source: `KS/SRC/beam.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor loads the halfword `id` field at offset `0x8`.

## Outcome

The released `beam_effect::get_id` halfword accessor matched exactly on the first attempt.
