# audioDecEndPut__FP8AudioDeci

- Address: `0x00389848`
- Size: `0x80` (128 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 36.7188 | 15.625 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released audio-buffer put completion matched after expressing the header minimum with the target operand order.

## Outcome

The released audio decode end-put helper matched exactly on the second attempt.
