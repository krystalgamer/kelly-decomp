# mem_return_largest_available_block__FPUi

- Address: `0x002ACF80`
- Size: `0x38` (56 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/archalloc.cpp`
- Reference source: `KS/SRC/archalloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released helper stores the tested maximum size, allocates that amount through the PS2 `osmem_alloc`/`malloc` symbol, and clears the reported size on failure. The source-level implementation and local binding match directly.

## Outcome

The largest-available-block helper matches with its released size probe, allocation, and failure clear.
