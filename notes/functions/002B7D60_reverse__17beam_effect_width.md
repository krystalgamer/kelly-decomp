# reverse__17beam_effect_width

- Address: `0x002B7D60`
- Size: `0x20` (32 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.h`
- Reference source: `KS/SRC/beam.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released reverse operation swaps start/target and negates the delta.

## Outcome

The inline `beam_effect_width::reverse` implementation matched exactly.
