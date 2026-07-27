# WAVE_HeightPerturb__Ff

- Address: `0x003780F0`
- Size: `0x128` (296 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released `WAVE_HeightPerturb` body from `kelly-slaters-pro-surfer/KS/SRC/ks/wave.cpp:3735-3757` with released-compatible schedule, wave-data, stage, constant, and symbol declarations. It reproduced all 296 target bytes and all 74 instructions.

## Outcome

The exact released wave-height perturbation and declaration context reproduce the target at 100%.
