# nvlUnlockMutex__FPi

- Address: `0x00387480`
- Size: `0x44` (68 bytes)
- Object: `nvl/nvlstream_ps2`
- Debug source: `C:/NVL/ps2/nvlstream_ps2.cpp`
- Reference source: `NVL/PS2/nvlstream_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 67.6471 | 52.9412 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Restored the released DEBUG result lifetime, corrected the linker-carried string aliases, and used a demonstrated empty barrier to prevent the compiler's non-target tail call.

## Outcome

The released mutex unlock matches exactly.
