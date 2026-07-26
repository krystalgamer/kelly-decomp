# Save__12KSWaterState

- Address: `0x00373328`
- Size: `0xDC` (220 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 30.1724 | 10.3448 | `candidate-round1.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate-round2.cpp` |

### Attempt 1 notes

Used the exact released save body and all wave-state globals. GCC kept a separate destination pointer for StageDuration, producing 232 bytes despite matching every scalar assignment.

### Attempt 2 notes

Expressed both stage arrays through one destination pointer with the duration array at a fixed three-float offset. The candidate matched all 220 bytes and all 55 instructions.

## Outcome

Matched the exact water-state snapshot after expressing the paired stage arrays through one destination pointer and consolidating all wave-state globals and offsets.
