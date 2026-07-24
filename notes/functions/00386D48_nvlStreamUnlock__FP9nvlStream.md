# nvlStreamUnlock__FP9nvlStream

- Address: `0x00386D48`
- Size: `0x88` (136 bytes)
- Object: `nvl/nvlstream_ps2`
- Debug source: `C:/NVL/ps2/nvlstream_ps2.cpp`
- Reference source: `NVL/PS2/nvlstream_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 83.0882 | 79.4118 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released NVL stream unlock matched after blocking the final mutex-unlock tail call while preserving both assertions and lock state update.

## Outcome

The released NVL stream unlock matched exactly on the second attempt.
