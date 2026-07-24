# find__C20script_library_classPCc

- Address: `0x0034EFF0`
- Size: `0x84` (132 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_library_class.cpp`
- Reference source: `KS/SRC/script_library_class.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 52.9412 | 38.2353 | `candidate.cpp` |
| 3 | different | 63.9706 | 52.9412 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 63.9706 | 52.9412 | `candidate.cpp` |

## Outcome

Deferred the released script-library function lookup after five source-level attempts; temporary construction, tree lookup, result selection, and destruction were reconstructed, but RAII branch layout remained different.
