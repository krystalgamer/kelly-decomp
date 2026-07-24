# kill_all_effects__4beamb

- Address: `0x00272608`
- Size: `0x68` (104 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.cpp`
- Reference source: `KS/SRC/beam.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact effects vector offsets, iterator loop, null check, and beam_effect kill slot. It matched on attempt 1.

## Outcome

Matched beam effect cleanup
