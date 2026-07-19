# reverse__17beam_effect_alpha

- Address: `0x002B7FC8`
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

The released reverse operation swaps the byte alpha endpoints and negates the float delta.

## Outcome

The inline `beam_effect_alpha::reverse` implementation matched exactly.
