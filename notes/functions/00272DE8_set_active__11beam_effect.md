# set_active__11beam_effect

- Address: `0x00272DE8`
- Size: `0x30` (48 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.cpp`
- Reference source: `KS/SRC/beam.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter transitions signed-byte delay states 1/-1 to active states 2/-2 at offset 0xa.

## Outcome

The released `beam_effect::set_active` implementation matched exactly on the first attempt.
