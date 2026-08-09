# zip_filter_alloc__FPvUiUi

- Address: `0x00356648`
- Size: `0x2C` (44 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/zip_filter.cpp`
- Reference source: `KS/SRC/zip_filter.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `size44-vm-widget-core.cpp` |

### Attempt 1 notes

The released `malloc(items * size)` macro expands to `arch_malloc` with source-file pointer `0x00503E50` and line zero. The trailing empty compiler barrier preserves the target normal call frame.

### Attempt 2 notes

A local allocator function pointer preserves the normal call frame without a
compiler barrier.

## Outcome

The compiler barrier was removed.
