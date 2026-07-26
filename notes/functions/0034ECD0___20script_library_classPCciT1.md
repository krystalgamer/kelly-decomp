# __20script_library_classPCciT1

- Address: `0x0034ECD0`
- Size: `0xE0` (224 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_library_class.cpp`
- Reference source: `KS/SRC/script_library_class.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 61.8421 | 31.5789 | `candidate.cpp` |
| 3 | different | 64.9123 | 47.3684 | `candidate.cpp` |
| 4 | different | 37.0536 | 14.2857 | `candidate.cpp` |
| 5 | different | 90.1786 | 87.5 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released constructor semantics, old-STL set layout, allocator size, fields, and manager registration are recovered, but final singleton-load and tree-header scheduling differs across seven instructions and cannot be forced without frozen-tooling changes.
