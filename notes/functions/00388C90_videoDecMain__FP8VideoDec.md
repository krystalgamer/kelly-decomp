# videoDecMain__FP8VideoDec

- Address: `0x00388C90`
- Size: `0x7C` (124 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 49.1935 | 18.5185 | `candidate.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 37.0968 | 18.5185 | `candidate.cpp` |
| 4 | different | 57.2581 | 40.7407 | `candidate.cpp` |
| 5 | different | 91.129 | 40.7407 | `candidate.cpp` |

## Outcome

Deferred the released video decode thread main after five source-level attempts; the exact call sequence and empty wait loop reached 91.13%, but global-pointer materialization and loop guard registers differed.
