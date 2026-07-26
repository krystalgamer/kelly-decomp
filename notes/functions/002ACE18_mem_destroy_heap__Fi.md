# mem_destroy_heap__Fi

- Address: `0x002ACE18`
- Size: `0xE8` (232 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/archalloc.cpp`
- Reference source: `KS/SRC/archalloc.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.4262 | 21.3115 | `candidate-1-exact-released.cpp` |
| 2 | different | 18.5345 | 5.1724 | `candidate-2-hoisted-heap-reference.cpp` |
| 3 | different | 34.0517 | 13.7931 | `candidate-3-hoisted-array-base.cpp` |
| 4 | different | 34.0517 | 13.7931 | `candidate-4-split-heap-base.cpp` |
| 5 | different | 34.4262 | 21.3115 | `candidate-5-post-branch-heap-base.cpp` |

## Outcome

Deferred after five source-faithful attempts. The exact heap layout, calls, globals, diagnostics, frees, and clearing stores are recovered, but the target is an unreproducible scheduler/CSE midpoint between duplicated and fully shared heap-base address formation.
