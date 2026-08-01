# KSMemFree__FPv

- Address: `0x001E3280`
- Size: `0x1C` (28 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/ps2main.cpp`
- Reference source: `KS/SRC/ps2main.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `mem-free-1.cpp` |
| 2 | different | 7.1429 | 0.0 | `mem-free-2.cpp` |
| 3 | different | 89.2857 | 100.0 | `mem-free-3.cpp` |

## Outcome

Released free wrapper becomes an 8-byte tail call; three native forms did not reproduce the 28-byte target without a compiler-forcing workaround.
