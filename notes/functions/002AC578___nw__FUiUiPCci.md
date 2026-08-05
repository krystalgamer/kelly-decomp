# __nw__FUiUiPCci

- Address: `0x002AC578`
- Size: `0x24` (36 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/hwosps2/ps2_archalloc.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_archalloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size36-memory.cpp` |

### Attempt 1 notes

The released placement-like overload directly returns `mem_malloc(size, description, line, 0)` and naturally retains the target call frame.

## Outcome

The four-argument global operator new matched exactly.
