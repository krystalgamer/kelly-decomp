# findGlobalData__16MCDetectFrontEndRiT1

- Address: `0x001A47B8`
- Size: `0xEC` (236 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MCDetectFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MCDetectFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate-2-canonical.cpp` |

### Attempt 1 notes

Compiled the exact released invalid-card search and direct-card fallback with source-faithful PS2 card counts, singleton, inline first-card accessor, and hasSystemFile binding. The first candidate matched all 236 bytes and 59 instructions.

### Attempt 2 notes

Revalidated the exact released card search after extending canonical GenericGameSaver and MCDetectFrontEnd declarations.

## Outcome

Matched the exact released memory-card global-data search after extending canonical GenericGameSaver and MCDetectFrontEnd declarations while preserving the compensated singleton binding.
