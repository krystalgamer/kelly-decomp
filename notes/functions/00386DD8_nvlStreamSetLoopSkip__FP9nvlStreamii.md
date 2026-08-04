# nvlStreamSetLoopSkip__FP9nvlStreamii

- Address: `0x00386DD8`
- Size: `0x20` (32 bytes)
- Object: `nvl/nvlstream_ps2`
- Debug source: `C:/NVL/ps2/nvlstream_ps2.cpp`
- Reference source: `NVL/PS2/nvlstream_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 81.25 | 62.5 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate exposed a helper-symbol, independent-store, or call-delay scheduling mismatch.

### Attempt 2 notes

The shared stream layout preserves the loop flag, skip, and rewind fields.
Assigning `lp_skip` before `requireRewind` naturally reproduces target order.

## Outcome

The released implementation matches without a local layout or compiler barrier.
