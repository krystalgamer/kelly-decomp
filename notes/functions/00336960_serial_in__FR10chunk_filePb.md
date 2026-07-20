# serial_in__FR10chunk_filePb

- Address: `0x00336960`
- Size: `0x34` (52 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/chunkfile.cpp`
- Reference source: `KS/SRC/chunkfile.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released integer deserialization followed by bool normalization matched exactly with the EE compiler's four-byte bool representation.

## Outcome

The released bool serial input helper matched exactly on the first attempt.
