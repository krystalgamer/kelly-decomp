# serial_in__FR10chunk_filePf

- Address: `0x00336998`
- Size: `0x5C` (92 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/chunkfile.cpp`
- Reference source: `KS/SRC/chunkfile.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.3043 | 4.3478 | `candidate.cpp` |
| 2 | different | 93.4783 | 82.6087 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the exact CF_SERIAL_IN behavior and chunk_file text/binary/stash layout. Branch-local continuation barriers reproduced the duplicated epilogues on attempt 3.

## Outcome

Matched float chunk serialization
