# is_alive__C11beam_effect

- Address: `0x002B8430`
- Size: `0xC` (12 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.h`
- Reference source: `KS/SRC/beam.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released predicate tests signed-byte `mode` at offset `0xA` against non-dead states.

## Outcome

The released `beam_effect::is_alive` predicate matched exactly on the first attempt.
