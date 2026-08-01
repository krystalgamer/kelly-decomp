# KSMemAlloc__FUiUi

- Address: `0x001E3190`
- Size: `0x24` (36 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/ps2main.cpp`
- Reference source: `KS/SRC/ps2main.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 83.3333 | 100.0 | `mem-alloc-1.cpp` |
| 2 | different | 83.3333 | 100.0 | `mem-alloc-2.cpp` |
| 3 | different | 83.3333 | 100.0 | `mem-alloc-3.cpp` |

## Outcome

Released allocator wrapper compiles with matching instructions but repository-local literal placement differs; three source forms were tried without absolute string symbols.
