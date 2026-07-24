# UNDERWATER_CameraUnderwater__Fi

- Address: `0x0036DA88`
- Size: `0x5C` (92 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/underwtr.cpp`
- Reference source: `KS/SRC/ks/underwtr.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 82.2917 | 75.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released frontend guard and binary replay guard, camera array/global addresses, and bool layout. Correct bool typing matched on attempt 2.

## Outcome

Matched underwater camera query
