# kill_thread__Q213script_object8instancePC13vm_executable

- Address: `0x003508E0`
- Size: `0xE8` (232 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_object.cpp`
- Reference source: `KS/SRC/script_object.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 36.6379 | 5.1724 | `candidate.cpp` |
| 2 | different | 22.8448 | 3.4483 | `candidate.cpp` |
| 3 | different | 32.7586 | 5.1724 | `candidate.cpp` |
| 4 | different | 30.5085 | 6.7797 | `candidate.cpp` |
| 5 | different | 31.0345 | 5.1724 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released kill_thread traversal, deletion, erase semantics, and authentic list context are recovered, but allocator sinking, iterator stack updates, retained null checks, and frame allocation do not align simultaneously.
