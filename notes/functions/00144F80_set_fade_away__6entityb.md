# set_fade_away__6entityb

- Address: `0x00144F80`
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

The base setter contains only an assertion, which disappears in the Final
build. The resulting empty method matched on the first attempt.

## Outcome

The base fade-away setter contains only an assertion, which disappears in the Final build. The empty method matched on the first candidate and preserved the exact ROM checksum.
