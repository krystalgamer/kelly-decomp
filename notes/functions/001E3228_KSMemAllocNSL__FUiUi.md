# KSMemAllocNSL__FUiUi

- Address: `0x001E3228`
- Size: `0x24` (36 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/ps2main.cpp`
- Reference source: `KS/SRC/ps2main.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 83.3333 | 100.0 | `mem-alloc-nsl-1.cpp` |
| 2 | different | 83.3333 | 100.0 | `mem-alloc-nsl-2.cpp` |
| 3 | different | 83.3333 | 100.0 | `mem-alloc-nsl-3.cpp` |

## Outcome

Released NSL allocator wrapper compiles with matching instructions but literal placement differs; three source forms were tried without forced symbols.
