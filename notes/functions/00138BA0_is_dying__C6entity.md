# is_dying__C6entity

- Address: `0x00138BA0`
- Size: `0x8` (8 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The base entity never reports a dying state in this build. Returning `false`
matched the target zero result immediately.

## Outcome

The base entity never reports a dying state in this build. Returning false matched on the first candidate and preserved the byte-identical integrated ROM.
