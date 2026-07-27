# add_thread__Q213script_object8instancePC13vm_executable

- Address: `0x00350478`
- Size: `0xEC` (236 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_object.cpp`
- Reference source: `KS/SRC/script_object.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 35.1695 | 10.1695 | `candidate.cpp` |
| 3 | different | 97.4576 | 96.6102 | `candidate.cpp` |
| 4 | different | 67.7966 | 50.8475 | `candidate.cpp` |
| 5 | different | 44.4915 | 25.4237 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The canonical old-STL list insertion is exact except for the order of two independent constructor argument moves; forcing that scheduler tie would require source-absent compiler control or assembly.
