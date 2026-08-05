# clear__10string_buf

- Address: `0x0034D358`
- Size: `0x28` (40 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.0 | 10.0 | `size40-utilities.cpp` |
| 2 | matched | 100.0 | 100.0 | `size40-string-buf-clear-2.cpp` |

### Attempt 1 notes

The exact released call collapses to a 20-byte sibling jump.

### Attempt 2 notes

An ordinary local C-library function pointer retains the target call frame.

## Outcome

The shared buffer layout matches without a compiler barrier.
