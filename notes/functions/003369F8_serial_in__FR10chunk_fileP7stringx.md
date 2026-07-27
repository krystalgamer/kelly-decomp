# serial_in__FR10chunk_fileP7stringx

- Address: `0x003369F8`
- Size: `0xF4` (244 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/chunkfile.cpp`
- Reference source: `KS/SRC/chunkfile.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 60.8696 | 56.5217 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Attempt 1 used the exact released chunkfile.cpp function body with released chunk_file declarations and the current canonical stringx context; the single reviewed assembly diff showed an extra temporary stringx because that local canonical header omitted the authentic operator=(const char*) declaration. Attempts 2-3 preserved the same source semantics while trying a separate complete canonical context header, but the isolated candidate copier could not resolve the sibling header. Attempt 4 inlined that authentic complete stringx context and matched all 244 bytes and all 61 instructions exactly.

## Outcome

Matched at 100% byte and instruction identity using the exact released serial_in body and complete canonical stringx/chunk declarations. The tested source is integration-ready for src/KS/SRC/chunkfile.cpp; tracked files were not modified.
