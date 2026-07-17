# is_connected__C18AISurferController

- Address: `0x00112D28`
- Size: `0x8` (8 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/AIController.h`
- Reference source: `KS/SRC/AIController.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The AI controller is synthetic and always reports itself connected.
Returning `true` matched the target constant return on the first attempt.

## Outcome

The synthetic AI controller always reports itself connected. Returning true matched on the first attempt and kept the integrated ROM byte-identical.
