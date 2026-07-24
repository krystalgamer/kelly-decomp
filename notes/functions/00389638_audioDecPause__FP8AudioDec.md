# audioDecPause__FP8AudioDec

- Address: `0x00389638`
- Size: `0x84` (132 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 60.6061 | 57.5758 | `candidate.cpp` |
| 3 | different | 87.8788 | 87.8788 | `candidate.cpp` |
| 4 | different | 87.8788 | 87.8788 | `candidate.cpp` |
| 5 | different | 93.9394 | 93.9394 | `candidate.cpp` |

## Outcome

Deferred the released audio-decoder pause path after five source-level attempts; both remote commands and pause-position update were reproduced, but two initial argument setup instructions remained reversed.
