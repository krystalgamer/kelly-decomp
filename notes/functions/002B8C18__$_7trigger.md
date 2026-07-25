# _$_7trigger

- Address: `0x002B8C18`
- Size: `0x9C` (156 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.h`
- Reference source: `KS/SRC/trigger.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 83.9744 | 79.4872 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Reconstructed the generated trigger destructor with exact region-tree cleanup, allocator recycling, string destruction, and non-tail base destruction.

## Outcome

Matched trigger destruction
