# is_vibrator_present__C18AISurferController

- Address: `0x00112D20`
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

The AI controller reports that no vibrator is present. Returning `false`
matched the target delay-slot zeroing instruction.

## Outcome

The AI controller reports that no vibrator is present. Returning false matched on the first candidate and retained the exact target ROM checksum after integration.
