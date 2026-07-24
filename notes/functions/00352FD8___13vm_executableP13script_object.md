# __13vm_executableP13script_object

- Address: `0x00352FD8`
- Size: `0x6C` (108 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/vm_executable.cpp`
- Reference source: `KS/SRC/vm_executable.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 62.037 | 25.9259 | `candidate.cpp` |
| 2 | different | 94.4444 | 77.7778 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read all owner/string/vector/scalar member offsets. Reconstructing the real member constructors and reserving compiler cleanup space matched on attempt 3.

## Outcome

Matched VM executable constructor
