# deconstruct__16vert_buf_xformed

- Address: `0x001E2C30`
- Size: `0x38` (56 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_rasterize.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_rasterize.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released source-level conditional `delete[]` and pointer clear use the same recovered layout as the untransformed vertex buffer. Resolving the compiler-generated vector-delete builtin to its ELF address produces the exact function.

## Outcome

The transformed vertex-buffer deconstruction matches with its released conditional array delete and pointer clear.
