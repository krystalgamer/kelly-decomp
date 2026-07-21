# ReadLong__FPUcRi

- Address: `0x001533B8`
- Size: `0x3C` (60 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 60.0 | 6.6667 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released combined little-endian expression verbatim. The compiler preserved size but reordered byte loads as 1,3,2,0 and combined the high byte early rather than the target 1,0,2,3 accumulation schedule.

### Attempt 2 notes

Expressed the same released little-endian decode as sequential source-level OR assignments. This preserved byte load and accumulation order and matched all 60 bytes exactly.

## Outcome

The released little-endian 32-bit reader matches exactly when expressed as sequential source-level byte accumulation followed by index advancement.
