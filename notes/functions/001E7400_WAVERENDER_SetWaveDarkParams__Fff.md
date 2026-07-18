# WAVERENDER_SetWaveDarkParams__Fff

- Address: `0x001E7400`
- Size: `0x14` (20 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_waverender.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_waverender.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter writes two wave-dark globals through local absolute equates.

## Outcome

The released `WAVERENDER_SetWaveDarkParams` global stores matched exactly on the first attempt.
