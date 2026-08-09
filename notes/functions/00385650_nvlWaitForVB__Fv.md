# nvlWaitForVB__Fv

- Address: `0x00385650`
- Size: `0x3C` (60 bytes)
- Object: `nvl/nvlstream_ps2`
- Debug source: `C:/NVL/ps2/nvlstream_ps2.cpp`
- Reference source: `NVL/PS2/nvlstream_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released semaphore sequence uses the shared stream-system declaration and
a local final wait-function pointer.

## Outcome

The compiler barrier was removed.
