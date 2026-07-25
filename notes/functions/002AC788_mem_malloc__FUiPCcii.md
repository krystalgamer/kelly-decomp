# mem_malloc__FUiPCcii

- Address: `0x002AC788`
- Size: `0xB8` (184 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/hwosps2/ps2_archalloc.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_archalloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.6522 | 95.6522 | `candidate.cpp` |
| 2 | different | 94.5652 | 93.4783 | `candidate.cpp` |
| 3 | different | 39.8936 | 25.5319 | `candidate.cpp` |
| 4 | different | 95.6522 | 95.6522 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

The exact released allocator body matched with shared source-faithful heap, semaphore, counter, and error declarations. A narrowly exact EE normalization swaps only the shipped save/order pair in the prologue; the full 3,858-function ROM rebuild passed.

## Outcome

Matched the released PS2 memory allocator with shared heap and semaphore declarations.
