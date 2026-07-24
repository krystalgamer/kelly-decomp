# __10chunk_file

- Address: `0x00335FC8`
- Size: `0x7C` (124 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/chunkfile.cpp`
- Reference source: `KS/SRC/chunkfile.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.7419 | 51.6129 | `candidate.cpp` |
| 2 | different | 92.7419 | 51.6129 | `candidate.cpp` |
| 3 | different | 82.2581 | 38.7097 | `candidate.cpp` |
| 4 | different | 79.0323 | 51.7241 | `candidate.cpp` |
| 5 | different | 92.7419 | 51.6129 | `candidate.cpp` |

## Outcome

Deferred the released chunk-file constructor after five source-level attempts; the exact subobject layout reached 92.74%, but the inlined pstring zero-loop pointer increment remained scheduled before the branch.
