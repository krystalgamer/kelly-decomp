# nslSceVu0UnitMatrix__FPA3_f

- Address: `0x00391718`
- Size: `0x2C` (44 bytes)
- Object: `nsl/nl_ps2`
- Debug source: `C:/NSL/PS2/nl_ps2.cpp`
- Reference source: `NSL/PS2/nl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 77.2727 | 72.7273 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released function is the original VU inline-asm unit-matrix sequence. The final matching-only `nop` keeps the assembler from moving the last `sqc2` into the return delay slot; the target contains that nop and all four stores before `jr`.

## Outcome

The released NSL VU unit-matrix helper matched exactly on attempt two.
