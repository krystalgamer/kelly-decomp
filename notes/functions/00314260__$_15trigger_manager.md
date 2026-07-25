# _$_15trigger_manager

- Address: `0x00314260`
- Size: `0xA0` (160 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/trigger.h`
- Reference source: `KS/SRC/trigger.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.1489 | 6.383 | `candidate.cpp` |
| 2 | different | 42.5 | 25.0 | `candidate.cpp` |
| 3 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Restored vector storage recycling and deleting-destructor behavior using count-derived byte sizing and exact allocator bins.

## Outcome

Matched trigger manager destruction
