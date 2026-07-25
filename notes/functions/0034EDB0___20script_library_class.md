# __20script_library_class

- Address: `0x0034EDB0`
- Size: `0xB8` (184 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_library_class.cpp`
- Reference source: `KS/SRC/script_library_class.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 57.0652 | 30.4348 | `candidate.cpp` |
| 2 | different | 62.5 | 45.6522 | `candidate.cpp` |
| 3 | different | 93.4783 | 86.9565 | `candidate.cpp` |
| 4 | different | 78.8043 | 71.7391 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

The exact released default constructor matched using dedicated shared source-faithful script-library and GNU 2 set-constructor declarations, without altering the reduced SLF header used elsewhere. A precise EE normalization restores the shipped allocator pool/result register schedule; the full 3,866-function ROM rebuild passed.

## Outcome

Matched the released script-library-class default constructor with shared set and class declarations.
