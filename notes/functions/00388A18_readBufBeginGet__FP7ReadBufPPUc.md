# readBufBeginGet__FP7ReadBufPPUc

- Address: `0x00388A18`
- Size: `0x48` (72 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 85.5263 | 78.9474 | `candidate.cpp` |
| 2 | different | 38.1579 | 21.0526 | `candidate.cpp` |
| 3 | different | 85.5263 | 78.9474 | `candidate.cpp` |
| 4 | different | 47.5 | 30.0 | `candidate.cpp` |
| 5 | different | 85.5263 | 78.9474 | `candidate.cpp` |

### Attempt 1 notes

The exact released body reused the shared ReadBuf layout and matched through the modulo/store sequence. GCC emitted the final count load before `jr` instead of in its delay slot, adding one nop.

### Attempt 2 notes

An explicit early return changed the branch shape and scored worse.

### Attempt 3 notes

A shared return label retained the original nonmatching final-load schedule.

### Attempt 4 notes

Marking count volatile added loads and did not reproduce the target.

### Attempt 5 notes

A normalized empty barrier before return retained the same extra final nop.

## Outcome

The released ring-buffer getter matches all dataflow, but available GCC does not place the final count load in the return delay slot.
