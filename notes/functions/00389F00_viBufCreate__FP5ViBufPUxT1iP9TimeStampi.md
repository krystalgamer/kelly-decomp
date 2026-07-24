# viBufCreate__FP5ViBufPUxT1iP9TimeStampi

- Address: `0x00389F00`
- Size: `0x78` (120 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 38.3333 | 16.6667 | `candidate.cpp` |
| 2 | different | 40.8333 | 26.6667 | `candidate.cpp` |
| 3 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 42.5 | 30.0 | `candidate.cpp` |
| 5 | different | 38.3333 | 30.0 | `candidate.cpp` |

## Outcome

Deferred viBufCreate after five source-level attempts; the released buffer fields, uncached tag conversion, semaphore setup, reset call, byte counter, and return reproduced, but the target store and call scheduling did not.
