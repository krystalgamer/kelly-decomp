# deconstruct__8vert_buf

- Address: `0x001E2AA0`
- Size: `0x38` (56 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_rasterize.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_rasterize.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 94.6429 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released source-level `delete[]` generated the exact control flow and builtin vector-delete call. Resolving the compiler-generated builtin symbol to its ELF address completed the byte match without changing the C++ body.

## Outcome

The vertex-buffer deconstruction matches with its released conditional array delete and pointer clear.
