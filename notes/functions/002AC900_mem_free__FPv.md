# mem_free__FPv

- Address: `0x002AC900`
- Size: `0xBC` (188 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/hwosps2/ps2_archalloc.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_archalloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released heap search, semaphore-protected deallocation, and fallback free
match exactly on the first attempt.

## Outcome

Released heap ownership search, semaphore-protected deallocation, and libc fallback reproduce the target exactly.
