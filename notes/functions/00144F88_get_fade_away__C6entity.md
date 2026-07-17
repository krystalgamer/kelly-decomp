# get_fade_away__C6entity

- Address: `0x00144F88`
- Size: `0x8` (8 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The base entity never fades away and returns `false`. The constant fallback
matched on the first candidate.

## Outcome

The base entity never fades away and returns false. The first candidate matched exactly and preserved the byte-identical integrated ROM.
