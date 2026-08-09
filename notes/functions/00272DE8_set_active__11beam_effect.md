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

The released setter uses the shared `beam_effect` declaration and transitions
delay states to their active equivalents.

## Outcome

The local offset-only class was removed; the released implementation still
matches exactly through the canonical beam layout.
