# os_free32__FPv

- Address: `0x001DFA38`
- Size: `0x1C` (28 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_alloc.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_alloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The aligned-free wrapper uses the same `arch_free` backend; an explicit barrier preserves the released frame.

## Outcome

The released `os_free32` platform wrapper matched exactly on the first attempt.
