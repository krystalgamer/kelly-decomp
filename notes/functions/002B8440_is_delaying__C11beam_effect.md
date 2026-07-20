# is_delaying__C11beam_effect

- Address: `0x002B8440`
- Size: `0x28` (40 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.h`
- Reference source: `KS/SRC/beam.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The signed byte mode at offset 0x0a identifies normal and inverted delay states.

## Outcome

The released `beam_effect::is_delaying` predicate matched exactly.
