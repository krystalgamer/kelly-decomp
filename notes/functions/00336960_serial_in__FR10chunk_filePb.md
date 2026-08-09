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

The released integer deserialization and bool normalization use the shared
chunk-file declarations.

## Outcome

The local forward declarations were removed; the released helper remains exact.
