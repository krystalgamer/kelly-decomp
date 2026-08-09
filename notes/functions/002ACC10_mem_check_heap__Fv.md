# mem_check_heap__Fv

- Address: `0x002ACC10`
- Size: `0x34` (52 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/archalloc.cpp`
- Reference source: `KS/SRC/archalloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released system/debug heap consistency checks use the shared allocator
declaration. A local second-call pointer preserves the normal call.

## Outcome

The local heap layout and compiler barrier were removed; the released checker
remains exact.
