# readBufEndPut__FP7ReadBufi

- Address: `0x003889D0`
- Size: `0x44` (68 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 77.7778 | 0.0 | `candidate.cpp` |
| 2 | different | 22.2222 | 0.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt notes

Attempt one used the released body and layout with a conventional ternary `min`. Attempt two expanded the expression directly. Attempt three restored the SDK helper's assignment-form control flow, which removed the premature argument copy and matched target scheduling.

## Outcome

The released read-buffer put completion matches exactly.
