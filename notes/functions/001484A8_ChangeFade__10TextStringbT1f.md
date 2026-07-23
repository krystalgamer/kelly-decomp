# ChangeFade__10TextStringbT1f

- Address: `0x001484A8`
- Size: `0x58` (88 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released TextString::ChangeFade body and fade/fade_alpha/fade_timer offsets. Used an extern-C alias only to preserve the old repeated-bool mangling; the body matched byte-exactly on attempt 2.

## Outcome

Matched released TextString fade control
