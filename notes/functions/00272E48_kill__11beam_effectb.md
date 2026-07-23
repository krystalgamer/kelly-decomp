# kill__11beam_effectb

- Address: `0x00272E48`
- Size: `0x54` (84 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.cpp`
- Reference source: `KS/SRC/beam.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released beam_effect::kill body, effect mode values, beam_effect field layout, beam_effect_type virtual declaration, and apply_target_vals slot. The released source matched byte-exactly.

## Outcome

Matched released beam_effect::kill body
