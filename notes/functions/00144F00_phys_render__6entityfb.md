# phys_render__6entityfb

- Address: `0x00144F00`
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

The base physical-render hook is intentionally empty; derived actor types
provide meaningful implementations. The full signature matched at once.

## Outcome

The base physical-render hook is intentionally empty and is overridden by meaningful actor implementations. The first full-signature candidate matched exactly and preserved the integrated ROM checksum.
