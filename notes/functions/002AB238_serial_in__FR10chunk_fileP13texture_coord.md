# serial_in__FR10chunk_fileP13texture_coord

- Address: `0x002AB238`
- Size: `0x3C` (60 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/serialin.cpp`
- Reference source: `KS/SRC/serialin.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 63.3333 | 53.3333 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released two float deserializations compiled the second call as a tail call and emitted 56 bytes.

### Attempt 2 notes

The shared texture-coordinate record and a local float-reader pointer preserve
the second framed deserialization call.

## Outcome

The local record and compiler barrier were removed.
