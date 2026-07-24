# null_terminate__C10string_buf

- Address: `0x0034D380`
- Size: `0x5C` (92 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 84.7826 | 73.913 | `candidate.cpp` |
| 2 | different | 86.9565 | 82.6087 | `candidate.cpp` |
| 3 | different | 86.9565 | 82.6087 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Read the exact released string_buf layout, capacity check/error call, and terminator store. Fixing the final length register matched on attempt 4.

## Outcome

Matched string buffer termination
