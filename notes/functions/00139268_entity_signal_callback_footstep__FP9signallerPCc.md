# entity_signal_callback_footstep__FP9signallerPCc

- Address: `0x00139268`
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

The callback body is removed by `ECULL`. It remains `static` in C++, while
an assembler visibility directive exports the symbol so the per-function
split can satisfy references that originally stayed inside one unity object.

## Outcome

The ECULL build removes the footstep callback body. The original static function is exported only for the per-function split, matched on the first attempt, and preserved the exact full ROM checksum.
