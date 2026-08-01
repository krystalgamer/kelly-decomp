# KSMemAllocNGL__FUiUi

- Address: `0x001E31B8`
- Size: `0x70` (112 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/ps2main.cpp`
- Reference source: `KS/SRC/ps2main.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 70.5357 | 75.0 | `mem-alloc-ngl-1.cpp` |
| 2 | different | 43.75 | 39.2857 | `mem-alloc-ngl-2.cpp` |
| 3 | different | 70.5357 | 75.0 | `mem-alloc-ngl-3.cpp` |

## Outcome

Released NGL allocator logic was retried with canonical 96-byte mesh and 304-byte texture layouts; three forms still differed because isolated literals are not at released addresses.
