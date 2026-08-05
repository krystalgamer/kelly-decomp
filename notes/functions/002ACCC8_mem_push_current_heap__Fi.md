# mem_push_current_heap__Fi

- Address: `0x002ACCC8`
- Size: `0x28` (40 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/archalloc.cpp`
- Reference source: `KS/SRC/archalloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 10.0 | 10.0 | `size40-allocators.cpp` |
| 2 | matched | 100.0 | 100.0 | `size40-allocator-push-2.cpp` |
| 3 | different | 14.2857 | 0.0 | `size40-allocator-push-3.cpp` |

### Attempt 1 notes

The exact released body collapses to a 20-byte sibling call in the isolated
function build.

### Attempt 2 notes

An ordinary local setter pointer preserves the released increment and direct
call while retaining the target call frame.

### Attempt 3 notes

A volatile setter pointer prevents the sibling call but emits a 56-byte
indirect-call frame.

## Outcome

The source-faithful local setter form matched without a compiler barrier.
