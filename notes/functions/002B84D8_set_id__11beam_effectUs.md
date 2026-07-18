# set_id__11beam_effectUs

- Address: `0x002B84D8`
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

The released setter stores the halfword `id` field at offset `0x8`.

## Outcome

The released `beam_effect::set_id` halfword setter matched exactly on the first attempt.
