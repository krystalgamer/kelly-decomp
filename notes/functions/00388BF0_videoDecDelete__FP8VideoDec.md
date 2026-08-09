# videoDecDelete__FP8VideoDec

- Address: `0x00388BF0`
- Size: `0x34` (52 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released ViBuf and MPEG deletions use the shared NVL decoder declaration.

## Outcome

The local decoder layout was removed; the released helper remains exact.
