# nvlPlayMovie__FP8nvlMoviePFP8nvlMoviePUiPv_PvPvi

- Address: `0x0038B7C8`
- Size: `0xC4` (196 bytes)
- Object: `nvl/nvl_ps2`
- Debug source: `C:/NVL/ps2/nvl_ps2.cpp`
- Reference source: `NVL/PS2/nvl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 63.2653 | 48.9796 | `candidate.cpp` |
| 2 | different | 68.8776 | 57.1429 | `candidate.cpp` |
| 3 | different | 76.0204 | 67.3469 | `candidate.cpp` |
| 4 | different | 76.5306 | 67.3469 | `candidate.cpp` |
| 5 | different | 75.0 | 65.3061 | `candidate.cpp` |

## Outcome

Five attempts reconstructed NVL playback setup, but flag-store and stream-call scheduling remained one instruction short of the target.
