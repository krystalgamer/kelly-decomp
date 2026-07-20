# readBufEndGet__FP7ReadBufi

- Address: `0x00388A60`
- Size: `0x24` (36 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 72.2222 | 33.3333 | `candidate.cpp` |
| 2 | different | 75.0 | 70.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate exposed a register-selection, global carry, conversion, or OR-association mismatch.

### Attempt 2 notes

The second candidate isolated the remaining return, conversion, or register-allocation mismatch.

### Attempt 3 notes

A minimal layout preserves the count at offset 0x50004 and the released saturating decrement.

## Outcome

The released `readBufEndGet` implementation matched exactly.
