# frame_advance__10game_clockf

- Address: `0x001E2E80`
- Size: `0x44` (68 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_timer.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_timer.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 9.7826 | 0.0 | `candidate.cpp` |
| 3 | different | 80.8824 | 100.0 | `candidate.cpp` |
| 4 | different | 95.5882 | 82.3529 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

Used the exact released arithmetic. The final candidate gives the isolated absolute static aliases the required carried high half so their instructions reproduce the linker-resolved released addresses exactly.

## Outcome

The released game clock frame advance matches its frame increment, delta store, signed tick truncation, and 64-bit accumulation.
