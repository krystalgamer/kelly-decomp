# voBufReset__FP5VoBuf

- Address: `0x00389028`
- Size: `0x10` (16 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 37.5 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released static reset clears `count` at `0xC` then `write` at `0x8` without filling the return delay slot. Volatile fields preserved that ordering on attempt two; `.globl` retains the split symbol.

## Outcome

The released `voBufReset` state clears matched on attempt two after preserving the unscheduled store order.
