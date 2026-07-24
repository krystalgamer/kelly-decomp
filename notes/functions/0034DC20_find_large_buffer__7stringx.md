# find_large_buffer__7stringx

- Address: `0x0034DC20`
- Size: `0x70` (112 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.6786 | 17.8571 | `candidate.cpp` |
| 2 | different | 27.6786 | 17.8571 | `candidate.cpp` |
| 3 | different | 34.1667 | 10.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Read the released large string-buffer pool loop, exact static pool globals, refcount check, and exhaustion error. Expressing the exhausted path as the released out-of-line label matched on attempt 4.

## Outcome

Matched large string buffer lookup
