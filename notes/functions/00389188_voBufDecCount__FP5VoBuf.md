# voBufDecCount__FP5VoBuf

- Address: `0x00389188`
- Size: `0x20` (32 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.375 | 12.5 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The non-volatile count allowed GCC to reuse the condition load, while the target reloads before decrementing.

### Attempt 2 notes

The shared `VoBuf` layout places volatile `count` at offset 0x0c and preserves
the target reload before decrementing.

## Outcome

The genuine source-local helper matches without an artificial `.globl` bridge.
