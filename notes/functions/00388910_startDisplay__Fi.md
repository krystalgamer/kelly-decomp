# startDisplay__Fi

- Address: `0x00388910`
- Size: `0x54` (84 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 36.9048 | 72.2222 | `candidate.cpp` |
| 2 | different | 36.9048 | 72.2222 | `candidate.cpp` |
| 3 | different | 36.9048 | 72.2222 | `candidate.cpp` |
| 4 | different | 36.9048 | 72.2222 | `candidate.cpp` |
| 5 | different | 36.9048 | 72.2222 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released startDisplay loop, sceGsSyncV declaration, and frd/isCountVblank/vblankCount globals. The compiler omitted three target scheduler nops after the SDK call and grouped final stores differently.

### Attempt 2 notes

Expressed the wait loop with an explicit label. Code generation was unchanged.

### Attempt 3 notes

Used a do/while spelling matching the released semantics. The same 72-byte form remained.

### Attempt 4 notes

Made the sync result a local inside an explicit infinite loop. The compiler retained the same call/branch schedule.

### Attempt 5 notes

Used a register-qualified sync result in a do/while loop. The target call-latency nops still could not be reproduced at source level.

## Outcome

Released startDisplay remained blocked by three SDK-call scheduler nops after five source-level attempts.
