# handle_chunk__20ai_locomotion_directR10chunk_fileR7stringx

- Address: `0x00109D88`
- Size: `0x1C` (28 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_locomotion_direct.cpp`
- Reference source: `KS/SRC/ai_locomotion_direct.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `native_ai_chunk_probe_1.cpp` |
| 2 | different | 7.1429 | 0.0 | `native_ai_chunk_probe_2.cpp` |
| 3 | different | 7.1429 | 0.0 | `native_ai_chunk_probe_3.cpp` |

## Outcome

The released direct base call, named reference aliases, and a void
return-expression form all compile as eight-byte sibling calls. The target
preserves a 28-byte call frame, so the former barrier-dependent match was
removed and the function was deferred.
