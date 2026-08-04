# __Q220script_library_class8functioni

- Address: `0x0034F078`
- Size: `0x20` (32 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_library_class.cpp`
- Reference source: `KS/SRC/script_library_class.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 81.25 | 50.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate exposed a helper-symbol, independent-store, or call-delay scheduling mismatch.

### Attempt 2 notes

The shared script-function declaration uses the released empty name and lets
the compiler install the function vtable.

## Outcome

The exact constructor matches without a manual vtable assignment.
