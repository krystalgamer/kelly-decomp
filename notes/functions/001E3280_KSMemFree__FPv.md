# KSMemFree__FPv

- Address: `0x001E3280`
- Size: `0x1C` (28 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/ps2main.cpp`
- Reference source: `KS/SRC/ps2main.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The platform `free` macro resolves to `arch_free`; an explicit barrier preserves the released callback wrapper.

## Outcome

The released `KSMemFree` callback wrapper matched exactly on the first attempt.
