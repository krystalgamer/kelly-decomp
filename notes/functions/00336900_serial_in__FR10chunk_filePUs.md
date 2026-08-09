# serial_in__FR10chunk_filePUs

- Address: `0x00336900`
- Size: `0x30` (48 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/chunkfile.cpp`
- Reference source: `KS/SRC/chunkfile.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released overload uses the shared chunk-file declarations, deserializes
through the signed-int implementation, then narrows to `unsigned short`.

## Outcome

The local forward declarations were removed; the released overload remains
exact.
