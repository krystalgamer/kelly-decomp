# __7stringxPCci

- Address: `0x0034D438`
- Size: `0x94` (148 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 99.3243 | 97.2973 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released null-string, lazy initialization, length, buffer acquisition, and member setup paths. Correcting the negative-low initialized-global nominal address matched all bytes.

## Outcome

Matched string construction from characters
