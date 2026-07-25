# remove_leading__7stringxPCc

- Address: `0x0034EA00`
- Size: `0xB0` (176 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 42.6136 | 25.0 | `candidate.cpp` |
| 2 | different | 25.5 | 12.0 | `candidate.cpp` |
| 3 | different | 80.1136 | 72.7273 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released leading-character scan and slice/copy sequence matched on Sol attempt four after preserving the string-buffer pointer in the original argument register.

## Outcome

Matched leading-character removal from stringx.
