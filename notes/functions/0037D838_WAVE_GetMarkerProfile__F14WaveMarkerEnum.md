# WAVE_GetMarkerProfile__F14WaveMarkerEnum

- Address: `0x0037D838`
- Size: `0x58` (88 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released marker profile getter, WaveMarkerEnum mangling, breaker/min/max globals, marker stride/x offset, and conditional reflection. Correcting the enum type matched on attempt 2.

## Outcome

Matched released wave marker profile getter
